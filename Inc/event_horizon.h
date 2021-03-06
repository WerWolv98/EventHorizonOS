#ifndef __EVENT_HORIZON_H
#define __EVENT_HORIZON_H

extern "C" {
	#include "display.h"
	#include "peripherals.h"
}

#include "app.h"

extern uint16_t error_code;
extern bool initialized;

typedef enum EScreen {
	BOOT,
	HOME,
	ERR,
	APPS
} EScreen;

extern void setScreen(EScreen screen);
extern void installApp(App &app);
extern App& getCurrentApp(void);

class EventHorizon {
	public:	
		void init_os(void);
		void start_os(void);
		void error_handler(uint16_t errorCode);
	
};

#endif

