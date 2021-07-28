#include <iostream>

#include "input.hh"

Widgets::Widgets(): 
    button_ok("OK"),
    direction("Window direction"),
    vertical_container(Gtk::Orientation::VERTICAL)
{   
    set_size_request(800, 600);
    set_title("Aerodynamic simulator");
    set_child(vertical_container);

    direction.set_expand(true);

    button_ok.set_margin(10);
    button_ok.signal_clicked().connect(sigc::mem_fun(*this, &Widgets::button_ok_clicked));
    set_default_widget(button_ok);

    vertical_container.append(entry_direction);
    vertical_container.append(direction);
    vertical_container.append(button_ok);
}

Widgets::~Widgets()
{

}

void Widgets::button_ok_clicked()
{
    std::cout << "OK clicked (TODO)" << std::endl;
}