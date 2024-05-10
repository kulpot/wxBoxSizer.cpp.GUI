#include "MainFrame.h"
#include <wx/wx.h>

//C++ GUI Programming For Beginners | Episode 12 - wxBoxSizer //ref link:https://www.youtube.com/watch?v=b5RtMxMZikg&list=PLFk1_lkqT8MbVOcwEppCPfjGOGhLvcf9G&index=14
//----------------SETUP--------------------------------------START---

//Property Manager->
//Add Existing Property Sheets..->
//wxWidgets folder->wxwidgets.props->open

//Project Properties->
//Config: All Config / Platforms : All Platforms :
//->Linker->System ->
//SubSystem->Windows(/ SUBSYSTEM:WINDOWS)

//----------------SETUP--------------------------------------END---

MainFrame::MainFrame(const wxString& title)
	: wxFrame(nullptr, wxID_ANY, title)
{
	wxButton* button1 = new wxButton(this, wxID_ANY, "Button 1", wxDefaultPosition, wxSize(300, 100));
	wxButton* button2 = new wxButton(this, wxID_ANY, "Button 2", wxDefaultPosition, wxSize(300, 100));

	wxBoxSizer* boxSizer = new wxBoxSizer(wxHORIZONTAL);

	boxSizer->Add(button1, 1, wxSHAPED);
	boxSizer->Add(button2, 0);

	SetSizerAndFit(boxSizer);
}
























































