#include <gtkmm.h>

class Window : public Gtk::Window {
public:
  Gtk::VBox vbox;
  Gtk::Entry first_name_entry, last_name_entry;
  Gtk::Button button;
  Gtk::Label first_name_label, last_name_label, combined_label;

  Window() {
    // setup
    button.set_label("Combine names");
    button.set_sensitive(false);
    first_name_label.set_text("First name");
    last_name_label.set_text("Last name");
    combined_label.set_text("");

    // adding to vbox
    vbox.pack_start(first_name_label);
    vbox.pack_start(first_name_entry);
    vbox.pack_start(last_name_label);
    vbox.pack_start(last_name_entry);
    vbox.pack_start(button);
    vbox.pack_start(combined_label);

    add(vbox);  //Add vbox to window
    show_all(); //Show all widgets

    // checking both entries when one of them changes
    first_name_entry.signal_changed().connect([this]() {
      if (first_name_entry.get_text() != "" && last_name_entry.get_text() != "") {
        button.set_sensitive(true); // set activate when true
      } else {
        button.set_sensitive(false); // deactivates button when empty
      }
    });

    last_name_entry.signal_changed().connect([this]() {
      if (first_name_entry.get_text() != "" && last_name_entry.get_text() != "") {
        button.set_sensitive(true);
      } else {
        button.set_sensitive(false);
      }
    });

    // combine names on button click
    button.signal_clicked().connect([this]() {
      combined_label.set_text("Names combined: " + first_name_entry.get_text() + " " + last_name_entry.get_text());
    });
  }
};

int main() {
  Gtk::Main gtk_main;
  Window window;
  window.set_title("Øving 4");
  gtk_main.run(window);
}
