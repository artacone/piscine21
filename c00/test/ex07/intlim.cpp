/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intlim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvertie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 13:20:43 by rvertie           #+#    #+#             */
/*   Updated: 2021/01/21 13:27:30 by rvertie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>

using namespace std;

int main(void)
{
	int minnum = INT_MIN;
	int maxnum = INT_MAX;

	cout <<	minnum << ' ' << maxnum << endl;
	cout <<	minnum - 1 << ' ' << maxnum + 1 << endl;
	cout <<	(minnum + 1) * (-1) << ' ' << minnum - 2 << endl;
	return 0;
}
