#include "MainFrame.h"
#include "FileMenu.h"
#include "EditMenu.h"
#include "HelpMenu.h"
#include "MainAPP.h"

// Event table to connect events to their respective handlers
wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)
EVT_MENU(wxID_EXIT, MyFrame::OnQuit)
EVT_MENU(wxID_EDIT, MyFrame::OnEdit)
EVT_MENU(wxID_HELP, MyFrame::OnHelp)
wxEND_EVENT_TABLE()




// Constructor definition
MyFrame::MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(800, 600)) {

    // Create a menu bar
    wxMenuBar* menuBar = new wxMenuBar();

    // Create menus using FileMenu, EditMenu, and HelpMenu classes
    FileMenu fileMenu;
    menuBar->Append(fileMenu.CreateMenu(), "&File");

    EditMenu editMenu;
    menuBar->Append(editMenu.CreateMenu(), "&Edit");

    HelpMenu helpMenu;
    menuBar->Append(helpMenu.CreateMenu(), "&Help");

    SetMenuBar(menuBar);
}

// Event handler for Quit menu item
void MyFrame::OnQuit(wxCommandEvent& WXUNUSED(event)) {
    Close(true);
}

// Event handler for Edit menu item
void MyFrame::OnEdit(wxCommandEvent& WXUNUSED(event)) {
    wxMessageBox("Edit feature is under construction.", "Edit", wxOK | wxICON_INFORMATION);
}

// Event handler for Help menu item
void MyFrame::OnHelp(wxCommandEvent& WXUNUSED(event)) {
    wxMessageBox("This is a sample Help message.", "Help", wxOK | wxICON_INFORMATION);
}
