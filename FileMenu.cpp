#include "FileMenu.h"

// Method to create the File menu and its items
wxMenu* FileMenu::CreateMenu() {
    wxMenu* menuFile = new wxMenu;
    menuFile->Append(wxID_EXIT, "E&xit\tAlt-X", "Quit the application");
    return menuFile;
}
