#include "maze.h"

/**
 * calculate_distance - Calculate distance of player to coords of wall
 * @player: pointer to player instance
 * @coords: coords of closest wall
 *
 * Return: distance of player to coords of wall
 */
float calculate_distance(Player_POV *player, float *coords)
{
	float x_diff;
	float y_diff;

	x_diff = (player->x_coord - coords[0]);
	y_diff = (player->y_coord - coords[1]);
	return (sqrt((x_diff * x_diff) + (y_diff * y_diff)));
}

/**
 * find_distance - Find distance to closest wall
 * @ray_angle: absolute angle of ray being cast (degrees)
 * @player: pointer to player instance
 * @map: pointer to map multi-dim array
 * @horizontal_or_vert: whether closest wall was horizontal or vertical
 *
 * Return: distance to closest wall from player
 */
float find_distance(float ray_angle, Player_POV *player, char
	(*map)[MAP_WIDTH], char *horizontal_or_vert)
{
	int found_horiz_coords, found_vert_coords;
	float dist_to_horiz_coord, dist_to_vert_coord;
	float horiz_coords[2], vert_coords[2];

	found_horiz_coords = check_horiz_intersect(horiz_coords,
		ray_angle, player, map);
	found_vert_coords = check_vert_intersect(vert_coords,
		ray_angle, player, map);

	if (!found_horiz_coords && !found_vert_coords)
	{
		return (-1); /* not no distance, but no wall for ray */
	}
	else if (found_horiz_coords && !found_vert_coords)
	{
		*horizontal_or_vert = 'H';
		return (calculate_distance(player, horiz_coords));
	}
	else if (!found_horiz_coords && found_vert_coords)
	{
		*horizontal_or_vert = 'V';
		return (calculate_distance(player, vert_coords));
	}
	dist_to_horiz_coord = calculate_distance(player,
		horiz_coords);
	dist_to_vert_coord = calculate_distance(player, vert_coords);
	if (dist_to_horiz_coord < dist_to_vert_coord)
	{
		*horizontal_or_vert = 'H';
		return (dist_to_horiz_coord);
	}
	else
	{
		*horizontal_or_vert = 'V';
		return (dist_to_vert_coord);
	}
}
