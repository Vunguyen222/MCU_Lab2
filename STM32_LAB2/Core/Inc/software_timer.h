/*
 * software_timer.h
 *
 *  Created on: 5 thg 10, 2023
 *      Author: DELL
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_counter;
extern int timer0_flag;

void setTimer0(int duration);
void timer_run();

#endif /* INC_SOFTWARE_TIMER_H_ */
