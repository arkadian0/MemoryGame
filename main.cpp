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
   bool done = false;
   int width = 1366;
   int height = 768;
   int pos_x = width/2;
   int pos_y = height/2;
 int szerokoscObrazka = 200;
 int wysokoscObrazka = 200;

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
   if(!display) {
      al_show_native_message_box(display, "Error", "Error", "Failed to initialize display!",
                                 NULL, ALLEGRO_MESSAGEBOX_ERROR);
      return 0;
   }
ALLEGRO_FONT *font = al_load_ttf_font("arial.ttf",72,0 );
   al_draw_text(font, al_map_rgb(128, 0, 0), 1366/2-280, 10,ALLEGRO_ALIGN_CENTRE, "M");
   al_draw_text(font, al_map_rgb(255, 255, 255), 1366/2-120, 10,ALLEGRO_ALIGN_CENTRE, "EMORY");
   al_draw_text(font, al_map_rgb(128, 0, 0), 1366/2+80, 10,ALLEGRO_ALIGN_CENTRE, "G");
   al_draw_text(font, al_map_rgb(255, 255, 255), 1366/2+190, 10,ALLEGRO_ALIGN_CENTRE, "AME");

   image1 = al_load_bitmap("znakzapytania.png");
   image2 = al_load_bitmap("znakzapytania.png");
   image3 = al_load_bitmap("znakzapytania.png");

   image4 = al_load_bitmap("znakzapytania.png");
   image5 = al_load_bitmap("znakzapytania.png");
   image6 = al_load_bitmap("znakzapytania.png");

   image7 = al_load_bitmap("znakzapytania.png");
   image8 = al_load_bitmap("znakzapytania.png");
   image9 = al_load_bitmap("znakzapytania.png");

   image10 = al_load_bitmap("znakzapytania.png");
   image11 = al_load_bitmap("znakzapytania.png");
   image12 = al_load_bitmap("znakzapytania.png");

   image13 = al_load_bitmap("znakzapytania.png");
   image14 = al_load_bitmap("znakzapytania.png");
   image15 = al_load_bitmap("znakzapytania.png");

   image16 = al_load_bitmap("znakzapytania.png");
   image17 = al_load_bitmap("znakzapytania.png");
   image18 = al_load_bitmap("znakzapytania.png");

   if(!image1||!image2||!image3) {
      al_show_native_message_box(display, "Error", "Error", "Failed to load image!",
                                 NULL, ALLEGRO_MESSAGEBOX_ERROR);
      al_destroy_display(display);
      return 0;
   }

al_draw_bitmap(image1,100,100,0);
al_draw_bitmap(image2,100,301,0);
al_draw_bitmap(image3,100,502,0);
al_draw_bitmap(image4,301,100,0);
al_draw_bitmap(image5,301,301,0);
al_draw_bitmap(image6,301,502,0);
al_draw_bitmap(image7,502,100,0);
al_draw_bitmap(image8,502,301,0);
al_draw_bitmap(image9,502,502,0);
al_draw_bitmap(image10,703,100,0);
al_draw_bitmap(image11,703,301,0);
al_draw_bitmap(image12,703,502,0);
al_draw_bitmap(image13,904,100,0);
al_draw_bitmap(image14,904,301,0);
al_draw_bitmap(image15,904,502,0);
al_draw_bitmap(image16,1105,100,0);
al_draw_bitmap(image17,1105,301,0);
al_draw_bitmap(image18,1105,502,0);

while(!done)
   {
      ALLEGRO_EVENT ev;
     al_wait_for_event(event_queue,&ev);
     int szerokosc =  al_get_bitmap_width(image1);
     int wysokosc =  al_get_bitmap_height(image1);
     if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
     {
         done = true;
     }
     if(ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_UP)
     {
       if((ev.mouse.x >= 100) && (ev.mouse.x <= 300) &&
       (ev.mouse.y >= 100) && (ev.mouse.y <= 300))
    {
image1 = al_load_bitmap("black.png");
al_draw_bitmap(image1,100,100,0);
    }
     else if((ev.mouse.x >= 100) && (ev.mouse.x <= 300) &&
       (ev.mouse.y >= 300) && (ev.mouse.y <= 500))
    {
image1 = al_load_bitmap("black.png");
al_draw_bitmap(image1,100,301,0);
    }
else if((ev.mouse.x >= 100) && (ev.mouse.x <= 300) &&
       (ev.mouse.y >= 500) && (ev.mouse.y <= 700))
    {
image1 = al_load_bitmap("black.png");
al_draw_bitmap(image1,100,502,0);
    }
     }

     al_flip_display();

   }

   al_flip_display();


   al_rest(0.001);

   al_destroy_display(display);
   al_destroy_bitmap(image1);
   al_destroy_bitmap(image2);
   al_destroy_bitmap(image3);
   al_destroy_bitmap(image4);
   al_destroy_bitmap(image5);
   al_destroy_bitmap(image6);
   al_destroy_bitmap(image7);
   al_destroy_bitmap(image8);
   al_destroy_bitmap(image9);
   al_destroy_bitmap(image10);
   al_destroy_bitmap(image11);
   al_destroy_bitmap(image12);
   al_destroy_bitmap(image13);
   al_destroy_bitmap(image14);
   al_destroy_bitmap(image15);
   al_destroy_bitmap(image16);
   al_destroy_bitmap(image17);
   al_destroy_bitmap(image18);

   return 0;
}

