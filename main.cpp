/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:14:37 by tsannie           #+#    #+#             */
/*   Updated: 2021/11/09 13:37:22 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RBTree.hpp"

int	main(void)
{
	ft::RBTree<int, char>		test;

	srand (time(NULL));
	for (int i = 0 ; i < 50 ; i++)
		test.insertNode(rand() % 100, 'z');
	test.printTree();
	for (int i = 0 ; i < 50 ; i++)
		test.deleteNode(i);

}
