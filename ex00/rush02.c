/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 11:47:52 by ebetrix           #+#    #+#             */
/*   Updated: 2021/07/11 18:08:52 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	ft_putchar(char c);
// On va utiliser la fonction ft_putchar pour afficher des caracteres dans le terminal.

void	rush(int x, int y)			// On declare la fonction rush.
{
	char v; 						// On declare les variables.
	char h;

	v = 1;							// On commence a la premiere ligne.
	while (v <= y && x != 0)		// v doit etre inferieur ou egal a y & x doit etre different de 0.
	{
		h = 1;						// On est dans la premiere case de la premiere ligne.
			while (h <= x)			// h doit etre inferieur ou egal a y.
			{
				if ((v == 1) && (h == 1 ||  h == x)) 		// Sur la premiere ligne et soit sur la premiere ou la derniere case.
					ft_putchar('A');						// Afficher un A.
				else if ((v == y) && (h == 1 || h == x))	// Sinon: sur la derniere ligne et sur la premiere case ou sur la derniere case.
					ft_putchar('C');						// Afficher un C.
				else if ((v == 1) || (h == 1) || (v == y) || (h == x)) // Sinon: sur la premiere ligne ou sur la premiere colonne ou sur la derniere ligne ou sur la derniere colonne.
					ft_putchar('B');						// Afficher un B.
				else 										// Autrement
					ft_putchar(' ');						// Afficher un espace.
				h++;										// On ajoute la valeur 1 a la variable h.
			}
		ft_putchar('\n');									// On retourne a la ligne.
		v++;												// On ajoute la valeur 1 a la variable v.
	}

}
