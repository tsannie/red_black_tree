/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:14:37 by tsannie           #+#    #+#             */
/*   Updated: 2021/11/09 16:36:25 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RBTree.hpp"

int	main(void)
{
	ft::RBTree<int, std::string>	test;
	int i;

	srand (time(NULL));
	for (i = 0 ; i < 50 ; i++)
		test.insertNode(rand() % 100, "heyo");
	test.printTree();
	for (i = 0 ; i < 50 ; i++)
		test.deleteNode(i);
}
