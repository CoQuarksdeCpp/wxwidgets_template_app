#include "HelpMenu.h"

// Method to create the Help menu and its items
wxMenu* HelpMenu::CreateMenu() {
    wxMenu* menuHelp = new wxMenu;
    menuHelp->Append(wxID_HELP, "&About\tF1", "Show help information");
    return menuHelp;
}
