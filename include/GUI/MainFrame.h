#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame {
  public:
  MainFrame(const wxString& title);

  private:
  void OnHello(wxCommandEvent& event);
  void OnExit(wxCommandEvent& event);
  void OnAbout(wxCommandEvent& event);

  void CreateMenu();
  void CreateMainPanel();
  void CreateChoiceBox(wxPanel* panel);

  enum { ID_Hello = 1 };
};
