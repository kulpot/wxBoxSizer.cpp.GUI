#include "App.h"
#include "MainFrame.h"
#include <wx/wx.h>

//ref link:https://www.youtube.com/watch?v=cQalRGqRRp4&list=PLFk1_lkqT8MbVOcwEppCPfjGOGhLvcf9G&index=3&t=275s

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	MainFrame* mainFrame = new MainFrame("C++ GUI");
	mainFrame->SetClientSize(800, 600);
	mainFrame->Center();
	mainFrame->Show();
	return true;
}