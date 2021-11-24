/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsdmini.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-blay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:00:28 by fle-blay          #+#    #+#             */
/*   Updated: 2021/11/24 10:02:32 by fle-blay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSDMINI_H
# define BSDMINI_H

size_t strlcat(char *dst, const char *src, size_t dsize);
size_t strlcpy(char *dst, const char *src, size_t dsize);
char * strnstr(const char *s, const char *find, size_t slen);

#endif
