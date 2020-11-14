#include <FL/Fl.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Window.H>

int main() {
  Fl_Window *window = new Fl_Window(1200, 600);
  /*Fl_Box *box = new Fl_Box(20, 40, 300, 100, "Hello, World!");
  box->box(FL_UP_BOX);
  box->labelfont(FL_BOLD + FL_ITALIC);
  box->labelsize(36);
  box->labeltype(FL_SHADOW_LABEL);*/


Fl_Button *radniciButton = new Fl_Button(20, 40, 300, 100, "Radnici");
	
  window->end();
  window->show();
	
  return Fl::run();
}