//#include "MainFrame.h"
//#include <wx/wx.h>
////#include <wx/spinctrl.h>
//
///*******Custom ID - Rules****************
//* 1 Must be positive
//* 2 Cannot be 0 or 1
//* 3 Cannot be from wxID_LOWEST (4999) to wxID_HIGHEST (5999)
//********Custom ID - Rules****************
//*
//*/
//
////enum IDs {
////	BUTTON_ID = 2,
////	SLIDER_ID = 3,
////	TEXT_ID = 4
////};
//
////-------------Static event Handling------------------
////wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
////	EVT_BUTTON(BUTTON_ID, MainFrame::OnButtonClicked)
////	EVT_SLIDER(SLIDER_ID, MainFrame::OnSliderChanged)
////	EVT_TEXT(TEXT_ID, MainFrame::OnTextChanged)
////wxEND_EVENT_TABLE()
//
//MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title) {
//	//wxPanel* panel = new wxPanel(this);
//	wxPanel* panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxWANTS_CHARS);
//	wxButton* btn1 = new wxButton(panel, wxID_ANY, "Button 1", wxPoint(300, 150), wxSize(200, 100), wxWANTS_CHARS);
//	wxButton* btn2 = new wxButton(panel, wxID_ANY, "Button 2", wxPoint(300, 350), wxSize(200, 100));
//	//wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(300, 250), wxSize(200, 100));
//
//	//------------------CONSTRUCTOR----------------------------------
//
//	//panel->Bind(wxEVT_KEY_DOWN, &MainFrame::OnKeyEvent, this);
//	//btn1->Bind(wxEVT_KEY_DOWN, &MainFrame::OnKeyEvent, this);
//	panel->Bind(wxEVT_CHAR_HOOK, &MainFrame::OnKeyEvent, this);
//	//panel->Bind(wxEVT_KEY_UP, &MainFrame::OnKeyEvent, this);
//	//panel->Bind(wxEVT_CHAR, &MainFrame::OnKeyEvent, this);
//
//	CreateStatusBar();
//	
//
//	//wxStatusBar* statusBar = CreateStatusBar();
//	//statusBar->SetDoubleBuffered(true);
//
//	//----------------REF LINK(AllMouseEvents):https://docs.wxwidgets.org/3.0/classwx_mouse_event.html-----------------------
//	//panel->Bind(wxEVT_LEFT_DOWN, &MainFrame::OnMouseEvent, this);
//	//panel->Bind(wxEVT_RIGHT_DOWN, &MainFrame::OnMouseEvent, this);
//	//panel->Bind(wxEVT_MIDDLE_DOWN, &MainFrame::OnMouseEvent, this);
//	//panel->Bind(wxEVT_LEFT_DCLICK, &MainFrame::OnMouseEvent, this);
//	//panel->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent, this);
//	//button->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent, this);
//
//
//	//wxButton* button = new wxButton(panel, BUTTON_ID, "Button", wxPoint(300, 275), wxSize(200, 50));
//	//wxSlider* slider = new wxSlider(panel, SLIDER_ID, 0, 0, 100, wxPoint(300, 200), wxSize(200, -1));
//	//wxTextCtrl* text = new wxTextCtrl(panel, TEXT_ID, "", wxPoint(300, 375), wxSize(200, -1));
//	//wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(300, 275), wxSize(200, 50));
//	//wxSlider* slider = new wxSlider(panel, wxID_ANY, 0, 0, 100, wxPoint(300, 200), wxSize(200, -1));
//	//wxTextCtrl* text = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(300, 375), wxSize(200, -1));
//	//
//	//button->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);
//	//slider->Bind(wxEVT_SLIDER, &MainFrame::OnSliderChanged, this);
//	//text->Bind(wxEVT_TEXT, &MainFrame::OnTextChanged, this);
//	//
//	//button->Unbind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);
//
//	//wxButton* button1 = new wxButton(panel, wxID_ANY, "Button 1", wxPoint(300, 275), wxSize(200, 50));
//	//wxButton* button2 = new wxButton(panel, wxID_ANY, "Button 2", wxPoint(300, 350), wxSize(200, 50));
//
///********Event Propagation*********
//* Button is child of Panel and Panel is a child of MainFrame
//**********Event Propagation*********
//*/
//	//panel->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);
//	//this->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);
//	//this->Bind(wxEVT_CLOSE_WINDOW, &MainFrame::OnClose, this);
//	//this->Bind(wxEVT_BUTTON, &MainFrame::OnAnyButtonClicked, this);
//	//button1->Bind(wxEVT_BUTTON, &MainFrame::OnButton1Clicked, this);
//	//button2->Bind(wxEVT_BUTTON, &MainFrame::OnButton2Clicked, this);
//	//wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(150, 50), wxSize(100, 35), wxBU_LEFT);
//	//
//	//wxCheckBox* checkBox = new wxCheckBox(panel, wxID_ANY, "CheckBox",
//	//	wxPoint(550, 55), wxDefaultSize, wxCHK_3STATE | wxCHK_ALLOW_3RD_STATE_FOR_USER);
//	//
//	//wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "StaticText - NOT editable",
//	//	wxPoint(0, 150), wxSize(400, -1), wxALIGN_CENTER_HORIZONTAL);
//	//staticText->SetBackgroundColour(*wxLIGHT_GREY);
//	//
//	//wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, "TextCtrl - editable",
//	//	wxPoint(500, 145), wxSize(200, -1), wxTE_PASSWORD);
//	//
//	//wxSlider* slider = new wxSlider(panel, wxID_ANY, 25, 0, 100, wxPoint(100, 250), wxSize(200, -1), wxSL_VALUE_LABEL);
//	//
//	////wxGauge* gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(500, 255), wxSize(200, -1));
//	//wxGauge* gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(590, 205), wxSize(-1, 125), wxGA_VERTICAL);
//	//gauge->SetValue(75);
//	//
//	//wxArrayString choices;
//	//choices.Add("Item C");
//	//choices.Add("Item A");
//	//choices.Add("Item B");
//	//
//	//wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(150, 375), wxSize(75, -1), choices, wxCB_SORT);
//	//choice->Select(0);
//	//
//	//wxSpinCtrl* spinCtrl = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(550, 375), wxSize(100, -1), wxSP_WRAP);
//	//
//	//wxListBox* listBox = new wxListBox(panel, wxID_ANY, wxPoint(150, 475), wxSize(100, -1), choices, wxLB_MULTIPLE);
//	//
//	////wxRadioBox* radioBox = new wxRadioBox(panel, wxID_ANY, "RadioBox", wxPoint(485, 475), wxDefaultSize, choices);
//	//wxRadioBox* radioBox = new wxRadioBox(panel, wxID_ANY, "RadioBox",
//	//	wxPoint(555, 450), wxDefaultSize, choices, 3, wxRA_SPECIFY_ROWS);
//	//
//	////wxButton button2(panel, wxID_ANY, "Button2");	//dont allocate controls like this line of code, it can cause some problems
//	////no need to de-allocate memory for wxwidgets it will delete all memory after use
//	//
//	////--------More Controls in wxWidgets--------------------
//	////GroupClassCtrl ref link:https://docs.wxwidgets.org/3.0/group__group__class__ctrl.html
//	////GroupClassPickers ref link:https://docs.wxwidgets.org/3.0/group__group__class__pickers.html
//}
//
//void MainFrame::OnKeyEvent(wxKeyEvent& evt) {
//	if (evt.GetKeyCode() == WXK_TAB) {
//		wxWindow* window = (wxWindow*)evt.GetEventObject();
//		window->Navigate();
//	}
//	//if (evt.GetUnicodeKey() == 'A') {
//	//	wxLogStatus("A was pressed!");
//	//}
//	////else if (evt.GetKeyCode() == 313) {
//	//else if (evt.GetKeyCode() == WXK_HOME) {
//	//	wxLogStatus("HOME KEY was pressed!");
//	//}
//	//return;
//
//	wxChar keyChar = evt.GetUnicodeKey();
//
//	if (keyChar == WXK_NONE) {
//		int keyCode = evt.GetKeyCode();
//		wxLogStatus("Key Event %d", keyCode);
//	}
//	else {
//		wxLogStatus("Key Event %c", keyChar);
//	}
//
//	//wxLogStatus("Key Event %c", keyChar);
//}
//
////void MainFrame::OnMouseEvent(wxMouseEvent& evt) {
////	//wxPoint mousePos = evt.GetPosition();
////	wxPoint mousePos = wxGetMousePosition();	// Screen coordinate mouse event motion // notice:Default is ClientToScreen
////	mousePos = this->ScreenToClient(mousePos);	//ScreenToClient: mouse event motion value unaffected when reposition the Application
////	wxString message = wxString::Format("Mouse Event Detected! (x=%d y=%d)", mousePos.x, mousePos.y);
////	//wxLogStatus("Mouse Event Detected!");
////	wxLogStatus(message);
////}
//
////void MainFrame::OnClose(wxCloseEvent& evt) {
////	wxLogMessage("Frame Closed");
////	evt.Skip(); // required to close the program //NOTE: cant close if this line is not use and must close using taskbar force close
////}
////
//////void MainFrame::OnButtonClicked(wxCommandEvent& evt) {
////void MainFrame::OnAnyButtonClicked(wxCommandEvent & evt) {
////	//wxLogStatus("Button Clicked");
////	wxLogMessage("Button Clicked");
////}
////
////void MainFrame::OnButton1Clicked(wxCommandEvent& evt) {
////	wxLogStatus("Button 1 Clicked");
////	evt.Skip();		// will show log message
////}
////
////void MainFrame::OnButton2Clicked(wxCommandEvent& evt) {
////	wxLogStatus("Button 2 Clicked");
////	evt.Skip();
////}
//
////void MainFrame::OnSliderChanged(wxCommandEvent& evt) {
////	wxString str = wxString::Format("Slider Value: %d", evt.GetInt());
////	wxLogStatus(str);
////}
////
////void MainFrame::OnTextChanged(wxCommandEvent& evt) {
////	wxString str = wxString::Format("Text: %s", evt.GetString());
////	wxLogStatus(str);
////}