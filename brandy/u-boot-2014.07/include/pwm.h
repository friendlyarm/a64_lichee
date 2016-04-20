/*
 * header file for pwm driver.
 *
 * Copyright (c) 2011 samsung electronics
 * Donghwa Lee <dh09.lee@samsung.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef _pwm_h_
#define _pwm_h_
#if 0
int	pwm_init		(int pwm_id, int div, int invert);
int	pwm_config		(int pwm_id, int duty_ns, int period_ns);
int	pwm_enable		(int pwm_id);
void	pwm_disable		(int pwm_id);
#endif
enum pwm_polarity {
	PWM_POLARITY_NORMAL,
	PWM_POLARITY_INVERSED,
};

int sunxi_pwm_set_polarity(int pwm, enum pwm_polarity polarity);
int sunxi_pwm_config      (int pwm, int duty_ns, int period_ns);
int sunxi_pwm_enable      (int pwm);
void sunxi_pwm_disable    (int pwm);
void sunxi_pwm_init       (void);


#endif /* _pwm_h_ */
