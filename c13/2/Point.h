/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:13:27 by myukang           #+#    #+#             */
/*   Updated: 2022/07/20 16:13:58 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include <iostream>
using namespace std;

class Point
{
	private:
		int x;
		int y;
	public:
		Point(int x = 0, int y = 0);
		friend ostream& operator<<(ostream& os, const Point& pos);
};

#endif
