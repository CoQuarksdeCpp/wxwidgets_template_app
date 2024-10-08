#include <wx/wx.h>
#include "MainFrame.h"
#include "MainAPP.h"


// Main application class
bool MyApp::OnInit() {
    // Erstellt das Hauptfenster (Frame)
    MyFrame* frame = new MyFrame("Hello wxWidgets", wxPoint(50, 50), wxSize(450, 340));
    frame->Show(true);
    return true;
};


// Main function that initializes the application
wxIMPLEMENT_APP(MyApp);