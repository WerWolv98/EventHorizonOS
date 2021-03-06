#ifndef __NOTIFICATION_CENTER_H
#define __NOTIFICATION_CENTER_H

#include <vector>
#include <string>

#include "notification.h"
#include "news.h"

extern "C" {
	#include "stm32f4xx_hal.h"
	#include "peripherals.h"
}

class NotificationCenter {
	public:
		int8_t temparature;
	
		NotificationCenter();
		NotificationCenter& operator<<(Notification notification);
		NotificationCenter& operator<<(News news);
	
		void removeNotificationAtIndex(uint8_t index);
		void removeFirstNotification(void);
		void removeAllNotifications(void);
		
		void removeAllNews(void);
	
		std::vector<Notification>& getNotifications(void);
		uint16_t getNotificationCount(void);
	
		std::vector<News>& getNews(void);
		
		void handleNotificationLED(void);	
	
	private:
		static std::vector<Notification> m_notifications;
		static std::vector<News> m_news;
};

#endif
