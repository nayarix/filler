/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualizer.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ishaimou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 01:51:21 by ishaimou          #+#    #+#             */
/*   Updated: 2019/05/13 03:13:29 by ishaimou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VISUALIZER_H
# define VISUALIZER_H

//Screen dimension macros
#define SCREEN_WIDTH 1600
#define SCREEN_HEIGHT 900

# include <SDL.h>
# include <SDL_image.h>
# include <stdio.h>
# include "libft.h"

typedef struct			s_dlist
{
	char				**map;
	char				**piece;
	int					curr_p;
	struct s_dlist		*next;
	struct s_dlist		*prev;
}						t_dlist;

typedef struct			s_visual
{
	SDL_Window			*window;
	SDL_Renderer		*renderer;
	SDL_Texture			*bg_tex;
	SDL_AudioDeviceID	device_id;
	Uint8				*wav_buffer;
}						t_visual;

typedef struct			s_parser
{
	t_dlist				*lst;
	int					map_h;
	int					map_w;
	char				pl;
	char				op;
	char				*pl_name;
	char				*op_name;

}						t_parser;

int		init(t_visual *v);
int		load_media(t_visual *v);
int		load_audio(t_visual *v);
void	ft_sdlclose(t_visual *v);


#endif
