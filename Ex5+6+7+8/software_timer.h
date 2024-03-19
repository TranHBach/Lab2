/*
 * software_timer.h
 *
 *  Created on: Mar 19, 2024
 *      Author: TRAN HUU BACH
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

void setTimer(int index, int duration);
int isTimerExpired(int index);

void timer_run();

#endif /* INC_SOFTWARE_TIMER_H_ */
