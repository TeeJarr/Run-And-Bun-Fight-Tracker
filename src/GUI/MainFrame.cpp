#include "MainFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title) : wxFrame(NULL, wxID_ANY, title) {
  CreateMenu();
  CreateMainPanel();
}

void MainFrame::CreateMenu() {
  wxMenu* menuFile = new wxMenu;
  menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
                   "Help string shown in status bar for this menu item");
  menuFile->AppendSeparator();
  menuFile->Append(wxID_EXIT);

  wxMenu* menuHelp = new wxMenu;
  menuHelp->Append(wxID_ABOUT);

  wxMenuBar* menuBar = new wxMenuBar;
  menuBar->Append(menuFile, "&File");
  menuBar->Append(menuHelp, "&Help");

  SetMenuBar(menuBar);

  // CreateStatusBar();
  // SetStatusText("Welcome to wxWidgets!");
  Bind(wxEVT_MENU, &MainFrame::OnHello, this, ID_Hello);
  Bind(wxEVT_MENU, &MainFrame::OnAbout, this, wxID_ABOUT);
  Bind(wxEVT_MENU, &MainFrame::OnExit, this, wxID_EXIT);
}

void MainFrame::CreateMainPanel() {
  wxPanel* panel = new wxPanel(this);
  CreateChoiceBox(panel);
}

void MainFrame::CreateChoiceBox(wxPanel* panel) {
  const wxPoint& pos = {100, 100};
  const wxSize& size = {100, 50};
  wxChoice* choice   = new wxChoice(panel, wxID_ANY, pos, size);
}

void MainFrame::OnExit(wxCommandEvent& event) { Close(true); }
void MainFrame::OnAbout(wxCommandEvent& event) { wxLogMessage("Hello world from wxWidgets!"); }
void MainFrame::OnHello(wxCommandEvent& event) {}
