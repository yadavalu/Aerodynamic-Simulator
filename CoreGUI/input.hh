#ifndef __INPUT_ASIM_COREGUI_HH__
#define __INPUT_ASIM_COREGUI_HH__

#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm.h>

class Widgets : public Gtk::Window
{
public:
    Widgets();
    ~Widgets() override;

protected:
    class ModelColumns : public Gtk::TreeModel::ColumnRecord
    {
    public:
        ModelColumns() 
        { 
            add(column_id); 
            add(column_name); 
        }

        Gtk::TreeModelColumn<unsigned int> column_id;
        Gtk::TreeModelColumn<Glib::ustring> column_name;
    };

    ModelColumns columns;
    
    Gtk::Box vertical_container;
    
    Gtk::Label direction;
    Gtk::Entry entry_direction;
    Gtk::Button button_ok;
    void button_ok_clicked();
};

#endif
