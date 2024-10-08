#pragma once

#include <wx/wx.h>

class MyFrame : public wxFrame {
public:
    MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);  // Constructor declaration
private:
    void OnQuit(wxCommandEvent& event);   // Event handler for quit
    void OnEdit(wxCommandEvent& event);   // Event handler for edit
    void OnHelp(wxCommandEvent& event);   // Event handler for help


    wxDECLARE_EVENT_TABLE();  // Declare the event table here
};


