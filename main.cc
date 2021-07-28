#include <gtkmm/application.h>

#include "gui.hh"

int main(int argc, char /* const */ *argv[])
{
    std::shared_ptr<Gtk::Application> app = Gtk::Application::create("org.gtkmm.example");
    return app->make_window_and_run<Widgets>(argc, argv);
}
