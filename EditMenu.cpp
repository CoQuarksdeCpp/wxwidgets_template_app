#include "EditMenu.h"

// Method to create the Edit menu and its items
wxMenu* EditMenu::CreateMenu() {
    wxMenu* menuEdit = new wxMenu;
    menuEdit->Append(wxID_EDIT, "Edit Option", "Edit features (under construction)");
    return menuEdit;
}
