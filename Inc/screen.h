#ifndef __SCREEN_H
#define __SCREEN_H

#include "renderer.h"
#include "layer.h"
#include "notification_center.h"
#include "usb.h"


class Screen {
	public:
		Screen();
		Screen(const char* title);
	
		static Renderer renderer;
		static NotificationCenter notificationCenter;
	
		virtual void render(void) = 0;
		virtual void onHardwareButtonPressed(bool btnA, bool btnB, bool btnC) = 0;
		virtual void onHardwareEncoderTurned(int8_t steps) = 0;

	protected:
		Layer bgLayer;
		virtual void drawDefaultBackground(void);
	
	private:
		const char* m_title;
};

#endif
