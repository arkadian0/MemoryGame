
#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
#include <stdio.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_ttf.h>
int main(int argc, char **argv){

   ALLEGRO_DISPLAY *display = NULL;
   ALLEGRO_EVENT_QUEUE *event_queue = NULL;
   ALLEGRO_BITMAP  *image1   = NULL;
   ALLEGRO_BITMAP  *image2   = NULL;
   ALLEGRO_BITMAP  *image3   = NULL;
    ALLEGRO_BITMAP  *image4   = NULL;
   ALLEGRO_BITMAP  *image5   = NULL;
   ALLEGRO_BITMAP  *image6   = NULL;
    ALLEGRO_BITMAP  *image7   = NULL;
   ALLEGRO_BITMAP  *image8   = NULL;
   ALLEGRO_BITMAP  *image9   = NULL;
    ALLEGRO_BITMAP  *image10   = NULL;
   ALLEGRO_BITMAP  *image11   = NULL;
   ALLEGRO_BITMAP  *image12   = NULL;
    ALLEGRO_BITMAP  *image13   = NULL;
   ALLEGRO_BITMAP  *image14   = NULL;
   ALLEGRO_BITMAP  *image15   = NULL;
    ALLEGRO_BITMAP  *image16   = NULL;
   ALLEGRO_BITMAP  *image17   = NULL;
   ALLEGRO_BITMAP  *image18   = NULL;


   if(!al_init()) {
      al_show_native_message_box(display, "Error", "Error", "Failed to initialize allegro!",
                                 NULL, ALLEGRO_MESSAGEBOX_ERROR);
      return 0;
   }

   al_init_font_addon(); // initialize the font addon
   al_init_ttf_addon();// initialize the ttf (True Type Font) addon

   if(!al_init_image_addon()) {
      al_show_native_message_box(display, "Error", "Error", "Failed to initialize al_init_image_addon!",
                                 NULL, ALLEGRO_MESSAGEBOX_ERROR);
      return 0;
   }

    al_install_keyboard();

    al_install_mouse();
   al_init_primitives_addon();
   display = al_create_display(1366,768);
   event_queue = al_create_event_queue();
   al_register_event_source(event_queue,al_get_display_event_source(display));
   al_register_event_source(event_queue,al_get_mouse_event_source());
   while(1)
   {
      ALLEGRO_EVENT ev;
      ALLEGRO_TIMEOUT timeout;
      al_init_timeout(&timeout, 0.06);

      bool get_event = al_wait_for_event_until(event_queue, &ev, &timeout);

      if(get_event && ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
         break;
      }

      al_clear_to_color(al_map_rgb(0,0,0));
      al_flip_display();
   }

   al_destroy_display(display);
   al_destroy_event_queue(event_queue);

   return 0;
}
