/* This file is generated, do not manually update */
#ifndef MC_26_3_BLOCK_STATES_H
#define MC_26_3_BLOCK_STATES_H

#include "blocks.h"

#include <singularity/types.h>

typedef enum {
	mc_26_3_acacia_button_face_V_FLOOR,
	mc_26_3_acacia_button_face_V_WALL,
	mc_26_3_acacia_button_face_V_CEILING,
} mc_26_3_acacia_button_face;

typedef enum {
	mc_26_3_acacia_button_facing_V_NORTH,
	mc_26_3_acacia_button_facing_V_SOUTH,
	mc_26_3_acacia_button_facing_V_WEST,
	mc_26_3_acacia_button_facing_V_EAST,
} mc_26_3_acacia_button_facing;

typedef struct {
	mc_26_3_acacia_button_face face;
	mc_26_3_acacia_button_facing facing;
	b8 powered;
} mc_26_3_acacia_button_properties;

typedef enum {
	mc_26_3_acacia_door_facing_V_NORTH,
	mc_26_3_acacia_door_facing_V_SOUTH,
	mc_26_3_acacia_door_facing_V_WEST,
	mc_26_3_acacia_door_facing_V_EAST,
} mc_26_3_acacia_door_facing;

typedef enum {
	mc_26_3_acacia_door_half_V_UPPER,
	mc_26_3_acacia_door_half_V_LOWER,
} mc_26_3_acacia_door_half;

typedef enum {
	mc_26_3_acacia_door_hinge_V_LEFT,
	mc_26_3_acacia_door_hinge_V_RIGHT,
} mc_26_3_acacia_door_hinge;

typedef struct {
	mc_26_3_acacia_door_facing facing;
	mc_26_3_acacia_door_half half;
	mc_26_3_acacia_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_acacia_door_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_acacia_fence_properties;

typedef enum {
	mc_26_3_acacia_fence_gate_facing_V_NORTH,
	mc_26_3_acacia_fence_gate_facing_V_SOUTH,
	mc_26_3_acacia_fence_gate_facing_V_WEST,
	mc_26_3_acacia_fence_gate_facing_V_EAST,
} mc_26_3_acacia_fence_gate_facing;

typedef struct {
	mc_26_3_acacia_fence_gate_facing facing;
	b8 in_wall;
	b8 open;
	b8 powered;
} mc_26_3_acacia_fence_gate_properties;

typedef enum {
	mc_26_3_acacia_hanging_sign_rotation_V_V_0,
	mc_26_3_acacia_hanging_sign_rotation_V_V_1,
	mc_26_3_acacia_hanging_sign_rotation_V_V_2,
	mc_26_3_acacia_hanging_sign_rotation_V_V_3,
	mc_26_3_acacia_hanging_sign_rotation_V_V_4,
	mc_26_3_acacia_hanging_sign_rotation_V_V_5,
	mc_26_3_acacia_hanging_sign_rotation_V_V_6,
	mc_26_3_acacia_hanging_sign_rotation_V_V_7,
	mc_26_3_acacia_hanging_sign_rotation_V_V_8,
	mc_26_3_acacia_hanging_sign_rotation_V_V_9,
	mc_26_3_acacia_hanging_sign_rotation_V_V_10,
	mc_26_3_acacia_hanging_sign_rotation_V_V_11,
	mc_26_3_acacia_hanging_sign_rotation_V_V_12,
	mc_26_3_acacia_hanging_sign_rotation_V_V_13,
	mc_26_3_acacia_hanging_sign_rotation_V_V_14,
	mc_26_3_acacia_hanging_sign_rotation_V_V_15,
} mc_26_3_acacia_hanging_sign_rotation;

typedef struct {
	b8 attached;
	mc_26_3_acacia_hanging_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_acacia_hanging_sign_properties;

typedef enum {
	mc_26_3_acacia_leaves_distance_V_V_1,
	mc_26_3_acacia_leaves_distance_V_V_2,
	mc_26_3_acacia_leaves_distance_V_V_3,
	mc_26_3_acacia_leaves_distance_V_V_4,
	mc_26_3_acacia_leaves_distance_V_V_5,
	mc_26_3_acacia_leaves_distance_V_V_6,
	mc_26_3_acacia_leaves_distance_V_V_7,
} mc_26_3_acacia_leaves_distance;

typedef struct {
	mc_26_3_acacia_leaves_distance distance;
	b8 persistent;
	b8 waterlogged;
} mc_26_3_acacia_leaves_properties;

typedef enum {
	mc_26_3_acacia_log_axis_V_X,
	mc_26_3_acacia_log_axis_V_Y,
	mc_26_3_acacia_log_axis_V_Z,
} mc_26_3_acacia_log_axis;

typedef struct {
	mc_26_3_acacia_log_axis axis;
} mc_26_3_acacia_log_properties;

typedef struct {
	b8 powered;
} mc_26_3_acacia_pressure_plate_properties;

typedef enum {
	mc_26_3_acacia_sapling_stage_V_V_0,
	mc_26_3_acacia_sapling_stage_V_V_1,
} mc_26_3_acacia_sapling_stage;

typedef struct {
	mc_26_3_acacia_sapling_stage stage;
} mc_26_3_acacia_sapling_properties;

typedef enum {
	mc_26_3_acacia_shelf_facing_V_NORTH,
	mc_26_3_acacia_shelf_facing_V_SOUTH,
	mc_26_3_acacia_shelf_facing_V_WEST,
	mc_26_3_acacia_shelf_facing_V_EAST,
} mc_26_3_acacia_shelf_facing;

typedef enum {
	mc_26_3_acacia_shelf_side_chain_V_UNCONNECTED,
	mc_26_3_acacia_shelf_side_chain_V_RIGHT,
	mc_26_3_acacia_shelf_side_chain_V_CENTER,
	mc_26_3_acacia_shelf_side_chain_V_LEFT,
} mc_26_3_acacia_shelf_side_chain;

typedef struct {
	mc_26_3_acacia_shelf_facing facing;
	b8 powered;
	mc_26_3_acacia_shelf_side_chain side_chain;
	b8 waterlogged;
} mc_26_3_acacia_shelf_properties;

typedef enum {
	mc_26_3_acacia_sign_rotation_V_V_0,
	mc_26_3_acacia_sign_rotation_V_V_1,
	mc_26_3_acacia_sign_rotation_V_V_2,
	mc_26_3_acacia_sign_rotation_V_V_3,
	mc_26_3_acacia_sign_rotation_V_V_4,
	mc_26_3_acacia_sign_rotation_V_V_5,
	mc_26_3_acacia_sign_rotation_V_V_6,
	mc_26_3_acacia_sign_rotation_V_V_7,
	mc_26_3_acacia_sign_rotation_V_V_8,
	mc_26_3_acacia_sign_rotation_V_V_9,
	mc_26_3_acacia_sign_rotation_V_V_10,
	mc_26_3_acacia_sign_rotation_V_V_11,
	mc_26_3_acacia_sign_rotation_V_V_12,
	mc_26_3_acacia_sign_rotation_V_V_13,
	mc_26_3_acacia_sign_rotation_V_V_14,
	mc_26_3_acacia_sign_rotation_V_V_15,
} mc_26_3_acacia_sign_rotation;

typedef struct {
	mc_26_3_acacia_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_acacia_sign_properties;

typedef enum {
	mc_26_3_acacia_slab_type_V_TOP,
	mc_26_3_acacia_slab_type_V_BOTTOM,
	mc_26_3_acacia_slab_type_V_DOUBLE,
} mc_26_3_acacia_slab_type;

typedef struct {
	mc_26_3_acacia_slab_type type;
	b8 waterlogged;
} mc_26_3_acacia_slab_properties;

typedef enum {
	mc_26_3_acacia_stairs_facing_V_NORTH,
	mc_26_3_acacia_stairs_facing_V_SOUTH,
	mc_26_3_acacia_stairs_facing_V_WEST,
	mc_26_3_acacia_stairs_facing_V_EAST,
} mc_26_3_acacia_stairs_facing;

typedef enum {
	mc_26_3_acacia_stairs_half_V_TOP,
	mc_26_3_acacia_stairs_half_V_BOTTOM,
} mc_26_3_acacia_stairs_half;

typedef enum {
	mc_26_3_acacia_stairs_shape_V_STRAIGHT,
	mc_26_3_acacia_stairs_shape_V_INNER_LEFT,
	mc_26_3_acacia_stairs_shape_V_INNER_RIGHT,
	mc_26_3_acacia_stairs_shape_V_OUTER_LEFT,
	mc_26_3_acacia_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_acacia_stairs_shape;

typedef struct {
	mc_26_3_acacia_stairs_facing facing;
	mc_26_3_acacia_stairs_half half;
	mc_26_3_acacia_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_acacia_stairs_properties;

typedef enum {
	mc_26_3_acacia_trapdoor_facing_V_NORTH,
	mc_26_3_acacia_trapdoor_facing_V_SOUTH,
	mc_26_3_acacia_trapdoor_facing_V_WEST,
	mc_26_3_acacia_trapdoor_facing_V_EAST,
} mc_26_3_acacia_trapdoor_facing;

typedef enum {
	mc_26_3_acacia_trapdoor_half_V_TOP,
	mc_26_3_acacia_trapdoor_half_V_BOTTOM,
} mc_26_3_acacia_trapdoor_half;

typedef struct {
	mc_26_3_acacia_trapdoor_facing facing;
	mc_26_3_acacia_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_acacia_trapdoor_properties;

typedef enum {
	mc_26_3_acacia_wall_hanging_sign_facing_V_NORTH,
	mc_26_3_acacia_wall_hanging_sign_facing_V_SOUTH,
	mc_26_3_acacia_wall_hanging_sign_facing_V_WEST,
	mc_26_3_acacia_wall_hanging_sign_facing_V_EAST,
} mc_26_3_acacia_wall_hanging_sign_facing;

typedef struct {
	mc_26_3_acacia_wall_hanging_sign_facing facing;
	b8 waterlogged;
} mc_26_3_acacia_wall_hanging_sign_properties;

typedef enum {
	mc_26_3_acacia_wall_sign_facing_V_NORTH,
	mc_26_3_acacia_wall_sign_facing_V_SOUTH,
	mc_26_3_acacia_wall_sign_facing_V_WEST,
	mc_26_3_acacia_wall_sign_facing_V_EAST,
} mc_26_3_acacia_wall_sign_facing;

typedef struct {
	mc_26_3_acacia_wall_sign_facing facing;
	b8 waterlogged;
} mc_26_3_acacia_wall_sign_properties;

typedef enum {
	mc_26_3_acacia_wood_axis_V_X,
	mc_26_3_acacia_wood_axis_V_Y,
	mc_26_3_acacia_wood_axis_V_Z,
} mc_26_3_acacia_wood_axis;

typedef struct {
	mc_26_3_acacia_wood_axis axis;
} mc_26_3_acacia_wood_properties;

typedef enum {
	mc_26_3_activator_rail_shape_V_NORTH_SOUTH,
	mc_26_3_activator_rail_shape_V_EAST_WEST,
	mc_26_3_activator_rail_shape_V_ASCENDING_EAST,
	mc_26_3_activator_rail_shape_V_ASCENDING_WEST,
	mc_26_3_activator_rail_shape_V_ASCENDING_NORTH,
	mc_26_3_activator_rail_shape_V_ASCENDING_SOUTH,
} mc_26_3_activator_rail_shape;

typedef struct {
	b8 powered;
	mc_26_3_activator_rail_shape shape;
	b8 waterlogged;
} mc_26_3_activator_rail_properties;

typedef enum {
	mc_26_3_amethyst_cluster_facing_V_NORTH,
	mc_26_3_amethyst_cluster_facing_V_EAST,
	mc_26_3_amethyst_cluster_facing_V_SOUTH,
	mc_26_3_amethyst_cluster_facing_V_WEST,
	mc_26_3_amethyst_cluster_facing_V_UP,
	mc_26_3_amethyst_cluster_facing_V_DOWN,
} mc_26_3_amethyst_cluster_facing;

typedef struct {
	mc_26_3_amethyst_cluster_facing facing;
	b8 waterlogged;
} mc_26_3_amethyst_cluster_properties;

typedef enum {
	mc_26_3_andesite_slab_type_V_TOP,
	mc_26_3_andesite_slab_type_V_BOTTOM,
	mc_26_3_andesite_slab_type_V_DOUBLE,
} mc_26_3_andesite_slab_type;

typedef struct {
	mc_26_3_andesite_slab_type type;
	b8 waterlogged;
} mc_26_3_andesite_slab_properties;

typedef enum {
	mc_26_3_andesite_stairs_facing_V_NORTH,
	mc_26_3_andesite_stairs_facing_V_SOUTH,
	mc_26_3_andesite_stairs_facing_V_WEST,
	mc_26_3_andesite_stairs_facing_V_EAST,
} mc_26_3_andesite_stairs_facing;

typedef enum {
	mc_26_3_andesite_stairs_half_V_TOP,
	mc_26_3_andesite_stairs_half_V_BOTTOM,
} mc_26_3_andesite_stairs_half;

typedef enum {
	mc_26_3_andesite_stairs_shape_V_STRAIGHT,
	mc_26_3_andesite_stairs_shape_V_INNER_LEFT,
	mc_26_3_andesite_stairs_shape_V_INNER_RIGHT,
	mc_26_3_andesite_stairs_shape_V_OUTER_LEFT,
	mc_26_3_andesite_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_andesite_stairs_shape;

typedef struct {
	mc_26_3_andesite_stairs_facing facing;
	mc_26_3_andesite_stairs_half half;
	mc_26_3_andesite_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_andesite_stairs_properties;

typedef enum {
	mc_26_3_andesite_wall_east_V_NONE,
	mc_26_3_andesite_wall_east_V_LOW,
	mc_26_3_andesite_wall_east_V_TALL,
} mc_26_3_andesite_wall_east;

typedef enum {
	mc_26_3_andesite_wall_north_V_NONE,
	mc_26_3_andesite_wall_north_V_LOW,
	mc_26_3_andesite_wall_north_V_TALL,
} mc_26_3_andesite_wall_north;

typedef enum {
	mc_26_3_andesite_wall_south_V_NONE,
	mc_26_3_andesite_wall_south_V_LOW,
	mc_26_3_andesite_wall_south_V_TALL,
} mc_26_3_andesite_wall_south;

typedef enum {
	mc_26_3_andesite_wall_west_V_NONE,
	mc_26_3_andesite_wall_west_V_LOW,
	mc_26_3_andesite_wall_west_V_TALL,
} mc_26_3_andesite_wall_west;

typedef struct {
	mc_26_3_andesite_wall_east east;
	mc_26_3_andesite_wall_north north;
	mc_26_3_andesite_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_andesite_wall_west west;
} mc_26_3_andesite_wall_properties;

typedef enum {
	mc_26_3_anvil_facing_V_NORTH,
	mc_26_3_anvil_facing_V_SOUTH,
	mc_26_3_anvil_facing_V_WEST,
	mc_26_3_anvil_facing_V_EAST,
} mc_26_3_anvil_facing;

typedef struct {
	mc_26_3_anvil_facing facing;
} mc_26_3_anvil_properties;

typedef enum {
	mc_26_3_attached_melon_stem_facing_V_NORTH,
	mc_26_3_attached_melon_stem_facing_V_SOUTH,
	mc_26_3_attached_melon_stem_facing_V_WEST,
	mc_26_3_attached_melon_stem_facing_V_EAST,
} mc_26_3_attached_melon_stem_facing;

typedef struct {
	mc_26_3_attached_melon_stem_facing facing;
} mc_26_3_attached_melon_stem_properties;

typedef enum {
	mc_26_3_attached_pumpkin_stem_facing_V_NORTH,
	mc_26_3_attached_pumpkin_stem_facing_V_SOUTH,
	mc_26_3_attached_pumpkin_stem_facing_V_WEST,
	mc_26_3_attached_pumpkin_stem_facing_V_EAST,
} mc_26_3_attached_pumpkin_stem_facing;

typedef struct {
	mc_26_3_attached_pumpkin_stem_facing facing;
} mc_26_3_attached_pumpkin_stem_properties;

typedef enum {
	mc_26_3_azalea_leaves_distance_V_V_1,
	mc_26_3_azalea_leaves_distance_V_V_2,
	mc_26_3_azalea_leaves_distance_V_V_3,
	mc_26_3_azalea_leaves_distance_V_V_4,
	mc_26_3_azalea_leaves_distance_V_V_5,
	mc_26_3_azalea_leaves_distance_V_V_6,
	mc_26_3_azalea_leaves_distance_V_V_7,
} mc_26_3_azalea_leaves_distance;

typedef struct {
	mc_26_3_azalea_leaves_distance distance;
	b8 persistent;
	b8 waterlogged;
} mc_26_3_azalea_leaves_properties;

typedef enum {
	mc_26_3_bamboo_age_V_V_0,
	mc_26_3_bamboo_age_V_V_1,
} mc_26_3_bamboo_age;

typedef enum {
	mc_26_3_bamboo_leaves_V_NONE,
	mc_26_3_bamboo_leaves_V_SMALL,
	mc_26_3_bamboo_leaves_V_LARGE,
} mc_26_3_bamboo_leaves;

typedef enum {
	mc_26_3_bamboo_stage_V_V_0,
	mc_26_3_bamboo_stage_V_V_1,
} mc_26_3_bamboo_stage;

typedef struct {
	mc_26_3_bamboo_age age;
	mc_26_3_bamboo_leaves leaves;
	mc_26_3_bamboo_stage stage;
} mc_26_3_bamboo_properties;

typedef enum {
	mc_26_3_bamboo_block_axis_V_X,
	mc_26_3_bamboo_block_axis_V_Y,
	mc_26_3_bamboo_block_axis_V_Z,
} mc_26_3_bamboo_block_axis;

typedef struct {
	mc_26_3_bamboo_block_axis axis;
} mc_26_3_bamboo_block_properties;

typedef enum {
	mc_26_3_bamboo_button_face_V_FLOOR,
	mc_26_3_bamboo_button_face_V_WALL,
	mc_26_3_bamboo_button_face_V_CEILING,
} mc_26_3_bamboo_button_face;

typedef enum {
	mc_26_3_bamboo_button_facing_V_NORTH,
	mc_26_3_bamboo_button_facing_V_SOUTH,
	mc_26_3_bamboo_button_facing_V_WEST,
	mc_26_3_bamboo_button_facing_V_EAST,
} mc_26_3_bamboo_button_facing;

typedef struct {
	mc_26_3_bamboo_button_face face;
	mc_26_3_bamboo_button_facing facing;
	b8 powered;
} mc_26_3_bamboo_button_properties;

typedef enum {
	mc_26_3_bamboo_door_facing_V_NORTH,
	mc_26_3_bamboo_door_facing_V_SOUTH,
	mc_26_3_bamboo_door_facing_V_WEST,
	mc_26_3_bamboo_door_facing_V_EAST,
} mc_26_3_bamboo_door_facing;

typedef enum {
	mc_26_3_bamboo_door_half_V_UPPER,
	mc_26_3_bamboo_door_half_V_LOWER,
} mc_26_3_bamboo_door_half;

typedef enum {
	mc_26_3_bamboo_door_hinge_V_LEFT,
	mc_26_3_bamboo_door_hinge_V_RIGHT,
} mc_26_3_bamboo_door_hinge;

typedef struct {
	mc_26_3_bamboo_door_facing facing;
	mc_26_3_bamboo_door_half half;
	mc_26_3_bamboo_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_bamboo_door_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_bamboo_fence_properties;

typedef enum {
	mc_26_3_bamboo_fence_gate_facing_V_NORTH,
	mc_26_3_bamboo_fence_gate_facing_V_SOUTH,
	mc_26_3_bamboo_fence_gate_facing_V_WEST,
	mc_26_3_bamboo_fence_gate_facing_V_EAST,
} mc_26_3_bamboo_fence_gate_facing;

typedef struct {
	mc_26_3_bamboo_fence_gate_facing facing;
	b8 in_wall;
	b8 open;
	b8 powered;
} mc_26_3_bamboo_fence_gate_properties;

typedef enum {
	mc_26_3_bamboo_hanging_sign_rotation_V_V_0,
	mc_26_3_bamboo_hanging_sign_rotation_V_V_1,
	mc_26_3_bamboo_hanging_sign_rotation_V_V_2,
	mc_26_3_bamboo_hanging_sign_rotation_V_V_3,
	mc_26_3_bamboo_hanging_sign_rotation_V_V_4,
	mc_26_3_bamboo_hanging_sign_rotation_V_V_5,
	mc_26_3_bamboo_hanging_sign_rotation_V_V_6,
	mc_26_3_bamboo_hanging_sign_rotation_V_V_7,
	mc_26_3_bamboo_hanging_sign_rotation_V_V_8,
	mc_26_3_bamboo_hanging_sign_rotation_V_V_9,
	mc_26_3_bamboo_hanging_sign_rotation_V_V_10,
	mc_26_3_bamboo_hanging_sign_rotation_V_V_11,
	mc_26_3_bamboo_hanging_sign_rotation_V_V_12,
	mc_26_3_bamboo_hanging_sign_rotation_V_V_13,
	mc_26_3_bamboo_hanging_sign_rotation_V_V_14,
	mc_26_3_bamboo_hanging_sign_rotation_V_V_15,
} mc_26_3_bamboo_hanging_sign_rotation;

typedef struct {
	b8 attached;
	mc_26_3_bamboo_hanging_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_bamboo_hanging_sign_properties;

typedef enum {
	mc_26_3_bamboo_mosaic_slab_type_V_TOP,
	mc_26_3_bamboo_mosaic_slab_type_V_BOTTOM,
	mc_26_3_bamboo_mosaic_slab_type_V_DOUBLE,
} mc_26_3_bamboo_mosaic_slab_type;

typedef struct {
	mc_26_3_bamboo_mosaic_slab_type type;
	b8 waterlogged;
} mc_26_3_bamboo_mosaic_slab_properties;

typedef enum {
	mc_26_3_bamboo_mosaic_stairs_facing_V_NORTH,
	mc_26_3_bamboo_mosaic_stairs_facing_V_SOUTH,
	mc_26_3_bamboo_mosaic_stairs_facing_V_WEST,
	mc_26_3_bamboo_mosaic_stairs_facing_V_EAST,
} mc_26_3_bamboo_mosaic_stairs_facing;

typedef enum {
	mc_26_3_bamboo_mosaic_stairs_half_V_TOP,
	mc_26_3_bamboo_mosaic_stairs_half_V_BOTTOM,
} mc_26_3_bamboo_mosaic_stairs_half;

typedef enum {
	mc_26_3_bamboo_mosaic_stairs_shape_V_STRAIGHT,
	mc_26_3_bamboo_mosaic_stairs_shape_V_INNER_LEFT,
	mc_26_3_bamboo_mosaic_stairs_shape_V_INNER_RIGHT,
	mc_26_3_bamboo_mosaic_stairs_shape_V_OUTER_LEFT,
	mc_26_3_bamboo_mosaic_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_bamboo_mosaic_stairs_shape;

typedef struct {
	mc_26_3_bamboo_mosaic_stairs_facing facing;
	mc_26_3_bamboo_mosaic_stairs_half half;
	mc_26_3_bamboo_mosaic_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_bamboo_mosaic_stairs_properties;

typedef struct {
	b8 powered;
} mc_26_3_bamboo_pressure_plate_properties;

typedef enum {
	mc_26_3_bamboo_shelf_facing_V_NORTH,
	mc_26_3_bamboo_shelf_facing_V_SOUTH,
	mc_26_3_bamboo_shelf_facing_V_WEST,
	mc_26_3_bamboo_shelf_facing_V_EAST,
} mc_26_3_bamboo_shelf_facing;

typedef enum {
	mc_26_3_bamboo_shelf_side_chain_V_UNCONNECTED,
	mc_26_3_bamboo_shelf_side_chain_V_RIGHT,
	mc_26_3_bamboo_shelf_side_chain_V_CENTER,
	mc_26_3_bamboo_shelf_side_chain_V_LEFT,
} mc_26_3_bamboo_shelf_side_chain;

typedef struct {
	mc_26_3_bamboo_shelf_facing facing;
	b8 powered;
	mc_26_3_bamboo_shelf_side_chain side_chain;
	b8 waterlogged;
} mc_26_3_bamboo_shelf_properties;

typedef enum {
	mc_26_3_bamboo_sign_rotation_V_V_0,
	mc_26_3_bamboo_sign_rotation_V_V_1,
	mc_26_3_bamboo_sign_rotation_V_V_2,
	mc_26_3_bamboo_sign_rotation_V_V_3,
	mc_26_3_bamboo_sign_rotation_V_V_4,
	mc_26_3_bamboo_sign_rotation_V_V_5,
	mc_26_3_bamboo_sign_rotation_V_V_6,
	mc_26_3_bamboo_sign_rotation_V_V_7,
	mc_26_3_bamboo_sign_rotation_V_V_8,
	mc_26_3_bamboo_sign_rotation_V_V_9,
	mc_26_3_bamboo_sign_rotation_V_V_10,
	mc_26_3_bamboo_sign_rotation_V_V_11,
	mc_26_3_bamboo_sign_rotation_V_V_12,
	mc_26_3_bamboo_sign_rotation_V_V_13,
	mc_26_3_bamboo_sign_rotation_V_V_14,
	mc_26_3_bamboo_sign_rotation_V_V_15,
} mc_26_3_bamboo_sign_rotation;

typedef struct {
	mc_26_3_bamboo_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_bamboo_sign_properties;

typedef enum {
	mc_26_3_bamboo_slab_type_V_TOP,
	mc_26_3_bamboo_slab_type_V_BOTTOM,
	mc_26_3_bamboo_slab_type_V_DOUBLE,
} mc_26_3_bamboo_slab_type;

typedef struct {
	mc_26_3_bamboo_slab_type type;
	b8 waterlogged;
} mc_26_3_bamboo_slab_properties;

typedef enum {
	mc_26_3_bamboo_stairs_facing_V_NORTH,
	mc_26_3_bamboo_stairs_facing_V_SOUTH,
	mc_26_3_bamboo_stairs_facing_V_WEST,
	mc_26_3_bamboo_stairs_facing_V_EAST,
} mc_26_3_bamboo_stairs_facing;

typedef enum {
	mc_26_3_bamboo_stairs_half_V_TOP,
	mc_26_3_bamboo_stairs_half_V_BOTTOM,
} mc_26_3_bamboo_stairs_half;

typedef enum {
	mc_26_3_bamboo_stairs_shape_V_STRAIGHT,
	mc_26_3_bamboo_stairs_shape_V_INNER_LEFT,
	mc_26_3_bamboo_stairs_shape_V_INNER_RIGHT,
	mc_26_3_bamboo_stairs_shape_V_OUTER_LEFT,
	mc_26_3_bamboo_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_bamboo_stairs_shape;

typedef struct {
	mc_26_3_bamboo_stairs_facing facing;
	mc_26_3_bamboo_stairs_half half;
	mc_26_3_bamboo_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_bamboo_stairs_properties;

typedef enum {
	mc_26_3_bamboo_trapdoor_facing_V_NORTH,
	mc_26_3_bamboo_trapdoor_facing_V_SOUTH,
	mc_26_3_bamboo_trapdoor_facing_V_WEST,
	mc_26_3_bamboo_trapdoor_facing_V_EAST,
} mc_26_3_bamboo_trapdoor_facing;

typedef enum {
	mc_26_3_bamboo_trapdoor_half_V_TOP,
	mc_26_3_bamboo_trapdoor_half_V_BOTTOM,
} mc_26_3_bamboo_trapdoor_half;

typedef struct {
	mc_26_3_bamboo_trapdoor_facing facing;
	mc_26_3_bamboo_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_bamboo_trapdoor_properties;

typedef enum {
	mc_26_3_bamboo_wall_hanging_sign_facing_V_NORTH,
	mc_26_3_bamboo_wall_hanging_sign_facing_V_SOUTH,
	mc_26_3_bamboo_wall_hanging_sign_facing_V_WEST,
	mc_26_3_bamboo_wall_hanging_sign_facing_V_EAST,
} mc_26_3_bamboo_wall_hanging_sign_facing;

typedef struct {
	mc_26_3_bamboo_wall_hanging_sign_facing facing;
	b8 waterlogged;
} mc_26_3_bamboo_wall_hanging_sign_properties;

typedef enum {
	mc_26_3_bamboo_wall_sign_facing_V_NORTH,
	mc_26_3_bamboo_wall_sign_facing_V_SOUTH,
	mc_26_3_bamboo_wall_sign_facing_V_WEST,
	mc_26_3_bamboo_wall_sign_facing_V_EAST,
} mc_26_3_bamboo_wall_sign_facing;

typedef struct {
	mc_26_3_bamboo_wall_sign_facing facing;
	b8 waterlogged;
} mc_26_3_bamboo_wall_sign_properties;

typedef enum {
	mc_26_3_barrel_facing_V_NORTH,
	mc_26_3_barrel_facing_V_EAST,
	mc_26_3_barrel_facing_V_SOUTH,
	mc_26_3_barrel_facing_V_WEST,
	mc_26_3_barrel_facing_V_UP,
	mc_26_3_barrel_facing_V_DOWN,
} mc_26_3_barrel_facing;

typedef struct {
	mc_26_3_barrel_facing facing;
	b8 open;
} mc_26_3_barrel_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_barrier_properties;

typedef enum {
	mc_26_3_basalt_axis_V_X,
	mc_26_3_basalt_axis_V_Y,
	mc_26_3_basalt_axis_V_Z,
} mc_26_3_basalt_axis;

typedef struct {
	mc_26_3_basalt_axis axis;
} mc_26_3_basalt_properties;

typedef enum {
	mc_26_3_bee_nest_facing_V_NORTH,
	mc_26_3_bee_nest_facing_V_SOUTH,
	mc_26_3_bee_nest_facing_V_WEST,
	mc_26_3_bee_nest_facing_V_EAST,
} mc_26_3_bee_nest_facing;

typedef enum {
	mc_26_3_bee_nest_honey_level_V_V_0,
	mc_26_3_bee_nest_honey_level_V_V_1,
	mc_26_3_bee_nest_honey_level_V_V_2,
	mc_26_3_bee_nest_honey_level_V_V_3,
	mc_26_3_bee_nest_honey_level_V_V_4,
	mc_26_3_bee_nest_honey_level_V_V_5,
} mc_26_3_bee_nest_honey_level;

typedef struct {
	mc_26_3_bee_nest_facing facing;
	mc_26_3_bee_nest_honey_level honey_level;
} mc_26_3_bee_nest_properties;

typedef enum {
	mc_26_3_beehive_facing_V_NORTH,
	mc_26_3_beehive_facing_V_SOUTH,
	mc_26_3_beehive_facing_V_WEST,
	mc_26_3_beehive_facing_V_EAST,
} mc_26_3_beehive_facing;

typedef enum {
	mc_26_3_beehive_honey_level_V_V_0,
	mc_26_3_beehive_honey_level_V_V_1,
	mc_26_3_beehive_honey_level_V_V_2,
	mc_26_3_beehive_honey_level_V_V_3,
	mc_26_3_beehive_honey_level_V_V_4,
	mc_26_3_beehive_honey_level_V_V_5,
} mc_26_3_beehive_honey_level;

typedef struct {
	mc_26_3_beehive_facing facing;
	mc_26_3_beehive_honey_level honey_level;
} mc_26_3_beehive_properties;

typedef enum {
	mc_26_3_beetroots_age_V_V_0,
	mc_26_3_beetroots_age_V_V_1,
	mc_26_3_beetroots_age_V_V_2,
	mc_26_3_beetroots_age_V_V_3,
} mc_26_3_beetroots_age;

typedef struct {
	mc_26_3_beetroots_age age;
} mc_26_3_beetroots_properties;

typedef enum {
	mc_26_3_bell_attachment_V_FLOOR,
	mc_26_3_bell_attachment_V_CEILING,
	mc_26_3_bell_attachment_V_SINGLE_WALL,
	mc_26_3_bell_attachment_V_DOUBLE_WALL,
} mc_26_3_bell_attachment;

typedef enum {
	mc_26_3_bell_facing_V_NORTH,
	mc_26_3_bell_facing_V_SOUTH,
	mc_26_3_bell_facing_V_WEST,
	mc_26_3_bell_facing_V_EAST,
} mc_26_3_bell_facing;

typedef struct {
	mc_26_3_bell_attachment attachment;
	mc_26_3_bell_facing facing;
	b8 powered;
} mc_26_3_bell_properties;

typedef enum {
	mc_26_3_big_dripleaf_facing_V_NORTH,
	mc_26_3_big_dripleaf_facing_V_SOUTH,
	mc_26_3_big_dripleaf_facing_V_WEST,
	mc_26_3_big_dripleaf_facing_V_EAST,
} mc_26_3_big_dripleaf_facing;

typedef enum {
	mc_26_3_big_dripleaf_tilt_V_NONE,
	mc_26_3_big_dripleaf_tilt_V_UNSTABLE,
	mc_26_3_big_dripleaf_tilt_V_PARTIAL,
	mc_26_3_big_dripleaf_tilt_V_FULL,
} mc_26_3_big_dripleaf_tilt;

typedef struct {
	mc_26_3_big_dripleaf_facing facing;
	mc_26_3_big_dripleaf_tilt tilt;
	b8 waterlogged;
} mc_26_3_big_dripleaf_properties;

typedef enum {
	mc_26_3_big_dripleaf_stem_facing_V_NORTH,
	mc_26_3_big_dripleaf_stem_facing_V_SOUTH,
	mc_26_3_big_dripleaf_stem_facing_V_WEST,
	mc_26_3_big_dripleaf_stem_facing_V_EAST,
} mc_26_3_big_dripleaf_stem_facing;

typedef struct {
	mc_26_3_big_dripleaf_stem_facing facing;
	b8 waterlogged;
} mc_26_3_big_dripleaf_stem_properties;

typedef enum {
	mc_26_3_birch_button_face_V_FLOOR,
	mc_26_3_birch_button_face_V_WALL,
	mc_26_3_birch_button_face_V_CEILING,
} mc_26_3_birch_button_face;

typedef enum {
	mc_26_3_birch_button_facing_V_NORTH,
	mc_26_3_birch_button_facing_V_SOUTH,
	mc_26_3_birch_button_facing_V_WEST,
	mc_26_3_birch_button_facing_V_EAST,
} mc_26_3_birch_button_facing;

typedef struct {
	mc_26_3_birch_button_face face;
	mc_26_3_birch_button_facing facing;
	b8 powered;
} mc_26_3_birch_button_properties;

typedef enum {
	mc_26_3_birch_door_facing_V_NORTH,
	mc_26_3_birch_door_facing_V_SOUTH,
	mc_26_3_birch_door_facing_V_WEST,
	mc_26_3_birch_door_facing_V_EAST,
} mc_26_3_birch_door_facing;

typedef enum {
	mc_26_3_birch_door_half_V_UPPER,
	mc_26_3_birch_door_half_V_LOWER,
} mc_26_3_birch_door_half;

typedef enum {
	mc_26_3_birch_door_hinge_V_LEFT,
	mc_26_3_birch_door_hinge_V_RIGHT,
} mc_26_3_birch_door_hinge;

typedef struct {
	mc_26_3_birch_door_facing facing;
	mc_26_3_birch_door_half half;
	mc_26_3_birch_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_birch_door_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_birch_fence_properties;

typedef enum {
	mc_26_3_birch_fence_gate_facing_V_NORTH,
	mc_26_3_birch_fence_gate_facing_V_SOUTH,
	mc_26_3_birch_fence_gate_facing_V_WEST,
	mc_26_3_birch_fence_gate_facing_V_EAST,
} mc_26_3_birch_fence_gate_facing;

typedef struct {
	mc_26_3_birch_fence_gate_facing facing;
	b8 in_wall;
	b8 open;
	b8 powered;
} mc_26_3_birch_fence_gate_properties;

typedef enum {
	mc_26_3_birch_hanging_sign_rotation_V_V_0,
	mc_26_3_birch_hanging_sign_rotation_V_V_1,
	mc_26_3_birch_hanging_sign_rotation_V_V_2,
	mc_26_3_birch_hanging_sign_rotation_V_V_3,
	mc_26_3_birch_hanging_sign_rotation_V_V_4,
	mc_26_3_birch_hanging_sign_rotation_V_V_5,
	mc_26_3_birch_hanging_sign_rotation_V_V_6,
	mc_26_3_birch_hanging_sign_rotation_V_V_7,
	mc_26_3_birch_hanging_sign_rotation_V_V_8,
	mc_26_3_birch_hanging_sign_rotation_V_V_9,
	mc_26_3_birch_hanging_sign_rotation_V_V_10,
	mc_26_3_birch_hanging_sign_rotation_V_V_11,
	mc_26_3_birch_hanging_sign_rotation_V_V_12,
	mc_26_3_birch_hanging_sign_rotation_V_V_13,
	mc_26_3_birch_hanging_sign_rotation_V_V_14,
	mc_26_3_birch_hanging_sign_rotation_V_V_15,
} mc_26_3_birch_hanging_sign_rotation;

typedef struct {
	b8 attached;
	mc_26_3_birch_hanging_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_birch_hanging_sign_properties;

typedef enum {
	mc_26_3_birch_leaves_distance_V_V_1,
	mc_26_3_birch_leaves_distance_V_V_2,
	mc_26_3_birch_leaves_distance_V_V_3,
	mc_26_3_birch_leaves_distance_V_V_4,
	mc_26_3_birch_leaves_distance_V_V_5,
	mc_26_3_birch_leaves_distance_V_V_6,
	mc_26_3_birch_leaves_distance_V_V_7,
} mc_26_3_birch_leaves_distance;

typedef struct {
	mc_26_3_birch_leaves_distance distance;
	b8 persistent;
	b8 waterlogged;
} mc_26_3_birch_leaves_properties;

typedef enum {
	mc_26_3_birch_log_axis_V_X,
	mc_26_3_birch_log_axis_V_Y,
	mc_26_3_birch_log_axis_V_Z,
} mc_26_3_birch_log_axis;

typedef struct {
	mc_26_3_birch_log_axis axis;
} mc_26_3_birch_log_properties;

typedef struct {
	b8 powered;
} mc_26_3_birch_pressure_plate_properties;

typedef enum {
	mc_26_3_birch_sapling_stage_V_V_0,
	mc_26_3_birch_sapling_stage_V_V_1,
} mc_26_3_birch_sapling_stage;

typedef struct {
	mc_26_3_birch_sapling_stage stage;
} mc_26_3_birch_sapling_properties;

typedef enum {
	mc_26_3_birch_shelf_facing_V_NORTH,
	mc_26_3_birch_shelf_facing_V_SOUTH,
	mc_26_3_birch_shelf_facing_V_WEST,
	mc_26_3_birch_shelf_facing_V_EAST,
} mc_26_3_birch_shelf_facing;

typedef enum {
	mc_26_3_birch_shelf_side_chain_V_UNCONNECTED,
	mc_26_3_birch_shelf_side_chain_V_RIGHT,
	mc_26_3_birch_shelf_side_chain_V_CENTER,
	mc_26_3_birch_shelf_side_chain_V_LEFT,
} mc_26_3_birch_shelf_side_chain;

typedef struct {
	mc_26_3_birch_shelf_facing facing;
	b8 powered;
	mc_26_3_birch_shelf_side_chain side_chain;
	b8 waterlogged;
} mc_26_3_birch_shelf_properties;

typedef enum {
	mc_26_3_birch_sign_rotation_V_V_0,
	mc_26_3_birch_sign_rotation_V_V_1,
	mc_26_3_birch_sign_rotation_V_V_2,
	mc_26_3_birch_sign_rotation_V_V_3,
	mc_26_3_birch_sign_rotation_V_V_4,
	mc_26_3_birch_sign_rotation_V_V_5,
	mc_26_3_birch_sign_rotation_V_V_6,
	mc_26_3_birch_sign_rotation_V_V_7,
	mc_26_3_birch_sign_rotation_V_V_8,
	mc_26_3_birch_sign_rotation_V_V_9,
	mc_26_3_birch_sign_rotation_V_V_10,
	mc_26_3_birch_sign_rotation_V_V_11,
	mc_26_3_birch_sign_rotation_V_V_12,
	mc_26_3_birch_sign_rotation_V_V_13,
	mc_26_3_birch_sign_rotation_V_V_14,
	mc_26_3_birch_sign_rotation_V_V_15,
} mc_26_3_birch_sign_rotation;

typedef struct {
	mc_26_3_birch_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_birch_sign_properties;

typedef enum {
	mc_26_3_birch_slab_type_V_TOP,
	mc_26_3_birch_slab_type_V_BOTTOM,
	mc_26_3_birch_slab_type_V_DOUBLE,
} mc_26_3_birch_slab_type;

typedef struct {
	mc_26_3_birch_slab_type type;
	b8 waterlogged;
} mc_26_3_birch_slab_properties;

typedef enum {
	mc_26_3_birch_stairs_facing_V_NORTH,
	mc_26_3_birch_stairs_facing_V_SOUTH,
	mc_26_3_birch_stairs_facing_V_WEST,
	mc_26_3_birch_stairs_facing_V_EAST,
} mc_26_3_birch_stairs_facing;

typedef enum {
	mc_26_3_birch_stairs_half_V_TOP,
	mc_26_3_birch_stairs_half_V_BOTTOM,
} mc_26_3_birch_stairs_half;

typedef enum {
	mc_26_3_birch_stairs_shape_V_STRAIGHT,
	mc_26_3_birch_stairs_shape_V_INNER_LEFT,
	mc_26_3_birch_stairs_shape_V_INNER_RIGHT,
	mc_26_3_birch_stairs_shape_V_OUTER_LEFT,
	mc_26_3_birch_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_birch_stairs_shape;

typedef struct {
	mc_26_3_birch_stairs_facing facing;
	mc_26_3_birch_stairs_half half;
	mc_26_3_birch_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_birch_stairs_properties;

typedef enum {
	mc_26_3_birch_trapdoor_facing_V_NORTH,
	mc_26_3_birch_trapdoor_facing_V_SOUTH,
	mc_26_3_birch_trapdoor_facing_V_WEST,
	mc_26_3_birch_trapdoor_facing_V_EAST,
} mc_26_3_birch_trapdoor_facing;

typedef enum {
	mc_26_3_birch_trapdoor_half_V_TOP,
	mc_26_3_birch_trapdoor_half_V_BOTTOM,
} mc_26_3_birch_trapdoor_half;

typedef struct {
	mc_26_3_birch_trapdoor_facing facing;
	mc_26_3_birch_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_birch_trapdoor_properties;

typedef enum {
	mc_26_3_birch_wall_hanging_sign_facing_V_NORTH,
	mc_26_3_birch_wall_hanging_sign_facing_V_SOUTH,
	mc_26_3_birch_wall_hanging_sign_facing_V_WEST,
	mc_26_3_birch_wall_hanging_sign_facing_V_EAST,
} mc_26_3_birch_wall_hanging_sign_facing;

typedef struct {
	mc_26_3_birch_wall_hanging_sign_facing facing;
	b8 waterlogged;
} mc_26_3_birch_wall_hanging_sign_properties;

typedef enum {
	mc_26_3_birch_wall_sign_facing_V_NORTH,
	mc_26_3_birch_wall_sign_facing_V_SOUTH,
	mc_26_3_birch_wall_sign_facing_V_WEST,
	mc_26_3_birch_wall_sign_facing_V_EAST,
} mc_26_3_birch_wall_sign_facing;

typedef struct {
	mc_26_3_birch_wall_sign_facing facing;
	b8 waterlogged;
} mc_26_3_birch_wall_sign_properties;

typedef enum {
	mc_26_3_birch_wood_axis_V_X,
	mc_26_3_birch_wood_axis_V_Y,
	mc_26_3_birch_wood_axis_V_Z,
} mc_26_3_birch_wood_axis;

typedef struct {
	mc_26_3_birch_wood_axis axis;
} mc_26_3_birch_wood_properties;

typedef enum {
	mc_26_3_black_banner_rotation_V_V_0,
	mc_26_3_black_banner_rotation_V_V_1,
	mc_26_3_black_banner_rotation_V_V_2,
	mc_26_3_black_banner_rotation_V_V_3,
	mc_26_3_black_banner_rotation_V_V_4,
	mc_26_3_black_banner_rotation_V_V_5,
	mc_26_3_black_banner_rotation_V_V_6,
	mc_26_3_black_banner_rotation_V_V_7,
	mc_26_3_black_banner_rotation_V_V_8,
	mc_26_3_black_banner_rotation_V_V_9,
	mc_26_3_black_banner_rotation_V_V_10,
	mc_26_3_black_banner_rotation_V_V_11,
	mc_26_3_black_banner_rotation_V_V_12,
	mc_26_3_black_banner_rotation_V_V_13,
	mc_26_3_black_banner_rotation_V_V_14,
	mc_26_3_black_banner_rotation_V_V_15,
} mc_26_3_black_banner_rotation;

typedef struct {
	mc_26_3_black_banner_rotation rotation;
} mc_26_3_black_banner_properties;

typedef enum {
	mc_26_3_black_bed_facing_V_NORTH,
	mc_26_3_black_bed_facing_V_SOUTH,
	mc_26_3_black_bed_facing_V_WEST,
	mc_26_3_black_bed_facing_V_EAST,
} mc_26_3_black_bed_facing;

typedef enum {
	mc_26_3_black_bed_part_V_HEAD,
	mc_26_3_black_bed_part_V_FOOT,
} mc_26_3_black_bed_part;

typedef struct {
	mc_26_3_black_bed_facing facing;
	b8 occupied;
	mc_26_3_black_bed_part part;
} mc_26_3_black_bed_properties;

typedef enum {
	mc_26_3_black_candle_candles_V_V_1,
	mc_26_3_black_candle_candles_V_V_2,
	mc_26_3_black_candle_candles_V_V_3,
	mc_26_3_black_candle_candles_V_V_4,
} mc_26_3_black_candle_candles;

typedef struct {
	mc_26_3_black_candle_candles candles;
	b8 lit;
	b8 waterlogged;
} mc_26_3_black_candle_properties;

typedef struct {
	b8 lit;
} mc_26_3_black_candle_cake_properties;

typedef enum {
	mc_26_3_black_concrete_slab_type_V_TOP,
	mc_26_3_black_concrete_slab_type_V_BOTTOM,
	mc_26_3_black_concrete_slab_type_V_DOUBLE,
} mc_26_3_black_concrete_slab_type;

typedef struct {
	mc_26_3_black_concrete_slab_type type;
	b8 waterlogged;
} mc_26_3_black_concrete_slab_properties;

typedef enum {
	mc_26_3_black_concrete_stairs_facing_V_NORTH,
	mc_26_3_black_concrete_stairs_facing_V_SOUTH,
	mc_26_3_black_concrete_stairs_facing_V_WEST,
	mc_26_3_black_concrete_stairs_facing_V_EAST,
} mc_26_3_black_concrete_stairs_facing;

typedef enum {
	mc_26_3_black_concrete_stairs_half_V_TOP,
	mc_26_3_black_concrete_stairs_half_V_BOTTOM,
} mc_26_3_black_concrete_stairs_half;

typedef enum {
	mc_26_3_black_concrete_stairs_shape_V_STRAIGHT,
	mc_26_3_black_concrete_stairs_shape_V_INNER_LEFT,
	mc_26_3_black_concrete_stairs_shape_V_INNER_RIGHT,
	mc_26_3_black_concrete_stairs_shape_V_OUTER_LEFT,
	mc_26_3_black_concrete_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_black_concrete_stairs_shape;

typedef struct {
	mc_26_3_black_concrete_stairs_facing facing;
	mc_26_3_black_concrete_stairs_half half;
	mc_26_3_black_concrete_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_black_concrete_stairs_properties;

typedef enum {
	mc_26_3_black_glazed_terracotta_facing_V_NORTH,
	mc_26_3_black_glazed_terracotta_facing_V_SOUTH,
	mc_26_3_black_glazed_terracotta_facing_V_WEST,
	mc_26_3_black_glazed_terracotta_facing_V_EAST,
} mc_26_3_black_glazed_terracotta_facing;

typedef struct {
	mc_26_3_black_glazed_terracotta_facing facing;
} mc_26_3_black_glazed_terracotta_properties;

typedef enum {
	mc_26_3_black_shulker_box_facing_V_NORTH,
	mc_26_3_black_shulker_box_facing_V_EAST,
	mc_26_3_black_shulker_box_facing_V_SOUTH,
	mc_26_3_black_shulker_box_facing_V_WEST,
	mc_26_3_black_shulker_box_facing_V_UP,
	mc_26_3_black_shulker_box_facing_V_DOWN,
} mc_26_3_black_shulker_box_facing;

typedef struct {
	mc_26_3_black_shulker_box_facing facing;
} mc_26_3_black_shulker_box_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_black_stained_glass_pane_properties;

typedef enum {
	mc_26_3_black_wall_banner_facing_V_NORTH,
	mc_26_3_black_wall_banner_facing_V_SOUTH,
	mc_26_3_black_wall_banner_facing_V_WEST,
	mc_26_3_black_wall_banner_facing_V_EAST,
} mc_26_3_black_wall_banner_facing;

typedef struct {
	mc_26_3_black_wall_banner_facing facing;
} mc_26_3_black_wall_banner_properties;

typedef enum {
	mc_26_3_black_wool_slab_type_V_TOP,
	mc_26_3_black_wool_slab_type_V_BOTTOM,
	mc_26_3_black_wool_slab_type_V_DOUBLE,
} mc_26_3_black_wool_slab_type;

typedef struct {
	mc_26_3_black_wool_slab_type type;
	b8 waterlogged;
} mc_26_3_black_wool_slab_properties;

typedef enum {
	mc_26_3_black_wool_stairs_facing_V_NORTH,
	mc_26_3_black_wool_stairs_facing_V_SOUTH,
	mc_26_3_black_wool_stairs_facing_V_WEST,
	mc_26_3_black_wool_stairs_facing_V_EAST,
} mc_26_3_black_wool_stairs_facing;

typedef enum {
	mc_26_3_black_wool_stairs_half_V_TOP,
	mc_26_3_black_wool_stairs_half_V_BOTTOM,
} mc_26_3_black_wool_stairs_half;

typedef enum {
	mc_26_3_black_wool_stairs_shape_V_STRAIGHT,
	mc_26_3_black_wool_stairs_shape_V_INNER_LEFT,
	mc_26_3_black_wool_stairs_shape_V_INNER_RIGHT,
	mc_26_3_black_wool_stairs_shape_V_OUTER_LEFT,
	mc_26_3_black_wool_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_black_wool_stairs_shape;

typedef struct {
	mc_26_3_black_wool_stairs_facing facing;
	mc_26_3_black_wool_stairs_half half;
	mc_26_3_black_wool_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_black_wool_stairs_properties;

typedef enum {
	mc_26_3_blackstone_slab_type_V_TOP,
	mc_26_3_blackstone_slab_type_V_BOTTOM,
	mc_26_3_blackstone_slab_type_V_DOUBLE,
} mc_26_3_blackstone_slab_type;

typedef struct {
	mc_26_3_blackstone_slab_type type;
	b8 waterlogged;
} mc_26_3_blackstone_slab_properties;

typedef enum {
	mc_26_3_blackstone_stairs_facing_V_NORTH,
	mc_26_3_blackstone_stairs_facing_V_SOUTH,
	mc_26_3_blackstone_stairs_facing_V_WEST,
	mc_26_3_blackstone_stairs_facing_V_EAST,
} mc_26_3_blackstone_stairs_facing;

typedef enum {
	mc_26_3_blackstone_stairs_half_V_TOP,
	mc_26_3_blackstone_stairs_half_V_BOTTOM,
} mc_26_3_blackstone_stairs_half;

typedef enum {
	mc_26_3_blackstone_stairs_shape_V_STRAIGHT,
	mc_26_3_blackstone_stairs_shape_V_INNER_LEFT,
	mc_26_3_blackstone_stairs_shape_V_INNER_RIGHT,
	mc_26_3_blackstone_stairs_shape_V_OUTER_LEFT,
	mc_26_3_blackstone_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_blackstone_stairs_shape;

typedef struct {
	mc_26_3_blackstone_stairs_facing facing;
	mc_26_3_blackstone_stairs_half half;
	mc_26_3_blackstone_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_blackstone_stairs_properties;

typedef enum {
	mc_26_3_blackstone_wall_east_V_NONE,
	mc_26_3_blackstone_wall_east_V_LOW,
	mc_26_3_blackstone_wall_east_V_TALL,
} mc_26_3_blackstone_wall_east;

typedef enum {
	mc_26_3_blackstone_wall_north_V_NONE,
	mc_26_3_blackstone_wall_north_V_LOW,
	mc_26_3_blackstone_wall_north_V_TALL,
} mc_26_3_blackstone_wall_north;

typedef enum {
	mc_26_3_blackstone_wall_south_V_NONE,
	mc_26_3_blackstone_wall_south_V_LOW,
	mc_26_3_blackstone_wall_south_V_TALL,
} mc_26_3_blackstone_wall_south;

typedef enum {
	mc_26_3_blackstone_wall_west_V_NONE,
	mc_26_3_blackstone_wall_west_V_LOW,
	mc_26_3_blackstone_wall_west_V_TALL,
} mc_26_3_blackstone_wall_west;

typedef struct {
	mc_26_3_blackstone_wall_east east;
	mc_26_3_blackstone_wall_north north;
	mc_26_3_blackstone_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_blackstone_wall_west west;
} mc_26_3_blackstone_wall_properties;

typedef enum {
	mc_26_3_blast_furnace_facing_V_NORTH,
	mc_26_3_blast_furnace_facing_V_SOUTH,
	mc_26_3_blast_furnace_facing_V_WEST,
	mc_26_3_blast_furnace_facing_V_EAST,
} mc_26_3_blast_furnace_facing;

typedef struct {
	mc_26_3_blast_furnace_facing facing;
	b8 lit;
} mc_26_3_blast_furnace_properties;

typedef enum {
	mc_26_3_blue_banner_rotation_V_V_0,
	mc_26_3_blue_banner_rotation_V_V_1,
	mc_26_3_blue_banner_rotation_V_V_2,
	mc_26_3_blue_banner_rotation_V_V_3,
	mc_26_3_blue_banner_rotation_V_V_4,
	mc_26_3_blue_banner_rotation_V_V_5,
	mc_26_3_blue_banner_rotation_V_V_6,
	mc_26_3_blue_banner_rotation_V_V_7,
	mc_26_3_blue_banner_rotation_V_V_8,
	mc_26_3_blue_banner_rotation_V_V_9,
	mc_26_3_blue_banner_rotation_V_V_10,
	mc_26_3_blue_banner_rotation_V_V_11,
	mc_26_3_blue_banner_rotation_V_V_12,
	mc_26_3_blue_banner_rotation_V_V_13,
	mc_26_3_blue_banner_rotation_V_V_14,
	mc_26_3_blue_banner_rotation_V_V_15,
} mc_26_3_blue_banner_rotation;

typedef struct {
	mc_26_3_blue_banner_rotation rotation;
} mc_26_3_blue_banner_properties;

typedef enum {
	mc_26_3_blue_bed_facing_V_NORTH,
	mc_26_3_blue_bed_facing_V_SOUTH,
	mc_26_3_blue_bed_facing_V_WEST,
	mc_26_3_blue_bed_facing_V_EAST,
} mc_26_3_blue_bed_facing;

typedef enum {
	mc_26_3_blue_bed_part_V_HEAD,
	mc_26_3_blue_bed_part_V_FOOT,
} mc_26_3_blue_bed_part;

typedef struct {
	mc_26_3_blue_bed_facing facing;
	b8 occupied;
	mc_26_3_blue_bed_part part;
} mc_26_3_blue_bed_properties;

typedef enum {
	mc_26_3_blue_candle_candles_V_V_1,
	mc_26_3_blue_candle_candles_V_V_2,
	mc_26_3_blue_candle_candles_V_V_3,
	mc_26_3_blue_candle_candles_V_V_4,
} mc_26_3_blue_candle_candles;

typedef struct {
	mc_26_3_blue_candle_candles candles;
	b8 lit;
	b8 waterlogged;
} mc_26_3_blue_candle_properties;

typedef struct {
	b8 lit;
} mc_26_3_blue_candle_cake_properties;

typedef enum {
	mc_26_3_blue_concrete_slab_type_V_TOP,
	mc_26_3_blue_concrete_slab_type_V_BOTTOM,
	mc_26_3_blue_concrete_slab_type_V_DOUBLE,
} mc_26_3_blue_concrete_slab_type;

typedef struct {
	mc_26_3_blue_concrete_slab_type type;
	b8 waterlogged;
} mc_26_3_blue_concrete_slab_properties;

typedef enum {
	mc_26_3_blue_concrete_stairs_facing_V_NORTH,
	mc_26_3_blue_concrete_stairs_facing_V_SOUTH,
	mc_26_3_blue_concrete_stairs_facing_V_WEST,
	mc_26_3_blue_concrete_stairs_facing_V_EAST,
} mc_26_3_blue_concrete_stairs_facing;

typedef enum {
	mc_26_3_blue_concrete_stairs_half_V_TOP,
	mc_26_3_blue_concrete_stairs_half_V_BOTTOM,
} mc_26_3_blue_concrete_stairs_half;

typedef enum {
	mc_26_3_blue_concrete_stairs_shape_V_STRAIGHT,
	mc_26_3_blue_concrete_stairs_shape_V_INNER_LEFT,
	mc_26_3_blue_concrete_stairs_shape_V_INNER_RIGHT,
	mc_26_3_blue_concrete_stairs_shape_V_OUTER_LEFT,
	mc_26_3_blue_concrete_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_blue_concrete_stairs_shape;

typedef struct {
	mc_26_3_blue_concrete_stairs_facing facing;
	mc_26_3_blue_concrete_stairs_half half;
	mc_26_3_blue_concrete_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_blue_concrete_stairs_properties;

typedef enum {
	mc_26_3_blue_glazed_terracotta_facing_V_NORTH,
	mc_26_3_blue_glazed_terracotta_facing_V_SOUTH,
	mc_26_3_blue_glazed_terracotta_facing_V_WEST,
	mc_26_3_blue_glazed_terracotta_facing_V_EAST,
} mc_26_3_blue_glazed_terracotta_facing;

typedef struct {
	mc_26_3_blue_glazed_terracotta_facing facing;
} mc_26_3_blue_glazed_terracotta_properties;

typedef enum {
	mc_26_3_blue_shulker_box_facing_V_NORTH,
	mc_26_3_blue_shulker_box_facing_V_EAST,
	mc_26_3_blue_shulker_box_facing_V_SOUTH,
	mc_26_3_blue_shulker_box_facing_V_WEST,
	mc_26_3_blue_shulker_box_facing_V_UP,
	mc_26_3_blue_shulker_box_facing_V_DOWN,
} mc_26_3_blue_shulker_box_facing;

typedef struct {
	mc_26_3_blue_shulker_box_facing facing;
} mc_26_3_blue_shulker_box_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_blue_stained_glass_pane_properties;

typedef enum {
	mc_26_3_blue_wall_banner_facing_V_NORTH,
	mc_26_3_blue_wall_banner_facing_V_SOUTH,
	mc_26_3_blue_wall_banner_facing_V_WEST,
	mc_26_3_blue_wall_banner_facing_V_EAST,
} mc_26_3_blue_wall_banner_facing;

typedef struct {
	mc_26_3_blue_wall_banner_facing facing;
} mc_26_3_blue_wall_banner_properties;

typedef enum {
	mc_26_3_blue_wool_slab_type_V_TOP,
	mc_26_3_blue_wool_slab_type_V_BOTTOM,
	mc_26_3_blue_wool_slab_type_V_DOUBLE,
} mc_26_3_blue_wool_slab_type;

typedef struct {
	mc_26_3_blue_wool_slab_type type;
	b8 waterlogged;
} mc_26_3_blue_wool_slab_properties;

typedef enum {
	mc_26_3_blue_wool_stairs_facing_V_NORTH,
	mc_26_3_blue_wool_stairs_facing_V_SOUTH,
	mc_26_3_blue_wool_stairs_facing_V_WEST,
	mc_26_3_blue_wool_stairs_facing_V_EAST,
} mc_26_3_blue_wool_stairs_facing;

typedef enum {
	mc_26_3_blue_wool_stairs_half_V_TOP,
	mc_26_3_blue_wool_stairs_half_V_BOTTOM,
} mc_26_3_blue_wool_stairs_half;

typedef enum {
	mc_26_3_blue_wool_stairs_shape_V_STRAIGHT,
	mc_26_3_blue_wool_stairs_shape_V_INNER_LEFT,
	mc_26_3_blue_wool_stairs_shape_V_INNER_RIGHT,
	mc_26_3_blue_wool_stairs_shape_V_OUTER_LEFT,
	mc_26_3_blue_wool_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_blue_wool_stairs_shape;

typedef struct {
	mc_26_3_blue_wool_stairs_facing facing;
	mc_26_3_blue_wool_stairs_half half;
	mc_26_3_blue_wool_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_blue_wool_stairs_properties;

typedef enum {
	mc_26_3_bone_block_axis_V_X,
	mc_26_3_bone_block_axis_V_Y,
	mc_26_3_bone_block_axis_V_Z,
} mc_26_3_bone_block_axis;

typedef struct {
	mc_26_3_bone_block_axis axis;
} mc_26_3_bone_block_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_brain_coral_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_brain_coral_fan_properties;

typedef enum {
	mc_26_3_brain_coral_wall_fan_facing_V_NORTH,
	mc_26_3_brain_coral_wall_fan_facing_V_SOUTH,
	mc_26_3_brain_coral_wall_fan_facing_V_WEST,
	mc_26_3_brain_coral_wall_fan_facing_V_EAST,
} mc_26_3_brain_coral_wall_fan_facing;

typedef struct {
	mc_26_3_brain_coral_wall_fan_facing facing;
	b8 waterlogged;
} mc_26_3_brain_coral_wall_fan_properties;

typedef struct {
	b8 has_bottle_0;
	b8 has_bottle_1;
	b8 has_bottle_2;
} mc_26_3_brewing_stand_properties;

typedef enum {
	mc_26_3_brick_slab_type_V_TOP,
	mc_26_3_brick_slab_type_V_BOTTOM,
	mc_26_3_brick_slab_type_V_DOUBLE,
} mc_26_3_brick_slab_type;

typedef struct {
	mc_26_3_brick_slab_type type;
	b8 waterlogged;
} mc_26_3_brick_slab_properties;

typedef enum {
	mc_26_3_brick_stairs_facing_V_NORTH,
	mc_26_3_brick_stairs_facing_V_SOUTH,
	mc_26_3_brick_stairs_facing_V_WEST,
	mc_26_3_brick_stairs_facing_V_EAST,
} mc_26_3_brick_stairs_facing;

typedef enum {
	mc_26_3_brick_stairs_half_V_TOP,
	mc_26_3_brick_stairs_half_V_BOTTOM,
} mc_26_3_brick_stairs_half;

typedef enum {
	mc_26_3_brick_stairs_shape_V_STRAIGHT,
	mc_26_3_brick_stairs_shape_V_INNER_LEFT,
	mc_26_3_brick_stairs_shape_V_INNER_RIGHT,
	mc_26_3_brick_stairs_shape_V_OUTER_LEFT,
	mc_26_3_brick_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_brick_stairs_shape;

typedef struct {
	mc_26_3_brick_stairs_facing facing;
	mc_26_3_brick_stairs_half half;
	mc_26_3_brick_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_brick_stairs_properties;

typedef enum {
	mc_26_3_brick_wall_east_V_NONE,
	mc_26_3_brick_wall_east_V_LOW,
	mc_26_3_brick_wall_east_V_TALL,
} mc_26_3_brick_wall_east;

typedef enum {
	mc_26_3_brick_wall_north_V_NONE,
	mc_26_3_brick_wall_north_V_LOW,
	mc_26_3_brick_wall_north_V_TALL,
} mc_26_3_brick_wall_north;

typedef enum {
	mc_26_3_brick_wall_south_V_NONE,
	mc_26_3_brick_wall_south_V_LOW,
	mc_26_3_brick_wall_south_V_TALL,
} mc_26_3_brick_wall_south;

typedef enum {
	mc_26_3_brick_wall_west_V_NONE,
	mc_26_3_brick_wall_west_V_LOW,
	mc_26_3_brick_wall_west_V_TALL,
} mc_26_3_brick_wall_west;

typedef struct {
	mc_26_3_brick_wall_east east;
	mc_26_3_brick_wall_north north;
	mc_26_3_brick_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_brick_wall_west west;
} mc_26_3_brick_wall_properties;

typedef enum {
	mc_26_3_brown_banner_rotation_V_V_0,
	mc_26_3_brown_banner_rotation_V_V_1,
	mc_26_3_brown_banner_rotation_V_V_2,
	mc_26_3_brown_banner_rotation_V_V_3,
	mc_26_3_brown_banner_rotation_V_V_4,
	mc_26_3_brown_banner_rotation_V_V_5,
	mc_26_3_brown_banner_rotation_V_V_6,
	mc_26_3_brown_banner_rotation_V_V_7,
	mc_26_3_brown_banner_rotation_V_V_8,
	mc_26_3_brown_banner_rotation_V_V_9,
	mc_26_3_brown_banner_rotation_V_V_10,
	mc_26_3_brown_banner_rotation_V_V_11,
	mc_26_3_brown_banner_rotation_V_V_12,
	mc_26_3_brown_banner_rotation_V_V_13,
	mc_26_3_brown_banner_rotation_V_V_14,
	mc_26_3_brown_banner_rotation_V_V_15,
} mc_26_3_brown_banner_rotation;

typedef struct {
	mc_26_3_brown_banner_rotation rotation;
} mc_26_3_brown_banner_properties;

typedef enum {
	mc_26_3_brown_bed_facing_V_NORTH,
	mc_26_3_brown_bed_facing_V_SOUTH,
	mc_26_3_brown_bed_facing_V_WEST,
	mc_26_3_brown_bed_facing_V_EAST,
} mc_26_3_brown_bed_facing;

typedef enum {
	mc_26_3_brown_bed_part_V_HEAD,
	mc_26_3_brown_bed_part_V_FOOT,
} mc_26_3_brown_bed_part;

typedef struct {
	mc_26_3_brown_bed_facing facing;
	b8 occupied;
	mc_26_3_brown_bed_part part;
} mc_26_3_brown_bed_properties;

typedef enum {
	mc_26_3_brown_candle_candles_V_V_1,
	mc_26_3_brown_candle_candles_V_V_2,
	mc_26_3_brown_candle_candles_V_V_3,
	mc_26_3_brown_candle_candles_V_V_4,
} mc_26_3_brown_candle_candles;

typedef struct {
	mc_26_3_brown_candle_candles candles;
	b8 lit;
	b8 waterlogged;
} mc_26_3_brown_candle_properties;

typedef struct {
	b8 lit;
} mc_26_3_brown_candle_cake_properties;

typedef enum {
	mc_26_3_brown_concrete_slab_type_V_TOP,
	mc_26_3_brown_concrete_slab_type_V_BOTTOM,
	mc_26_3_brown_concrete_slab_type_V_DOUBLE,
} mc_26_3_brown_concrete_slab_type;

typedef struct {
	mc_26_3_brown_concrete_slab_type type;
	b8 waterlogged;
} mc_26_3_brown_concrete_slab_properties;

typedef enum {
	mc_26_3_brown_concrete_stairs_facing_V_NORTH,
	mc_26_3_brown_concrete_stairs_facing_V_SOUTH,
	mc_26_3_brown_concrete_stairs_facing_V_WEST,
	mc_26_3_brown_concrete_stairs_facing_V_EAST,
} mc_26_3_brown_concrete_stairs_facing;

typedef enum {
	mc_26_3_brown_concrete_stairs_half_V_TOP,
	mc_26_3_brown_concrete_stairs_half_V_BOTTOM,
} mc_26_3_brown_concrete_stairs_half;

typedef enum {
	mc_26_3_brown_concrete_stairs_shape_V_STRAIGHT,
	mc_26_3_brown_concrete_stairs_shape_V_INNER_LEFT,
	mc_26_3_brown_concrete_stairs_shape_V_INNER_RIGHT,
	mc_26_3_brown_concrete_stairs_shape_V_OUTER_LEFT,
	mc_26_3_brown_concrete_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_brown_concrete_stairs_shape;

typedef struct {
	mc_26_3_brown_concrete_stairs_facing facing;
	mc_26_3_brown_concrete_stairs_half half;
	mc_26_3_brown_concrete_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_brown_concrete_stairs_properties;

typedef enum {
	mc_26_3_brown_glazed_terracotta_facing_V_NORTH,
	mc_26_3_brown_glazed_terracotta_facing_V_SOUTH,
	mc_26_3_brown_glazed_terracotta_facing_V_WEST,
	mc_26_3_brown_glazed_terracotta_facing_V_EAST,
} mc_26_3_brown_glazed_terracotta_facing;

typedef struct {
	mc_26_3_brown_glazed_terracotta_facing facing;
} mc_26_3_brown_glazed_terracotta_properties;

typedef struct {
	b8 down;
	b8 east;
	b8 north;
	b8 south;
	b8 up;
	b8 west;
} mc_26_3_brown_mushroom_block_properties;

typedef enum {
	mc_26_3_brown_shulker_box_facing_V_NORTH,
	mc_26_3_brown_shulker_box_facing_V_EAST,
	mc_26_3_brown_shulker_box_facing_V_SOUTH,
	mc_26_3_brown_shulker_box_facing_V_WEST,
	mc_26_3_brown_shulker_box_facing_V_UP,
	mc_26_3_brown_shulker_box_facing_V_DOWN,
} mc_26_3_brown_shulker_box_facing;

typedef struct {
	mc_26_3_brown_shulker_box_facing facing;
} mc_26_3_brown_shulker_box_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_brown_stained_glass_pane_properties;

typedef enum {
	mc_26_3_brown_wall_banner_facing_V_NORTH,
	mc_26_3_brown_wall_banner_facing_V_SOUTH,
	mc_26_3_brown_wall_banner_facing_V_WEST,
	mc_26_3_brown_wall_banner_facing_V_EAST,
} mc_26_3_brown_wall_banner_facing;

typedef struct {
	mc_26_3_brown_wall_banner_facing facing;
} mc_26_3_brown_wall_banner_properties;

typedef enum {
	mc_26_3_brown_wool_slab_type_V_TOP,
	mc_26_3_brown_wool_slab_type_V_BOTTOM,
	mc_26_3_brown_wool_slab_type_V_DOUBLE,
} mc_26_3_brown_wool_slab_type;

typedef struct {
	mc_26_3_brown_wool_slab_type type;
	b8 waterlogged;
} mc_26_3_brown_wool_slab_properties;

typedef enum {
	mc_26_3_brown_wool_stairs_facing_V_NORTH,
	mc_26_3_brown_wool_stairs_facing_V_SOUTH,
	mc_26_3_brown_wool_stairs_facing_V_WEST,
	mc_26_3_brown_wool_stairs_facing_V_EAST,
} mc_26_3_brown_wool_stairs_facing;

typedef enum {
	mc_26_3_brown_wool_stairs_half_V_TOP,
	mc_26_3_brown_wool_stairs_half_V_BOTTOM,
} mc_26_3_brown_wool_stairs_half;

typedef enum {
	mc_26_3_brown_wool_stairs_shape_V_STRAIGHT,
	mc_26_3_brown_wool_stairs_shape_V_INNER_LEFT,
	mc_26_3_brown_wool_stairs_shape_V_INNER_RIGHT,
	mc_26_3_brown_wool_stairs_shape_V_OUTER_LEFT,
	mc_26_3_brown_wool_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_brown_wool_stairs_shape;

typedef struct {
	mc_26_3_brown_wool_stairs_facing facing;
	mc_26_3_brown_wool_stairs_half half;
	mc_26_3_brown_wool_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_brown_wool_stairs_properties;

typedef struct {
	b8 drag;
} mc_26_3_bubble_column_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_bubble_coral_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_bubble_coral_fan_properties;

typedef enum {
	mc_26_3_bubble_coral_wall_fan_facing_V_NORTH,
	mc_26_3_bubble_coral_wall_fan_facing_V_SOUTH,
	mc_26_3_bubble_coral_wall_fan_facing_V_WEST,
	mc_26_3_bubble_coral_wall_fan_facing_V_EAST,
} mc_26_3_bubble_coral_wall_fan_facing;

typedef struct {
	mc_26_3_bubble_coral_wall_fan_facing facing;
	b8 waterlogged;
} mc_26_3_bubble_coral_wall_fan_properties;

typedef enum {
	mc_26_3_cactus_age_V_V_0,
	mc_26_3_cactus_age_V_V_1,
	mc_26_3_cactus_age_V_V_2,
	mc_26_3_cactus_age_V_V_3,
	mc_26_3_cactus_age_V_V_4,
	mc_26_3_cactus_age_V_V_5,
	mc_26_3_cactus_age_V_V_6,
	mc_26_3_cactus_age_V_V_7,
	mc_26_3_cactus_age_V_V_8,
	mc_26_3_cactus_age_V_V_9,
	mc_26_3_cactus_age_V_V_10,
	mc_26_3_cactus_age_V_V_11,
	mc_26_3_cactus_age_V_V_12,
	mc_26_3_cactus_age_V_V_13,
	mc_26_3_cactus_age_V_V_14,
	mc_26_3_cactus_age_V_V_15,
} mc_26_3_cactus_age;

typedef struct {
	mc_26_3_cactus_age age;
} mc_26_3_cactus_properties;

typedef enum {
	mc_26_3_cake_bites_V_V_0,
	mc_26_3_cake_bites_V_V_1,
	mc_26_3_cake_bites_V_V_2,
	mc_26_3_cake_bites_V_V_3,
	mc_26_3_cake_bites_V_V_4,
	mc_26_3_cake_bites_V_V_5,
	mc_26_3_cake_bites_V_V_6,
} mc_26_3_cake_bites;

typedef struct {
	mc_26_3_cake_bites bites;
} mc_26_3_cake_properties;

typedef enum {
	mc_26_3_calibrated_sculk_sensor_facing_V_NORTH,
	mc_26_3_calibrated_sculk_sensor_facing_V_SOUTH,
	mc_26_3_calibrated_sculk_sensor_facing_V_WEST,
	mc_26_3_calibrated_sculk_sensor_facing_V_EAST,
} mc_26_3_calibrated_sculk_sensor_facing;

typedef enum {
	mc_26_3_calibrated_sculk_sensor_power_V_V_0,
	mc_26_3_calibrated_sculk_sensor_power_V_V_1,
	mc_26_3_calibrated_sculk_sensor_power_V_V_2,
	mc_26_3_calibrated_sculk_sensor_power_V_V_3,
	mc_26_3_calibrated_sculk_sensor_power_V_V_4,
	mc_26_3_calibrated_sculk_sensor_power_V_V_5,
	mc_26_3_calibrated_sculk_sensor_power_V_V_6,
	mc_26_3_calibrated_sculk_sensor_power_V_V_7,
	mc_26_3_calibrated_sculk_sensor_power_V_V_8,
	mc_26_3_calibrated_sculk_sensor_power_V_V_9,
	mc_26_3_calibrated_sculk_sensor_power_V_V_10,
	mc_26_3_calibrated_sculk_sensor_power_V_V_11,
	mc_26_3_calibrated_sculk_sensor_power_V_V_12,
	mc_26_3_calibrated_sculk_sensor_power_V_V_13,
	mc_26_3_calibrated_sculk_sensor_power_V_V_14,
	mc_26_3_calibrated_sculk_sensor_power_V_V_15,
} mc_26_3_calibrated_sculk_sensor_power;

typedef enum {
	mc_26_3_calibrated_sculk_sensor_sculk_sensor_phase_V_INACTIVE,
	mc_26_3_calibrated_sculk_sensor_sculk_sensor_phase_V_ACTIVE,
	mc_26_3_calibrated_sculk_sensor_sculk_sensor_phase_V_COOLDOWN,
} mc_26_3_calibrated_sculk_sensor_sculk_sensor_phase;

typedef struct {
	mc_26_3_calibrated_sculk_sensor_facing facing;
	mc_26_3_calibrated_sculk_sensor_power power;
	mc_26_3_calibrated_sculk_sensor_sculk_sensor_phase sculk_sensor_phase;
	b8 waterlogged;
} mc_26_3_calibrated_sculk_sensor_properties;

typedef enum {
	mc_26_3_campfire_facing_V_NORTH,
	mc_26_3_campfire_facing_V_SOUTH,
	mc_26_3_campfire_facing_V_WEST,
	mc_26_3_campfire_facing_V_EAST,
} mc_26_3_campfire_facing;

typedef struct {
	mc_26_3_campfire_facing facing;
	b8 lit;
	b8 signal_fire;
	b8 waterlogged;
} mc_26_3_campfire_properties;

typedef enum {
	mc_26_3_candle_candles_V_V_1,
	mc_26_3_candle_candles_V_V_2,
	mc_26_3_candle_candles_V_V_3,
	mc_26_3_candle_candles_V_V_4,
} mc_26_3_candle_candles;

typedef struct {
	mc_26_3_candle_candles candles;
	b8 lit;
	b8 waterlogged;
} mc_26_3_candle_properties;

typedef struct {
	b8 lit;
} mc_26_3_candle_cake_properties;

typedef enum {
	mc_26_3_carrots_age_V_V_0,
	mc_26_3_carrots_age_V_V_1,
	mc_26_3_carrots_age_V_V_2,
	mc_26_3_carrots_age_V_V_3,
	mc_26_3_carrots_age_V_V_4,
	mc_26_3_carrots_age_V_V_5,
	mc_26_3_carrots_age_V_V_6,
	mc_26_3_carrots_age_V_V_7,
} mc_26_3_carrots_age;

typedef struct {
	mc_26_3_carrots_age age;
} mc_26_3_carrots_properties;

typedef enum {
	mc_26_3_carved_pumpkin_facing_V_NORTH,
	mc_26_3_carved_pumpkin_facing_V_SOUTH,
	mc_26_3_carved_pumpkin_facing_V_WEST,
	mc_26_3_carved_pumpkin_facing_V_EAST,
} mc_26_3_carved_pumpkin_facing;

typedef struct {
	mc_26_3_carved_pumpkin_facing facing;
} mc_26_3_carved_pumpkin_properties;

typedef enum {
	mc_26_3_cave_vines_age_V_V_0,
	mc_26_3_cave_vines_age_V_V_1,
	mc_26_3_cave_vines_age_V_V_2,
	mc_26_3_cave_vines_age_V_V_3,
	mc_26_3_cave_vines_age_V_V_4,
	mc_26_3_cave_vines_age_V_V_5,
	mc_26_3_cave_vines_age_V_V_6,
	mc_26_3_cave_vines_age_V_V_7,
	mc_26_3_cave_vines_age_V_V_8,
	mc_26_3_cave_vines_age_V_V_9,
	mc_26_3_cave_vines_age_V_V_10,
	mc_26_3_cave_vines_age_V_V_11,
	mc_26_3_cave_vines_age_V_V_12,
	mc_26_3_cave_vines_age_V_V_13,
	mc_26_3_cave_vines_age_V_V_14,
	mc_26_3_cave_vines_age_V_V_15,
	mc_26_3_cave_vines_age_V_V_16,
	mc_26_3_cave_vines_age_V_V_17,
	mc_26_3_cave_vines_age_V_V_18,
	mc_26_3_cave_vines_age_V_V_19,
	mc_26_3_cave_vines_age_V_V_20,
	mc_26_3_cave_vines_age_V_V_21,
	mc_26_3_cave_vines_age_V_V_22,
	mc_26_3_cave_vines_age_V_V_23,
	mc_26_3_cave_vines_age_V_V_24,
	mc_26_3_cave_vines_age_V_V_25,
} mc_26_3_cave_vines_age;

typedef struct {
	mc_26_3_cave_vines_age age;
	b8 berries;
} mc_26_3_cave_vines_properties;

typedef struct {
	b8 berries;
} mc_26_3_cave_vines_plant_properties;

typedef enum {
	mc_26_3_chain_command_block_facing_V_NORTH,
	mc_26_3_chain_command_block_facing_V_EAST,
	mc_26_3_chain_command_block_facing_V_SOUTH,
	mc_26_3_chain_command_block_facing_V_WEST,
	mc_26_3_chain_command_block_facing_V_UP,
	mc_26_3_chain_command_block_facing_V_DOWN,
} mc_26_3_chain_command_block_facing;

typedef struct {
	b8 conditional;
	mc_26_3_chain_command_block_facing facing;
} mc_26_3_chain_command_block_properties;

typedef enum {
	mc_26_3_cherry_button_face_V_FLOOR,
	mc_26_3_cherry_button_face_V_WALL,
	mc_26_3_cherry_button_face_V_CEILING,
} mc_26_3_cherry_button_face;

typedef enum {
	mc_26_3_cherry_button_facing_V_NORTH,
	mc_26_3_cherry_button_facing_V_SOUTH,
	mc_26_3_cherry_button_facing_V_WEST,
	mc_26_3_cherry_button_facing_V_EAST,
} mc_26_3_cherry_button_facing;

typedef struct {
	mc_26_3_cherry_button_face face;
	mc_26_3_cherry_button_facing facing;
	b8 powered;
} mc_26_3_cherry_button_properties;

typedef enum {
	mc_26_3_cherry_door_facing_V_NORTH,
	mc_26_3_cherry_door_facing_V_SOUTH,
	mc_26_3_cherry_door_facing_V_WEST,
	mc_26_3_cherry_door_facing_V_EAST,
} mc_26_3_cherry_door_facing;

typedef enum {
	mc_26_3_cherry_door_half_V_UPPER,
	mc_26_3_cherry_door_half_V_LOWER,
} mc_26_3_cherry_door_half;

typedef enum {
	mc_26_3_cherry_door_hinge_V_LEFT,
	mc_26_3_cherry_door_hinge_V_RIGHT,
} mc_26_3_cherry_door_hinge;

typedef struct {
	mc_26_3_cherry_door_facing facing;
	mc_26_3_cherry_door_half half;
	mc_26_3_cherry_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_cherry_door_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_cherry_fence_properties;

typedef enum {
	mc_26_3_cherry_fence_gate_facing_V_NORTH,
	mc_26_3_cherry_fence_gate_facing_V_SOUTH,
	mc_26_3_cherry_fence_gate_facing_V_WEST,
	mc_26_3_cherry_fence_gate_facing_V_EAST,
} mc_26_3_cherry_fence_gate_facing;

typedef struct {
	mc_26_3_cherry_fence_gate_facing facing;
	b8 in_wall;
	b8 open;
	b8 powered;
} mc_26_3_cherry_fence_gate_properties;

typedef enum {
	mc_26_3_cherry_hanging_sign_rotation_V_V_0,
	mc_26_3_cherry_hanging_sign_rotation_V_V_1,
	mc_26_3_cherry_hanging_sign_rotation_V_V_2,
	mc_26_3_cherry_hanging_sign_rotation_V_V_3,
	mc_26_3_cherry_hanging_sign_rotation_V_V_4,
	mc_26_3_cherry_hanging_sign_rotation_V_V_5,
	mc_26_3_cherry_hanging_sign_rotation_V_V_6,
	mc_26_3_cherry_hanging_sign_rotation_V_V_7,
	mc_26_3_cherry_hanging_sign_rotation_V_V_8,
	mc_26_3_cherry_hanging_sign_rotation_V_V_9,
	mc_26_3_cherry_hanging_sign_rotation_V_V_10,
	mc_26_3_cherry_hanging_sign_rotation_V_V_11,
	mc_26_3_cherry_hanging_sign_rotation_V_V_12,
	mc_26_3_cherry_hanging_sign_rotation_V_V_13,
	mc_26_3_cherry_hanging_sign_rotation_V_V_14,
	mc_26_3_cherry_hanging_sign_rotation_V_V_15,
} mc_26_3_cherry_hanging_sign_rotation;

typedef struct {
	b8 attached;
	mc_26_3_cherry_hanging_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_cherry_hanging_sign_properties;

typedef enum {
	mc_26_3_cherry_leaves_distance_V_V_1,
	mc_26_3_cherry_leaves_distance_V_V_2,
	mc_26_3_cherry_leaves_distance_V_V_3,
	mc_26_3_cherry_leaves_distance_V_V_4,
	mc_26_3_cherry_leaves_distance_V_V_5,
	mc_26_3_cherry_leaves_distance_V_V_6,
	mc_26_3_cherry_leaves_distance_V_V_7,
} mc_26_3_cherry_leaves_distance;

typedef struct {
	mc_26_3_cherry_leaves_distance distance;
	b8 persistent;
	b8 waterlogged;
} mc_26_3_cherry_leaves_properties;

typedef enum {
	mc_26_3_cherry_log_axis_V_X,
	mc_26_3_cherry_log_axis_V_Y,
	mc_26_3_cherry_log_axis_V_Z,
} mc_26_3_cherry_log_axis;

typedef struct {
	mc_26_3_cherry_log_axis axis;
} mc_26_3_cherry_log_properties;

typedef struct {
	b8 powered;
} mc_26_3_cherry_pressure_plate_properties;

typedef enum {
	mc_26_3_cherry_sapling_stage_V_V_0,
	mc_26_3_cherry_sapling_stage_V_V_1,
} mc_26_3_cherry_sapling_stage;

typedef struct {
	mc_26_3_cherry_sapling_stage stage;
} mc_26_3_cherry_sapling_properties;

typedef enum {
	mc_26_3_cherry_shelf_facing_V_NORTH,
	mc_26_3_cherry_shelf_facing_V_SOUTH,
	mc_26_3_cherry_shelf_facing_V_WEST,
	mc_26_3_cherry_shelf_facing_V_EAST,
} mc_26_3_cherry_shelf_facing;

typedef enum {
	mc_26_3_cherry_shelf_side_chain_V_UNCONNECTED,
	mc_26_3_cherry_shelf_side_chain_V_RIGHT,
	mc_26_3_cherry_shelf_side_chain_V_CENTER,
	mc_26_3_cherry_shelf_side_chain_V_LEFT,
} mc_26_3_cherry_shelf_side_chain;

typedef struct {
	mc_26_3_cherry_shelf_facing facing;
	b8 powered;
	mc_26_3_cherry_shelf_side_chain side_chain;
	b8 waterlogged;
} mc_26_3_cherry_shelf_properties;

typedef enum {
	mc_26_3_cherry_sign_rotation_V_V_0,
	mc_26_3_cherry_sign_rotation_V_V_1,
	mc_26_3_cherry_sign_rotation_V_V_2,
	mc_26_3_cherry_sign_rotation_V_V_3,
	mc_26_3_cherry_sign_rotation_V_V_4,
	mc_26_3_cherry_sign_rotation_V_V_5,
	mc_26_3_cherry_sign_rotation_V_V_6,
	mc_26_3_cherry_sign_rotation_V_V_7,
	mc_26_3_cherry_sign_rotation_V_V_8,
	mc_26_3_cherry_sign_rotation_V_V_9,
	mc_26_3_cherry_sign_rotation_V_V_10,
	mc_26_3_cherry_sign_rotation_V_V_11,
	mc_26_3_cherry_sign_rotation_V_V_12,
	mc_26_3_cherry_sign_rotation_V_V_13,
	mc_26_3_cherry_sign_rotation_V_V_14,
	mc_26_3_cherry_sign_rotation_V_V_15,
} mc_26_3_cherry_sign_rotation;

typedef struct {
	mc_26_3_cherry_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_cherry_sign_properties;

typedef enum {
	mc_26_3_cherry_slab_type_V_TOP,
	mc_26_3_cherry_slab_type_V_BOTTOM,
	mc_26_3_cherry_slab_type_V_DOUBLE,
} mc_26_3_cherry_slab_type;

typedef struct {
	mc_26_3_cherry_slab_type type;
	b8 waterlogged;
} mc_26_3_cherry_slab_properties;

typedef enum {
	mc_26_3_cherry_stairs_facing_V_NORTH,
	mc_26_3_cherry_stairs_facing_V_SOUTH,
	mc_26_3_cherry_stairs_facing_V_WEST,
	mc_26_3_cherry_stairs_facing_V_EAST,
} mc_26_3_cherry_stairs_facing;

typedef enum {
	mc_26_3_cherry_stairs_half_V_TOP,
	mc_26_3_cherry_stairs_half_V_BOTTOM,
} mc_26_3_cherry_stairs_half;

typedef enum {
	mc_26_3_cherry_stairs_shape_V_STRAIGHT,
	mc_26_3_cherry_stairs_shape_V_INNER_LEFT,
	mc_26_3_cherry_stairs_shape_V_INNER_RIGHT,
	mc_26_3_cherry_stairs_shape_V_OUTER_LEFT,
	mc_26_3_cherry_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_cherry_stairs_shape;

typedef struct {
	mc_26_3_cherry_stairs_facing facing;
	mc_26_3_cherry_stairs_half half;
	mc_26_3_cherry_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_cherry_stairs_properties;

typedef enum {
	mc_26_3_cherry_trapdoor_facing_V_NORTH,
	mc_26_3_cherry_trapdoor_facing_V_SOUTH,
	mc_26_3_cherry_trapdoor_facing_V_WEST,
	mc_26_3_cherry_trapdoor_facing_V_EAST,
} mc_26_3_cherry_trapdoor_facing;

typedef enum {
	mc_26_3_cherry_trapdoor_half_V_TOP,
	mc_26_3_cherry_trapdoor_half_V_BOTTOM,
} mc_26_3_cherry_trapdoor_half;

typedef struct {
	mc_26_3_cherry_trapdoor_facing facing;
	mc_26_3_cherry_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_cherry_trapdoor_properties;

typedef enum {
	mc_26_3_cherry_wall_hanging_sign_facing_V_NORTH,
	mc_26_3_cherry_wall_hanging_sign_facing_V_SOUTH,
	mc_26_3_cherry_wall_hanging_sign_facing_V_WEST,
	mc_26_3_cherry_wall_hanging_sign_facing_V_EAST,
} mc_26_3_cherry_wall_hanging_sign_facing;

typedef struct {
	mc_26_3_cherry_wall_hanging_sign_facing facing;
	b8 waterlogged;
} mc_26_3_cherry_wall_hanging_sign_properties;

typedef enum {
	mc_26_3_cherry_wall_sign_facing_V_NORTH,
	mc_26_3_cherry_wall_sign_facing_V_SOUTH,
	mc_26_3_cherry_wall_sign_facing_V_WEST,
	mc_26_3_cherry_wall_sign_facing_V_EAST,
} mc_26_3_cherry_wall_sign_facing;

typedef struct {
	mc_26_3_cherry_wall_sign_facing facing;
	b8 waterlogged;
} mc_26_3_cherry_wall_sign_properties;

typedef enum {
	mc_26_3_cherry_wood_axis_V_X,
	mc_26_3_cherry_wood_axis_V_Y,
	mc_26_3_cherry_wood_axis_V_Z,
} mc_26_3_cherry_wood_axis;

typedef struct {
	mc_26_3_cherry_wood_axis axis;
} mc_26_3_cherry_wood_properties;

typedef enum {
	mc_26_3_chest_type_V_SINGLE,
	mc_26_3_chest_type_V_LEFT,
	mc_26_3_chest_type_V_RIGHT,
} mc_26_3_chest_type;

typedef enum {
	mc_26_3_chest_facing_V_NORTH,
	mc_26_3_chest_facing_V_SOUTH,
	mc_26_3_chest_facing_V_WEST,
	mc_26_3_chest_facing_V_EAST,
} mc_26_3_chest_facing;

typedef struct {
	mc_26_3_chest_type type;
	mc_26_3_chest_facing facing;
	b8 waterlogged;
} mc_26_3_chest_properties;

typedef enum {
	mc_26_3_chipped_anvil_facing_V_NORTH,
	mc_26_3_chipped_anvil_facing_V_SOUTH,
	mc_26_3_chipped_anvil_facing_V_WEST,
	mc_26_3_chipped_anvil_facing_V_EAST,
} mc_26_3_chipped_anvil_facing;

typedef struct {
	mc_26_3_chipped_anvil_facing facing;
} mc_26_3_chipped_anvil_properties;

typedef enum {
	mc_26_3_chiseled_bookshelf_facing_V_NORTH,
	mc_26_3_chiseled_bookshelf_facing_V_SOUTH,
	mc_26_3_chiseled_bookshelf_facing_V_WEST,
	mc_26_3_chiseled_bookshelf_facing_V_EAST,
} mc_26_3_chiseled_bookshelf_facing;

typedef struct {
	mc_26_3_chiseled_bookshelf_facing facing;
	b8 slot_0_occupied;
	b8 slot_1_occupied;
	b8 slot_2_occupied;
	b8 slot_3_occupied;
	b8 slot_4_occupied;
	b8 slot_5_occupied;
} mc_26_3_chiseled_bookshelf_properties;

typedef enum {
	mc_26_3_chorus_flower_age_V_V_0,
	mc_26_3_chorus_flower_age_V_V_1,
	mc_26_3_chorus_flower_age_V_V_2,
	mc_26_3_chorus_flower_age_V_V_3,
	mc_26_3_chorus_flower_age_V_V_4,
	mc_26_3_chorus_flower_age_V_V_5,
} mc_26_3_chorus_flower_age;

typedef struct {
	mc_26_3_chorus_flower_age age;
} mc_26_3_chorus_flower_properties;

typedef struct {
	b8 down;
	b8 east;
	b8 north;
	b8 south;
	b8 up;
	b8 west;
} mc_26_3_chorus_plant_properties;

typedef enum {
	mc_26_3_cinnabar_brick_slab_type_V_TOP,
	mc_26_3_cinnabar_brick_slab_type_V_BOTTOM,
	mc_26_3_cinnabar_brick_slab_type_V_DOUBLE,
} mc_26_3_cinnabar_brick_slab_type;

typedef struct {
	mc_26_3_cinnabar_brick_slab_type type;
	b8 waterlogged;
} mc_26_3_cinnabar_brick_slab_properties;

typedef enum {
	mc_26_3_cinnabar_brick_stairs_facing_V_NORTH,
	mc_26_3_cinnabar_brick_stairs_facing_V_SOUTH,
	mc_26_3_cinnabar_brick_stairs_facing_V_WEST,
	mc_26_3_cinnabar_brick_stairs_facing_V_EAST,
} mc_26_3_cinnabar_brick_stairs_facing;

typedef enum {
	mc_26_3_cinnabar_brick_stairs_half_V_TOP,
	mc_26_3_cinnabar_brick_stairs_half_V_BOTTOM,
} mc_26_3_cinnabar_brick_stairs_half;

typedef enum {
	mc_26_3_cinnabar_brick_stairs_shape_V_STRAIGHT,
	mc_26_3_cinnabar_brick_stairs_shape_V_INNER_LEFT,
	mc_26_3_cinnabar_brick_stairs_shape_V_INNER_RIGHT,
	mc_26_3_cinnabar_brick_stairs_shape_V_OUTER_LEFT,
	mc_26_3_cinnabar_brick_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_cinnabar_brick_stairs_shape;

typedef struct {
	mc_26_3_cinnabar_brick_stairs_facing facing;
	mc_26_3_cinnabar_brick_stairs_half half;
	mc_26_3_cinnabar_brick_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_cinnabar_brick_stairs_properties;

typedef enum {
	mc_26_3_cinnabar_brick_wall_east_V_NONE,
	mc_26_3_cinnabar_brick_wall_east_V_LOW,
	mc_26_3_cinnabar_brick_wall_east_V_TALL,
} mc_26_3_cinnabar_brick_wall_east;

typedef enum {
	mc_26_3_cinnabar_brick_wall_north_V_NONE,
	mc_26_3_cinnabar_brick_wall_north_V_LOW,
	mc_26_3_cinnabar_brick_wall_north_V_TALL,
} mc_26_3_cinnabar_brick_wall_north;

typedef enum {
	mc_26_3_cinnabar_brick_wall_south_V_NONE,
	mc_26_3_cinnabar_brick_wall_south_V_LOW,
	mc_26_3_cinnabar_brick_wall_south_V_TALL,
} mc_26_3_cinnabar_brick_wall_south;

typedef enum {
	mc_26_3_cinnabar_brick_wall_west_V_NONE,
	mc_26_3_cinnabar_brick_wall_west_V_LOW,
	mc_26_3_cinnabar_brick_wall_west_V_TALL,
} mc_26_3_cinnabar_brick_wall_west;

typedef struct {
	mc_26_3_cinnabar_brick_wall_east east;
	mc_26_3_cinnabar_brick_wall_north north;
	mc_26_3_cinnabar_brick_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_cinnabar_brick_wall_west west;
} mc_26_3_cinnabar_brick_wall_properties;

typedef enum {
	mc_26_3_cinnabar_slab_type_V_TOP,
	mc_26_3_cinnabar_slab_type_V_BOTTOM,
	mc_26_3_cinnabar_slab_type_V_DOUBLE,
} mc_26_3_cinnabar_slab_type;

typedef struct {
	mc_26_3_cinnabar_slab_type type;
	b8 waterlogged;
} mc_26_3_cinnabar_slab_properties;

typedef enum {
	mc_26_3_cinnabar_stairs_facing_V_NORTH,
	mc_26_3_cinnabar_stairs_facing_V_SOUTH,
	mc_26_3_cinnabar_stairs_facing_V_WEST,
	mc_26_3_cinnabar_stairs_facing_V_EAST,
} mc_26_3_cinnabar_stairs_facing;

typedef enum {
	mc_26_3_cinnabar_stairs_half_V_TOP,
	mc_26_3_cinnabar_stairs_half_V_BOTTOM,
} mc_26_3_cinnabar_stairs_half;

typedef enum {
	mc_26_3_cinnabar_stairs_shape_V_STRAIGHT,
	mc_26_3_cinnabar_stairs_shape_V_INNER_LEFT,
	mc_26_3_cinnabar_stairs_shape_V_INNER_RIGHT,
	mc_26_3_cinnabar_stairs_shape_V_OUTER_LEFT,
	mc_26_3_cinnabar_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_cinnabar_stairs_shape;

typedef struct {
	mc_26_3_cinnabar_stairs_facing facing;
	mc_26_3_cinnabar_stairs_half half;
	mc_26_3_cinnabar_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_cinnabar_stairs_properties;

typedef enum {
	mc_26_3_cinnabar_wall_east_V_NONE,
	mc_26_3_cinnabar_wall_east_V_LOW,
	mc_26_3_cinnabar_wall_east_V_TALL,
} mc_26_3_cinnabar_wall_east;

typedef enum {
	mc_26_3_cinnabar_wall_north_V_NONE,
	mc_26_3_cinnabar_wall_north_V_LOW,
	mc_26_3_cinnabar_wall_north_V_TALL,
} mc_26_3_cinnabar_wall_north;

typedef enum {
	mc_26_3_cinnabar_wall_south_V_NONE,
	mc_26_3_cinnabar_wall_south_V_LOW,
	mc_26_3_cinnabar_wall_south_V_TALL,
} mc_26_3_cinnabar_wall_south;

typedef enum {
	mc_26_3_cinnabar_wall_west_V_NONE,
	mc_26_3_cinnabar_wall_west_V_LOW,
	mc_26_3_cinnabar_wall_west_V_TALL,
} mc_26_3_cinnabar_wall_west;

typedef struct {
	mc_26_3_cinnabar_wall_east east;
	mc_26_3_cinnabar_wall_north north;
	mc_26_3_cinnabar_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_cinnabar_wall_west west;
} mc_26_3_cinnabar_wall_properties;

typedef enum {
	mc_26_3_cobbled_deepslate_slab_type_V_TOP,
	mc_26_3_cobbled_deepslate_slab_type_V_BOTTOM,
	mc_26_3_cobbled_deepslate_slab_type_V_DOUBLE,
} mc_26_3_cobbled_deepslate_slab_type;

typedef struct {
	mc_26_3_cobbled_deepslate_slab_type type;
	b8 waterlogged;
} mc_26_3_cobbled_deepslate_slab_properties;

typedef enum {
	mc_26_3_cobbled_deepslate_stairs_facing_V_NORTH,
	mc_26_3_cobbled_deepslate_stairs_facing_V_SOUTH,
	mc_26_3_cobbled_deepslate_stairs_facing_V_WEST,
	mc_26_3_cobbled_deepslate_stairs_facing_V_EAST,
} mc_26_3_cobbled_deepslate_stairs_facing;

typedef enum {
	mc_26_3_cobbled_deepslate_stairs_half_V_TOP,
	mc_26_3_cobbled_deepslate_stairs_half_V_BOTTOM,
} mc_26_3_cobbled_deepslate_stairs_half;

typedef enum {
	mc_26_3_cobbled_deepslate_stairs_shape_V_STRAIGHT,
	mc_26_3_cobbled_deepslate_stairs_shape_V_INNER_LEFT,
	mc_26_3_cobbled_deepslate_stairs_shape_V_INNER_RIGHT,
	mc_26_3_cobbled_deepslate_stairs_shape_V_OUTER_LEFT,
	mc_26_3_cobbled_deepslate_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_cobbled_deepslate_stairs_shape;

typedef struct {
	mc_26_3_cobbled_deepslate_stairs_facing facing;
	mc_26_3_cobbled_deepslate_stairs_half half;
	mc_26_3_cobbled_deepslate_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_cobbled_deepslate_stairs_properties;

typedef enum {
	mc_26_3_cobbled_deepslate_wall_east_V_NONE,
	mc_26_3_cobbled_deepslate_wall_east_V_LOW,
	mc_26_3_cobbled_deepslate_wall_east_V_TALL,
} mc_26_3_cobbled_deepslate_wall_east;

typedef enum {
	mc_26_3_cobbled_deepslate_wall_north_V_NONE,
	mc_26_3_cobbled_deepslate_wall_north_V_LOW,
	mc_26_3_cobbled_deepslate_wall_north_V_TALL,
} mc_26_3_cobbled_deepslate_wall_north;

typedef enum {
	mc_26_3_cobbled_deepslate_wall_south_V_NONE,
	mc_26_3_cobbled_deepslate_wall_south_V_LOW,
	mc_26_3_cobbled_deepslate_wall_south_V_TALL,
} mc_26_3_cobbled_deepslate_wall_south;

typedef enum {
	mc_26_3_cobbled_deepslate_wall_west_V_NONE,
	mc_26_3_cobbled_deepslate_wall_west_V_LOW,
	mc_26_3_cobbled_deepslate_wall_west_V_TALL,
} mc_26_3_cobbled_deepslate_wall_west;

typedef struct {
	mc_26_3_cobbled_deepslate_wall_east east;
	mc_26_3_cobbled_deepslate_wall_north north;
	mc_26_3_cobbled_deepslate_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_cobbled_deepslate_wall_west west;
} mc_26_3_cobbled_deepslate_wall_properties;

typedef enum {
	mc_26_3_cobblestone_slab_type_V_TOP,
	mc_26_3_cobblestone_slab_type_V_BOTTOM,
	mc_26_3_cobblestone_slab_type_V_DOUBLE,
} mc_26_3_cobblestone_slab_type;

typedef struct {
	mc_26_3_cobblestone_slab_type type;
	b8 waterlogged;
} mc_26_3_cobblestone_slab_properties;

typedef enum {
	mc_26_3_cobblestone_stairs_facing_V_NORTH,
	mc_26_3_cobblestone_stairs_facing_V_SOUTH,
	mc_26_3_cobblestone_stairs_facing_V_WEST,
	mc_26_3_cobblestone_stairs_facing_V_EAST,
} mc_26_3_cobblestone_stairs_facing;

typedef enum {
	mc_26_3_cobblestone_stairs_half_V_TOP,
	mc_26_3_cobblestone_stairs_half_V_BOTTOM,
} mc_26_3_cobblestone_stairs_half;

typedef enum {
	mc_26_3_cobblestone_stairs_shape_V_STRAIGHT,
	mc_26_3_cobblestone_stairs_shape_V_INNER_LEFT,
	mc_26_3_cobblestone_stairs_shape_V_INNER_RIGHT,
	mc_26_3_cobblestone_stairs_shape_V_OUTER_LEFT,
	mc_26_3_cobblestone_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_cobblestone_stairs_shape;

typedef struct {
	mc_26_3_cobblestone_stairs_facing facing;
	mc_26_3_cobblestone_stairs_half half;
	mc_26_3_cobblestone_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_cobblestone_stairs_properties;

typedef enum {
	mc_26_3_cobblestone_wall_east_V_NONE,
	mc_26_3_cobblestone_wall_east_V_LOW,
	mc_26_3_cobblestone_wall_east_V_TALL,
} mc_26_3_cobblestone_wall_east;

typedef enum {
	mc_26_3_cobblestone_wall_north_V_NONE,
	mc_26_3_cobblestone_wall_north_V_LOW,
	mc_26_3_cobblestone_wall_north_V_TALL,
} mc_26_3_cobblestone_wall_north;

typedef enum {
	mc_26_3_cobblestone_wall_south_V_NONE,
	mc_26_3_cobblestone_wall_south_V_LOW,
	mc_26_3_cobblestone_wall_south_V_TALL,
} mc_26_3_cobblestone_wall_south;

typedef enum {
	mc_26_3_cobblestone_wall_west_V_NONE,
	mc_26_3_cobblestone_wall_west_V_LOW,
	mc_26_3_cobblestone_wall_west_V_TALL,
} mc_26_3_cobblestone_wall_west;

typedef struct {
	mc_26_3_cobblestone_wall_east east;
	mc_26_3_cobblestone_wall_north north;
	mc_26_3_cobblestone_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_cobblestone_wall_west west;
} mc_26_3_cobblestone_wall_properties;

typedef enum {
	mc_26_3_cocoa_age_V_V_0,
	mc_26_3_cocoa_age_V_V_1,
	mc_26_3_cocoa_age_V_V_2,
} mc_26_3_cocoa_age;

typedef enum {
	mc_26_3_cocoa_facing_V_NORTH,
	mc_26_3_cocoa_facing_V_SOUTH,
	mc_26_3_cocoa_facing_V_WEST,
	mc_26_3_cocoa_facing_V_EAST,
} mc_26_3_cocoa_facing;

typedef struct {
	mc_26_3_cocoa_age age;
	mc_26_3_cocoa_facing facing;
} mc_26_3_cocoa_properties;

typedef enum {
	mc_26_3_command_block_facing_V_NORTH,
	mc_26_3_command_block_facing_V_EAST,
	mc_26_3_command_block_facing_V_SOUTH,
	mc_26_3_command_block_facing_V_WEST,
	mc_26_3_command_block_facing_V_UP,
	mc_26_3_command_block_facing_V_DOWN,
} mc_26_3_command_block_facing;

typedef struct {
	b8 conditional;
	mc_26_3_command_block_facing facing;
} mc_26_3_command_block_properties;

typedef enum {
	mc_26_3_comparator_facing_V_NORTH,
	mc_26_3_comparator_facing_V_SOUTH,
	mc_26_3_comparator_facing_V_WEST,
	mc_26_3_comparator_facing_V_EAST,
} mc_26_3_comparator_facing;

typedef enum {
	mc_26_3_comparator_mode_V_COMPARE,
	mc_26_3_comparator_mode_V_SUBTRACT,
} mc_26_3_comparator_mode;

typedef struct {
	mc_26_3_comparator_facing facing;
	mc_26_3_comparator_mode mode;
	b8 powered;
} mc_26_3_comparator_properties;

typedef enum {
	mc_26_3_composter_level_V_V_0,
	mc_26_3_composter_level_V_V_1,
	mc_26_3_composter_level_V_V_2,
	mc_26_3_composter_level_V_V_3,
	mc_26_3_composter_level_V_V_4,
	mc_26_3_composter_level_V_V_5,
	mc_26_3_composter_level_V_V_6,
	mc_26_3_composter_level_V_V_7,
	mc_26_3_composter_level_V_V_8,
} mc_26_3_composter_level;

typedef struct {
	mc_26_3_composter_level level;
} mc_26_3_composter_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_conduit_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_copper_bars_properties;

typedef struct {
	b8 lit;
	b8 powered;
} mc_26_3_copper_bulb_properties;

typedef enum {
	mc_26_3_copper_chain_axis_V_X,
	mc_26_3_copper_chain_axis_V_Y,
	mc_26_3_copper_chain_axis_V_Z,
} mc_26_3_copper_chain_axis;

typedef struct {
	mc_26_3_copper_chain_axis axis;
	b8 waterlogged;
} mc_26_3_copper_chain_properties;

typedef enum {
	mc_26_3_copper_chest_type_V_SINGLE,
	mc_26_3_copper_chest_type_V_LEFT,
	mc_26_3_copper_chest_type_V_RIGHT,
} mc_26_3_copper_chest_type;

typedef enum {
	mc_26_3_copper_chest_facing_V_NORTH,
	mc_26_3_copper_chest_facing_V_SOUTH,
	mc_26_3_copper_chest_facing_V_WEST,
	mc_26_3_copper_chest_facing_V_EAST,
} mc_26_3_copper_chest_facing;

typedef struct {
	mc_26_3_copper_chest_type type;
	mc_26_3_copper_chest_facing facing;
	b8 waterlogged;
} mc_26_3_copper_chest_properties;

typedef enum {
	mc_26_3_copper_door_facing_V_NORTH,
	mc_26_3_copper_door_facing_V_SOUTH,
	mc_26_3_copper_door_facing_V_WEST,
	mc_26_3_copper_door_facing_V_EAST,
} mc_26_3_copper_door_facing;

typedef enum {
	mc_26_3_copper_door_half_V_UPPER,
	mc_26_3_copper_door_half_V_LOWER,
} mc_26_3_copper_door_half;

typedef enum {
	mc_26_3_copper_door_hinge_V_LEFT,
	mc_26_3_copper_door_hinge_V_RIGHT,
} mc_26_3_copper_door_hinge;

typedef struct {
	mc_26_3_copper_door_facing facing;
	mc_26_3_copper_door_half half;
	mc_26_3_copper_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_copper_door_properties;

typedef enum {
	mc_26_3_copper_golem_statue_copper_golem_pose_V_STANDING,
	mc_26_3_copper_golem_statue_copper_golem_pose_V_SITTING,
	mc_26_3_copper_golem_statue_copper_golem_pose_V_RUNNING,
	mc_26_3_copper_golem_statue_copper_golem_pose_V_STAR,
} mc_26_3_copper_golem_statue_copper_golem_pose;

typedef enum {
	mc_26_3_copper_golem_statue_facing_V_NORTH,
	mc_26_3_copper_golem_statue_facing_V_SOUTH,
	mc_26_3_copper_golem_statue_facing_V_WEST,
	mc_26_3_copper_golem_statue_facing_V_EAST,
} mc_26_3_copper_golem_statue_facing;

typedef struct {
	mc_26_3_copper_golem_statue_copper_golem_pose copper_golem_pose;
	mc_26_3_copper_golem_statue_facing facing;
	b8 waterlogged;
} mc_26_3_copper_golem_statue_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_copper_grate_properties;

typedef struct {
	b8 hanging;
	b8 waterlogged;
} mc_26_3_copper_lantern_properties;

typedef enum {
	mc_26_3_copper_trapdoor_facing_V_NORTH,
	mc_26_3_copper_trapdoor_facing_V_SOUTH,
	mc_26_3_copper_trapdoor_facing_V_WEST,
	mc_26_3_copper_trapdoor_facing_V_EAST,
} mc_26_3_copper_trapdoor_facing;

typedef enum {
	mc_26_3_copper_trapdoor_half_V_TOP,
	mc_26_3_copper_trapdoor_half_V_BOTTOM,
} mc_26_3_copper_trapdoor_half;

typedef struct {
	mc_26_3_copper_trapdoor_facing facing;
	mc_26_3_copper_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_copper_trapdoor_properties;

typedef enum {
	mc_26_3_copper_wall_torch_facing_V_NORTH,
	mc_26_3_copper_wall_torch_facing_V_SOUTH,
	mc_26_3_copper_wall_torch_facing_V_WEST,
	mc_26_3_copper_wall_torch_facing_V_EAST,
} mc_26_3_copper_wall_torch_facing;

typedef struct {
	mc_26_3_copper_wall_torch_facing facing;
} mc_26_3_copper_wall_torch_properties;

typedef enum {
	mc_26_3_crafter_orientation_V_DOWN_EAST,
	mc_26_3_crafter_orientation_V_DOWN_NORTH,
	mc_26_3_crafter_orientation_V_DOWN_SOUTH,
	mc_26_3_crafter_orientation_V_DOWN_WEST,
	mc_26_3_crafter_orientation_V_UP_EAST,
	mc_26_3_crafter_orientation_V_UP_NORTH,
	mc_26_3_crafter_orientation_V_UP_SOUTH,
	mc_26_3_crafter_orientation_V_UP_WEST,
	mc_26_3_crafter_orientation_V_WEST_UP,
	mc_26_3_crafter_orientation_V_EAST_UP,
	mc_26_3_crafter_orientation_V_NORTH_UP,
	mc_26_3_crafter_orientation_V_SOUTH_UP,
} mc_26_3_crafter_orientation;

typedef struct {
	b8 crafting;
	mc_26_3_crafter_orientation orientation;
	b8 triggered;
} mc_26_3_crafter_properties;

typedef enum {
	mc_26_3_creaking_heart_axis_V_X,
	mc_26_3_creaking_heart_axis_V_Y,
	mc_26_3_creaking_heart_axis_V_Z,
} mc_26_3_creaking_heart_axis;

typedef enum {
	mc_26_3_creaking_heart_creaking_heart_state_V_UPROOTED,
	mc_26_3_creaking_heart_creaking_heart_state_V_DORMANT,
	mc_26_3_creaking_heart_creaking_heart_state_V_AWAKE,
} mc_26_3_creaking_heart_creaking_heart_state;

typedef struct {
	mc_26_3_creaking_heart_axis axis;
	mc_26_3_creaking_heart_creaking_heart_state creaking_heart_state;
	b8 natural;
} mc_26_3_creaking_heart_properties;

typedef enum {
	mc_26_3_creeper_head_rotation_V_V_0,
	mc_26_3_creeper_head_rotation_V_V_1,
	mc_26_3_creeper_head_rotation_V_V_2,
	mc_26_3_creeper_head_rotation_V_V_3,
	mc_26_3_creeper_head_rotation_V_V_4,
	mc_26_3_creeper_head_rotation_V_V_5,
	mc_26_3_creeper_head_rotation_V_V_6,
	mc_26_3_creeper_head_rotation_V_V_7,
	mc_26_3_creeper_head_rotation_V_V_8,
	mc_26_3_creeper_head_rotation_V_V_9,
	mc_26_3_creeper_head_rotation_V_V_10,
	mc_26_3_creeper_head_rotation_V_V_11,
	mc_26_3_creeper_head_rotation_V_V_12,
	mc_26_3_creeper_head_rotation_V_V_13,
	mc_26_3_creeper_head_rotation_V_V_14,
	mc_26_3_creeper_head_rotation_V_V_15,
} mc_26_3_creeper_head_rotation;

typedef struct {
	b8 powered;
	mc_26_3_creeper_head_rotation rotation;
} mc_26_3_creeper_head_properties;

typedef enum {
	mc_26_3_creeper_wall_head_facing_V_NORTH,
	mc_26_3_creeper_wall_head_facing_V_SOUTH,
	mc_26_3_creeper_wall_head_facing_V_WEST,
	mc_26_3_creeper_wall_head_facing_V_EAST,
} mc_26_3_creeper_wall_head_facing;

typedef struct {
	mc_26_3_creeper_wall_head_facing facing;
	b8 powered;
} mc_26_3_creeper_wall_head_properties;

typedef enum {
	mc_26_3_crimson_button_face_V_FLOOR,
	mc_26_3_crimson_button_face_V_WALL,
	mc_26_3_crimson_button_face_V_CEILING,
} mc_26_3_crimson_button_face;

typedef enum {
	mc_26_3_crimson_button_facing_V_NORTH,
	mc_26_3_crimson_button_facing_V_SOUTH,
	mc_26_3_crimson_button_facing_V_WEST,
	mc_26_3_crimson_button_facing_V_EAST,
} mc_26_3_crimson_button_facing;

typedef struct {
	mc_26_3_crimson_button_face face;
	mc_26_3_crimson_button_facing facing;
	b8 powered;
} mc_26_3_crimson_button_properties;

typedef enum {
	mc_26_3_crimson_door_facing_V_NORTH,
	mc_26_3_crimson_door_facing_V_SOUTH,
	mc_26_3_crimson_door_facing_V_WEST,
	mc_26_3_crimson_door_facing_V_EAST,
} mc_26_3_crimson_door_facing;

typedef enum {
	mc_26_3_crimson_door_half_V_UPPER,
	mc_26_3_crimson_door_half_V_LOWER,
} mc_26_3_crimson_door_half;

typedef enum {
	mc_26_3_crimson_door_hinge_V_LEFT,
	mc_26_3_crimson_door_hinge_V_RIGHT,
} mc_26_3_crimson_door_hinge;

typedef struct {
	mc_26_3_crimson_door_facing facing;
	mc_26_3_crimson_door_half half;
	mc_26_3_crimson_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_crimson_door_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_crimson_fence_properties;

typedef enum {
	mc_26_3_crimson_fence_gate_facing_V_NORTH,
	mc_26_3_crimson_fence_gate_facing_V_SOUTH,
	mc_26_3_crimson_fence_gate_facing_V_WEST,
	mc_26_3_crimson_fence_gate_facing_V_EAST,
} mc_26_3_crimson_fence_gate_facing;

typedef struct {
	mc_26_3_crimson_fence_gate_facing facing;
	b8 in_wall;
	b8 open;
	b8 powered;
} mc_26_3_crimson_fence_gate_properties;

typedef enum {
	mc_26_3_crimson_hanging_sign_rotation_V_V_0,
	mc_26_3_crimson_hanging_sign_rotation_V_V_1,
	mc_26_3_crimson_hanging_sign_rotation_V_V_2,
	mc_26_3_crimson_hanging_sign_rotation_V_V_3,
	mc_26_3_crimson_hanging_sign_rotation_V_V_4,
	mc_26_3_crimson_hanging_sign_rotation_V_V_5,
	mc_26_3_crimson_hanging_sign_rotation_V_V_6,
	mc_26_3_crimson_hanging_sign_rotation_V_V_7,
	mc_26_3_crimson_hanging_sign_rotation_V_V_8,
	mc_26_3_crimson_hanging_sign_rotation_V_V_9,
	mc_26_3_crimson_hanging_sign_rotation_V_V_10,
	mc_26_3_crimson_hanging_sign_rotation_V_V_11,
	mc_26_3_crimson_hanging_sign_rotation_V_V_12,
	mc_26_3_crimson_hanging_sign_rotation_V_V_13,
	mc_26_3_crimson_hanging_sign_rotation_V_V_14,
	mc_26_3_crimson_hanging_sign_rotation_V_V_15,
} mc_26_3_crimson_hanging_sign_rotation;

typedef struct {
	b8 attached;
	mc_26_3_crimson_hanging_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_crimson_hanging_sign_properties;

typedef enum {
	mc_26_3_crimson_hyphae_axis_V_X,
	mc_26_3_crimson_hyphae_axis_V_Y,
	mc_26_3_crimson_hyphae_axis_V_Z,
} mc_26_3_crimson_hyphae_axis;

typedef struct {
	mc_26_3_crimson_hyphae_axis axis;
} mc_26_3_crimson_hyphae_properties;

typedef struct {
	b8 powered;
} mc_26_3_crimson_pressure_plate_properties;

typedef enum {
	mc_26_3_crimson_shelf_facing_V_NORTH,
	mc_26_3_crimson_shelf_facing_V_SOUTH,
	mc_26_3_crimson_shelf_facing_V_WEST,
	mc_26_3_crimson_shelf_facing_V_EAST,
} mc_26_3_crimson_shelf_facing;

typedef enum {
	mc_26_3_crimson_shelf_side_chain_V_UNCONNECTED,
	mc_26_3_crimson_shelf_side_chain_V_RIGHT,
	mc_26_3_crimson_shelf_side_chain_V_CENTER,
	mc_26_3_crimson_shelf_side_chain_V_LEFT,
} mc_26_3_crimson_shelf_side_chain;

typedef struct {
	mc_26_3_crimson_shelf_facing facing;
	b8 powered;
	mc_26_3_crimson_shelf_side_chain side_chain;
	b8 waterlogged;
} mc_26_3_crimson_shelf_properties;

typedef enum {
	mc_26_3_crimson_sign_rotation_V_V_0,
	mc_26_3_crimson_sign_rotation_V_V_1,
	mc_26_3_crimson_sign_rotation_V_V_2,
	mc_26_3_crimson_sign_rotation_V_V_3,
	mc_26_3_crimson_sign_rotation_V_V_4,
	mc_26_3_crimson_sign_rotation_V_V_5,
	mc_26_3_crimson_sign_rotation_V_V_6,
	mc_26_3_crimson_sign_rotation_V_V_7,
	mc_26_3_crimson_sign_rotation_V_V_8,
	mc_26_3_crimson_sign_rotation_V_V_9,
	mc_26_3_crimson_sign_rotation_V_V_10,
	mc_26_3_crimson_sign_rotation_V_V_11,
	mc_26_3_crimson_sign_rotation_V_V_12,
	mc_26_3_crimson_sign_rotation_V_V_13,
	mc_26_3_crimson_sign_rotation_V_V_14,
	mc_26_3_crimson_sign_rotation_V_V_15,
} mc_26_3_crimson_sign_rotation;

typedef struct {
	mc_26_3_crimson_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_crimson_sign_properties;

typedef enum {
	mc_26_3_crimson_slab_type_V_TOP,
	mc_26_3_crimson_slab_type_V_BOTTOM,
	mc_26_3_crimson_slab_type_V_DOUBLE,
} mc_26_3_crimson_slab_type;

typedef struct {
	mc_26_3_crimson_slab_type type;
	b8 waterlogged;
} mc_26_3_crimson_slab_properties;

typedef enum {
	mc_26_3_crimson_stairs_facing_V_NORTH,
	mc_26_3_crimson_stairs_facing_V_SOUTH,
	mc_26_3_crimson_stairs_facing_V_WEST,
	mc_26_3_crimson_stairs_facing_V_EAST,
} mc_26_3_crimson_stairs_facing;

typedef enum {
	mc_26_3_crimson_stairs_half_V_TOP,
	mc_26_3_crimson_stairs_half_V_BOTTOM,
} mc_26_3_crimson_stairs_half;

typedef enum {
	mc_26_3_crimson_stairs_shape_V_STRAIGHT,
	mc_26_3_crimson_stairs_shape_V_INNER_LEFT,
	mc_26_3_crimson_stairs_shape_V_INNER_RIGHT,
	mc_26_3_crimson_stairs_shape_V_OUTER_LEFT,
	mc_26_3_crimson_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_crimson_stairs_shape;

typedef struct {
	mc_26_3_crimson_stairs_facing facing;
	mc_26_3_crimson_stairs_half half;
	mc_26_3_crimson_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_crimson_stairs_properties;

typedef enum {
	mc_26_3_crimson_stem_axis_V_X,
	mc_26_3_crimson_stem_axis_V_Y,
	mc_26_3_crimson_stem_axis_V_Z,
} mc_26_3_crimson_stem_axis;

typedef struct {
	mc_26_3_crimson_stem_axis axis;
} mc_26_3_crimson_stem_properties;

typedef enum {
	mc_26_3_crimson_trapdoor_facing_V_NORTH,
	mc_26_3_crimson_trapdoor_facing_V_SOUTH,
	mc_26_3_crimson_trapdoor_facing_V_WEST,
	mc_26_3_crimson_trapdoor_facing_V_EAST,
} mc_26_3_crimson_trapdoor_facing;

typedef enum {
	mc_26_3_crimson_trapdoor_half_V_TOP,
	mc_26_3_crimson_trapdoor_half_V_BOTTOM,
} mc_26_3_crimson_trapdoor_half;

typedef struct {
	mc_26_3_crimson_trapdoor_facing facing;
	mc_26_3_crimson_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_crimson_trapdoor_properties;

typedef enum {
	mc_26_3_crimson_wall_hanging_sign_facing_V_NORTH,
	mc_26_3_crimson_wall_hanging_sign_facing_V_SOUTH,
	mc_26_3_crimson_wall_hanging_sign_facing_V_WEST,
	mc_26_3_crimson_wall_hanging_sign_facing_V_EAST,
} mc_26_3_crimson_wall_hanging_sign_facing;

typedef struct {
	mc_26_3_crimson_wall_hanging_sign_facing facing;
	b8 waterlogged;
} mc_26_3_crimson_wall_hanging_sign_properties;

typedef enum {
	mc_26_3_crimson_wall_sign_facing_V_NORTH,
	mc_26_3_crimson_wall_sign_facing_V_SOUTH,
	mc_26_3_crimson_wall_sign_facing_V_WEST,
	mc_26_3_crimson_wall_sign_facing_V_EAST,
} mc_26_3_crimson_wall_sign_facing;

typedef struct {
	mc_26_3_crimson_wall_sign_facing facing;
	b8 waterlogged;
} mc_26_3_crimson_wall_sign_properties;

typedef enum {
	mc_26_3_cut_copper_slab_type_V_TOP,
	mc_26_3_cut_copper_slab_type_V_BOTTOM,
	mc_26_3_cut_copper_slab_type_V_DOUBLE,
} mc_26_3_cut_copper_slab_type;

typedef struct {
	mc_26_3_cut_copper_slab_type type;
	b8 waterlogged;
} mc_26_3_cut_copper_slab_properties;

typedef enum {
	mc_26_3_cut_copper_stairs_facing_V_NORTH,
	mc_26_3_cut_copper_stairs_facing_V_SOUTH,
	mc_26_3_cut_copper_stairs_facing_V_WEST,
	mc_26_3_cut_copper_stairs_facing_V_EAST,
} mc_26_3_cut_copper_stairs_facing;

typedef enum {
	mc_26_3_cut_copper_stairs_half_V_TOP,
	mc_26_3_cut_copper_stairs_half_V_BOTTOM,
} mc_26_3_cut_copper_stairs_half;

typedef enum {
	mc_26_3_cut_copper_stairs_shape_V_STRAIGHT,
	mc_26_3_cut_copper_stairs_shape_V_INNER_LEFT,
	mc_26_3_cut_copper_stairs_shape_V_INNER_RIGHT,
	mc_26_3_cut_copper_stairs_shape_V_OUTER_LEFT,
	mc_26_3_cut_copper_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_cut_copper_stairs_shape;

typedef struct {
	mc_26_3_cut_copper_stairs_facing facing;
	mc_26_3_cut_copper_stairs_half half;
	mc_26_3_cut_copper_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_cut_copper_stairs_properties;

typedef enum {
	mc_26_3_cut_red_sandstone_slab_type_V_TOP,
	mc_26_3_cut_red_sandstone_slab_type_V_BOTTOM,
	mc_26_3_cut_red_sandstone_slab_type_V_DOUBLE,
} mc_26_3_cut_red_sandstone_slab_type;

typedef struct {
	mc_26_3_cut_red_sandstone_slab_type type;
	b8 waterlogged;
} mc_26_3_cut_red_sandstone_slab_properties;

typedef enum {
	mc_26_3_cut_sandstone_slab_type_V_TOP,
	mc_26_3_cut_sandstone_slab_type_V_BOTTOM,
	mc_26_3_cut_sandstone_slab_type_V_DOUBLE,
} mc_26_3_cut_sandstone_slab_type;

typedef struct {
	mc_26_3_cut_sandstone_slab_type type;
	b8 waterlogged;
} mc_26_3_cut_sandstone_slab_properties;

typedef enum {
	mc_26_3_cyan_banner_rotation_V_V_0,
	mc_26_3_cyan_banner_rotation_V_V_1,
	mc_26_3_cyan_banner_rotation_V_V_2,
	mc_26_3_cyan_banner_rotation_V_V_3,
	mc_26_3_cyan_banner_rotation_V_V_4,
	mc_26_3_cyan_banner_rotation_V_V_5,
	mc_26_3_cyan_banner_rotation_V_V_6,
	mc_26_3_cyan_banner_rotation_V_V_7,
	mc_26_3_cyan_banner_rotation_V_V_8,
	mc_26_3_cyan_banner_rotation_V_V_9,
	mc_26_3_cyan_banner_rotation_V_V_10,
	mc_26_3_cyan_banner_rotation_V_V_11,
	mc_26_3_cyan_banner_rotation_V_V_12,
	mc_26_3_cyan_banner_rotation_V_V_13,
	mc_26_3_cyan_banner_rotation_V_V_14,
	mc_26_3_cyan_banner_rotation_V_V_15,
} mc_26_3_cyan_banner_rotation;

typedef struct {
	mc_26_3_cyan_banner_rotation rotation;
} mc_26_3_cyan_banner_properties;

typedef enum {
	mc_26_3_cyan_bed_facing_V_NORTH,
	mc_26_3_cyan_bed_facing_V_SOUTH,
	mc_26_3_cyan_bed_facing_V_WEST,
	mc_26_3_cyan_bed_facing_V_EAST,
} mc_26_3_cyan_bed_facing;

typedef enum {
	mc_26_3_cyan_bed_part_V_HEAD,
	mc_26_3_cyan_bed_part_V_FOOT,
} mc_26_3_cyan_bed_part;

typedef struct {
	mc_26_3_cyan_bed_facing facing;
	b8 occupied;
	mc_26_3_cyan_bed_part part;
} mc_26_3_cyan_bed_properties;

typedef enum {
	mc_26_3_cyan_candle_candles_V_V_1,
	mc_26_3_cyan_candle_candles_V_V_2,
	mc_26_3_cyan_candle_candles_V_V_3,
	mc_26_3_cyan_candle_candles_V_V_4,
} mc_26_3_cyan_candle_candles;

typedef struct {
	mc_26_3_cyan_candle_candles candles;
	b8 lit;
	b8 waterlogged;
} mc_26_3_cyan_candle_properties;

typedef struct {
	b8 lit;
} mc_26_3_cyan_candle_cake_properties;

typedef enum {
	mc_26_3_cyan_concrete_slab_type_V_TOP,
	mc_26_3_cyan_concrete_slab_type_V_BOTTOM,
	mc_26_3_cyan_concrete_slab_type_V_DOUBLE,
} mc_26_3_cyan_concrete_slab_type;

typedef struct {
	mc_26_3_cyan_concrete_slab_type type;
	b8 waterlogged;
} mc_26_3_cyan_concrete_slab_properties;

typedef enum {
	mc_26_3_cyan_concrete_stairs_facing_V_NORTH,
	mc_26_3_cyan_concrete_stairs_facing_V_SOUTH,
	mc_26_3_cyan_concrete_stairs_facing_V_WEST,
	mc_26_3_cyan_concrete_stairs_facing_V_EAST,
} mc_26_3_cyan_concrete_stairs_facing;

typedef enum {
	mc_26_3_cyan_concrete_stairs_half_V_TOP,
	mc_26_3_cyan_concrete_stairs_half_V_BOTTOM,
} mc_26_3_cyan_concrete_stairs_half;

typedef enum {
	mc_26_3_cyan_concrete_stairs_shape_V_STRAIGHT,
	mc_26_3_cyan_concrete_stairs_shape_V_INNER_LEFT,
	mc_26_3_cyan_concrete_stairs_shape_V_INNER_RIGHT,
	mc_26_3_cyan_concrete_stairs_shape_V_OUTER_LEFT,
	mc_26_3_cyan_concrete_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_cyan_concrete_stairs_shape;

typedef struct {
	mc_26_3_cyan_concrete_stairs_facing facing;
	mc_26_3_cyan_concrete_stairs_half half;
	mc_26_3_cyan_concrete_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_cyan_concrete_stairs_properties;

typedef enum {
	mc_26_3_cyan_glazed_terracotta_facing_V_NORTH,
	mc_26_3_cyan_glazed_terracotta_facing_V_SOUTH,
	mc_26_3_cyan_glazed_terracotta_facing_V_WEST,
	mc_26_3_cyan_glazed_terracotta_facing_V_EAST,
} mc_26_3_cyan_glazed_terracotta_facing;

typedef struct {
	mc_26_3_cyan_glazed_terracotta_facing facing;
} mc_26_3_cyan_glazed_terracotta_properties;

typedef enum {
	mc_26_3_cyan_shulker_box_facing_V_NORTH,
	mc_26_3_cyan_shulker_box_facing_V_EAST,
	mc_26_3_cyan_shulker_box_facing_V_SOUTH,
	mc_26_3_cyan_shulker_box_facing_V_WEST,
	mc_26_3_cyan_shulker_box_facing_V_UP,
	mc_26_3_cyan_shulker_box_facing_V_DOWN,
} mc_26_3_cyan_shulker_box_facing;

typedef struct {
	mc_26_3_cyan_shulker_box_facing facing;
} mc_26_3_cyan_shulker_box_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_cyan_stained_glass_pane_properties;

typedef enum {
	mc_26_3_cyan_wall_banner_facing_V_NORTH,
	mc_26_3_cyan_wall_banner_facing_V_SOUTH,
	mc_26_3_cyan_wall_banner_facing_V_WEST,
	mc_26_3_cyan_wall_banner_facing_V_EAST,
} mc_26_3_cyan_wall_banner_facing;

typedef struct {
	mc_26_3_cyan_wall_banner_facing facing;
} mc_26_3_cyan_wall_banner_properties;

typedef enum {
	mc_26_3_cyan_wool_slab_type_V_TOP,
	mc_26_3_cyan_wool_slab_type_V_BOTTOM,
	mc_26_3_cyan_wool_slab_type_V_DOUBLE,
} mc_26_3_cyan_wool_slab_type;

typedef struct {
	mc_26_3_cyan_wool_slab_type type;
	b8 waterlogged;
} mc_26_3_cyan_wool_slab_properties;

typedef enum {
	mc_26_3_cyan_wool_stairs_facing_V_NORTH,
	mc_26_3_cyan_wool_stairs_facing_V_SOUTH,
	mc_26_3_cyan_wool_stairs_facing_V_WEST,
	mc_26_3_cyan_wool_stairs_facing_V_EAST,
} mc_26_3_cyan_wool_stairs_facing;

typedef enum {
	mc_26_3_cyan_wool_stairs_half_V_TOP,
	mc_26_3_cyan_wool_stairs_half_V_BOTTOM,
} mc_26_3_cyan_wool_stairs_half;

typedef enum {
	mc_26_3_cyan_wool_stairs_shape_V_STRAIGHT,
	mc_26_3_cyan_wool_stairs_shape_V_INNER_LEFT,
	mc_26_3_cyan_wool_stairs_shape_V_INNER_RIGHT,
	mc_26_3_cyan_wool_stairs_shape_V_OUTER_LEFT,
	mc_26_3_cyan_wool_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_cyan_wool_stairs_shape;

typedef struct {
	mc_26_3_cyan_wool_stairs_facing facing;
	mc_26_3_cyan_wool_stairs_half half;
	mc_26_3_cyan_wool_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_cyan_wool_stairs_properties;

typedef enum {
	mc_26_3_damaged_anvil_facing_V_NORTH,
	mc_26_3_damaged_anvil_facing_V_SOUTH,
	mc_26_3_damaged_anvil_facing_V_WEST,
	mc_26_3_damaged_anvil_facing_V_EAST,
} mc_26_3_damaged_anvil_facing;

typedef struct {
	mc_26_3_damaged_anvil_facing facing;
} mc_26_3_damaged_anvil_properties;

typedef enum {
	mc_26_3_dark_oak_button_face_V_FLOOR,
	mc_26_3_dark_oak_button_face_V_WALL,
	mc_26_3_dark_oak_button_face_V_CEILING,
} mc_26_3_dark_oak_button_face;

typedef enum {
	mc_26_3_dark_oak_button_facing_V_NORTH,
	mc_26_3_dark_oak_button_facing_V_SOUTH,
	mc_26_3_dark_oak_button_facing_V_WEST,
	mc_26_3_dark_oak_button_facing_V_EAST,
} mc_26_3_dark_oak_button_facing;

typedef struct {
	mc_26_3_dark_oak_button_face face;
	mc_26_3_dark_oak_button_facing facing;
	b8 powered;
} mc_26_3_dark_oak_button_properties;

typedef enum {
	mc_26_3_dark_oak_door_facing_V_NORTH,
	mc_26_3_dark_oak_door_facing_V_SOUTH,
	mc_26_3_dark_oak_door_facing_V_WEST,
	mc_26_3_dark_oak_door_facing_V_EAST,
} mc_26_3_dark_oak_door_facing;

typedef enum {
	mc_26_3_dark_oak_door_half_V_UPPER,
	mc_26_3_dark_oak_door_half_V_LOWER,
} mc_26_3_dark_oak_door_half;

typedef enum {
	mc_26_3_dark_oak_door_hinge_V_LEFT,
	mc_26_3_dark_oak_door_hinge_V_RIGHT,
} mc_26_3_dark_oak_door_hinge;

typedef struct {
	mc_26_3_dark_oak_door_facing facing;
	mc_26_3_dark_oak_door_half half;
	mc_26_3_dark_oak_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_dark_oak_door_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_dark_oak_fence_properties;

typedef enum {
	mc_26_3_dark_oak_fence_gate_facing_V_NORTH,
	mc_26_3_dark_oak_fence_gate_facing_V_SOUTH,
	mc_26_3_dark_oak_fence_gate_facing_V_WEST,
	mc_26_3_dark_oak_fence_gate_facing_V_EAST,
} mc_26_3_dark_oak_fence_gate_facing;

typedef struct {
	mc_26_3_dark_oak_fence_gate_facing facing;
	b8 in_wall;
	b8 open;
	b8 powered;
} mc_26_3_dark_oak_fence_gate_properties;

typedef enum {
	mc_26_3_dark_oak_hanging_sign_rotation_V_V_0,
	mc_26_3_dark_oak_hanging_sign_rotation_V_V_1,
	mc_26_3_dark_oak_hanging_sign_rotation_V_V_2,
	mc_26_3_dark_oak_hanging_sign_rotation_V_V_3,
	mc_26_3_dark_oak_hanging_sign_rotation_V_V_4,
	mc_26_3_dark_oak_hanging_sign_rotation_V_V_5,
	mc_26_3_dark_oak_hanging_sign_rotation_V_V_6,
	mc_26_3_dark_oak_hanging_sign_rotation_V_V_7,
	mc_26_3_dark_oak_hanging_sign_rotation_V_V_8,
	mc_26_3_dark_oak_hanging_sign_rotation_V_V_9,
	mc_26_3_dark_oak_hanging_sign_rotation_V_V_10,
	mc_26_3_dark_oak_hanging_sign_rotation_V_V_11,
	mc_26_3_dark_oak_hanging_sign_rotation_V_V_12,
	mc_26_3_dark_oak_hanging_sign_rotation_V_V_13,
	mc_26_3_dark_oak_hanging_sign_rotation_V_V_14,
	mc_26_3_dark_oak_hanging_sign_rotation_V_V_15,
} mc_26_3_dark_oak_hanging_sign_rotation;

typedef struct {
	b8 attached;
	mc_26_3_dark_oak_hanging_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_dark_oak_hanging_sign_properties;

typedef enum {
	mc_26_3_dark_oak_leaves_distance_V_V_1,
	mc_26_3_dark_oak_leaves_distance_V_V_2,
	mc_26_3_dark_oak_leaves_distance_V_V_3,
	mc_26_3_dark_oak_leaves_distance_V_V_4,
	mc_26_3_dark_oak_leaves_distance_V_V_5,
	mc_26_3_dark_oak_leaves_distance_V_V_6,
	mc_26_3_dark_oak_leaves_distance_V_V_7,
} mc_26_3_dark_oak_leaves_distance;

typedef struct {
	mc_26_3_dark_oak_leaves_distance distance;
	b8 persistent;
	b8 waterlogged;
} mc_26_3_dark_oak_leaves_properties;

typedef enum {
	mc_26_3_dark_oak_log_axis_V_X,
	mc_26_3_dark_oak_log_axis_V_Y,
	mc_26_3_dark_oak_log_axis_V_Z,
} mc_26_3_dark_oak_log_axis;

typedef struct {
	mc_26_3_dark_oak_log_axis axis;
} mc_26_3_dark_oak_log_properties;

typedef struct {
	b8 powered;
} mc_26_3_dark_oak_pressure_plate_properties;

typedef enum {
	mc_26_3_dark_oak_sapling_stage_V_V_0,
	mc_26_3_dark_oak_sapling_stage_V_V_1,
} mc_26_3_dark_oak_sapling_stage;

typedef struct {
	mc_26_3_dark_oak_sapling_stage stage;
} mc_26_3_dark_oak_sapling_properties;

typedef enum {
	mc_26_3_dark_oak_shelf_facing_V_NORTH,
	mc_26_3_dark_oak_shelf_facing_V_SOUTH,
	mc_26_3_dark_oak_shelf_facing_V_WEST,
	mc_26_3_dark_oak_shelf_facing_V_EAST,
} mc_26_3_dark_oak_shelf_facing;

typedef enum {
	mc_26_3_dark_oak_shelf_side_chain_V_UNCONNECTED,
	mc_26_3_dark_oak_shelf_side_chain_V_RIGHT,
	mc_26_3_dark_oak_shelf_side_chain_V_CENTER,
	mc_26_3_dark_oak_shelf_side_chain_V_LEFT,
} mc_26_3_dark_oak_shelf_side_chain;

typedef struct {
	mc_26_3_dark_oak_shelf_facing facing;
	b8 powered;
	mc_26_3_dark_oak_shelf_side_chain side_chain;
	b8 waterlogged;
} mc_26_3_dark_oak_shelf_properties;

typedef enum {
	mc_26_3_dark_oak_sign_rotation_V_V_0,
	mc_26_3_dark_oak_sign_rotation_V_V_1,
	mc_26_3_dark_oak_sign_rotation_V_V_2,
	mc_26_3_dark_oak_sign_rotation_V_V_3,
	mc_26_3_dark_oak_sign_rotation_V_V_4,
	mc_26_3_dark_oak_sign_rotation_V_V_5,
	mc_26_3_dark_oak_sign_rotation_V_V_6,
	mc_26_3_dark_oak_sign_rotation_V_V_7,
	mc_26_3_dark_oak_sign_rotation_V_V_8,
	mc_26_3_dark_oak_sign_rotation_V_V_9,
	mc_26_3_dark_oak_sign_rotation_V_V_10,
	mc_26_3_dark_oak_sign_rotation_V_V_11,
	mc_26_3_dark_oak_sign_rotation_V_V_12,
	mc_26_3_dark_oak_sign_rotation_V_V_13,
	mc_26_3_dark_oak_sign_rotation_V_V_14,
	mc_26_3_dark_oak_sign_rotation_V_V_15,
} mc_26_3_dark_oak_sign_rotation;

typedef struct {
	mc_26_3_dark_oak_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_dark_oak_sign_properties;

typedef enum {
	mc_26_3_dark_oak_slab_type_V_TOP,
	mc_26_3_dark_oak_slab_type_V_BOTTOM,
	mc_26_3_dark_oak_slab_type_V_DOUBLE,
} mc_26_3_dark_oak_slab_type;

typedef struct {
	mc_26_3_dark_oak_slab_type type;
	b8 waterlogged;
} mc_26_3_dark_oak_slab_properties;

typedef enum {
	mc_26_3_dark_oak_stairs_facing_V_NORTH,
	mc_26_3_dark_oak_stairs_facing_V_SOUTH,
	mc_26_3_dark_oak_stairs_facing_V_WEST,
	mc_26_3_dark_oak_stairs_facing_V_EAST,
} mc_26_3_dark_oak_stairs_facing;

typedef enum {
	mc_26_3_dark_oak_stairs_half_V_TOP,
	mc_26_3_dark_oak_stairs_half_V_BOTTOM,
} mc_26_3_dark_oak_stairs_half;

typedef enum {
	mc_26_3_dark_oak_stairs_shape_V_STRAIGHT,
	mc_26_3_dark_oak_stairs_shape_V_INNER_LEFT,
	mc_26_3_dark_oak_stairs_shape_V_INNER_RIGHT,
	mc_26_3_dark_oak_stairs_shape_V_OUTER_LEFT,
	mc_26_3_dark_oak_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_dark_oak_stairs_shape;

typedef struct {
	mc_26_3_dark_oak_stairs_facing facing;
	mc_26_3_dark_oak_stairs_half half;
	mc_26_3_dark_oak_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_dark_oak_stairs_properties;

typedef enum {
	mc_26_3_dark_oak_trapdoor_facing_V_NORTH,
	mc_26_3_dark_oak_trapdoor_facing_V_SOUTH,
	mc_26_3_dark_oak_trapdoor_facing_V_WEST,
	mc_26_3_dark_oak_trapdoor_facing_V_EAST,
} mc_26_3_dark_oak_trapdoor_facing;

typedef enum {
	mc_26_3_dark_oak_trapdoor_half_V_TOP,
	mc_26_3_dark_oak_trapdoor_half_V_BOTTOM,
} mc_26_3_dark_oak_trapdoor_half;

typedef struct {
	mc_26_3_dark_oak_trapdoor_facing facing;
	mc_26_3_dark_oak_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_dark_oak_trapdoor_properties;

typedef enum {
	mc_26_3_dark_oak_wall_hanging_sign_facing_V_NORTH,
	mc_26_3_dark_oak_wall_hanging_sign_facing_V_SOUTH,
	mc_26_3_dark_oak_wall_hanging_sign_facing_V_WEST,
	mc_26_3_dark_oak_wall_hanging_sign_facing_V_EAST,
} mc_26_3_dark_oak_wall_hanging_sign_facing;

typedef struct {
	mc_26_3_dark_oak_wall_hanging_sign_facing facing;
	b8 waterlogged;
} mc_26_3_dark_oak_wall_hanging_sign_properties;

typedef enum {
	mc_26_3_dark_oak_wall_sign_facing_V_NORTH,
	mc_26_3_dark_oak_wall_sign_facing_V_SOUTH,
	mc_26_3_dark_oak_wall_sign_facing_V_WEST,
	mc_26_3_dark_oak_wall_sign_facing_V_EAST,
} mc_26_3_dark_oak_wall_sign_facing;

typedef struct {
	mc_26_3_dark_oak_wall_sign_facing facing;
	b8 waterlogged;
} mc_26_3_dark_oak_wall_sign_properties;

typedef enum {
	mc_26_3_dark_oak_wood_axis_V_X,
	mc_26_3_dark_oak_wood_axis_V_Y,
	mc_26_3_dark_oak_wood_axis_V_Z,
} mc_26_3_dark_oak_wood_axis;

typedef struct {
	mc_26_3_dark_oak_wood_axis axis;
} mc_26_3_dark_oak_wood_properties;

typedef enum {
	mc_26_3_dark_prismarine_slab_type_V_TOP,
	mc_26_3_dark_prismarine_slab_type_V_BOTTOM,
	mc_26_3_dark_prismarine_slab_type_V_DOUBLE,
} mc_26_3_dark_prismarine_slab_type;

typedef struct {
	mc_26_3_dark_prismarine_slab_type type;
	b8 waterlogged;
} mc_26_3_dark_prismarine_slab_properties;

typedef enum {
	mc_26_3_dark_prismarine_stairs_facing_V_NORTH,
	mc_26_3_dark_prismarine_stairs_facing_V_SOUTH,
	mc_26_3_dark_prismarine_stairs_facing_V_WEST,
	mc_26_3_dark_prismarine_stairs_facing_V_EAST,
} mc_26_3_dark_prismarine_stairs_facing;

typedef enum {
	mc_26_3_dark_prismarine_stairs_half_V_TOP,
	mc_26_3_dark_prismarine_stairs_half_V_BOTTOM,
} mc_26_3_dark_prismarine_stairs_half;

typedef enum {
	mc_26_3_dark_prismarine_stairs_shape_V_STRAIGHT,
	mc_26_3_dark_prismarine_stairs_shape_V_INNER_LEFT,
	mc_26_3_dark_prismarine_stairs_shape_V_INNER_RIGHT,
	mc_26_3_dark_prismarine_stairs_shape_V_OUTER_LEFT,
	mc_26_3_dark_prismarine_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_dark_prismarine_stairs_shape;

typedef struct {
	mc_26_3_dark_prismarine_stairs_facing facing;
	mc_26_3_dark_prismarine_stairs_half half;
	mc_26_3_dark_prismarine_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_dark_prismarine_stairs_properties;

typedef enum {
	mc_26_3_daylight_detector_power_V_V_0,
	mc_26_3_daylight_detector_power_V_V_1,
	mc_26_3_daylight_detector_power_V_V_2,
	mc_26_3_daylight_detector_power_V_V_3,
	mc_26_3_daylight_detector_power_V_V_4,
	mc_26_3_daylight_detector_power_V_V_5,
	mc_26_3_daylight_detector_power_V_V_6,
	mc_26_3_daylight_detector_power_V_V_7,
	mc_26_3_daylight_detector_power_V_V_8,
	mc_26_3_daylight_detector_power_V_V_9,
	mc_26_3_daylight_detector_power_V_V_10,
	mc_26_3_daylight_detector_power_V_V_11,
	mc_26_3_daylight_detector_power_V_V_12,
	mc_26_3_daylight_detector_power_V_V_13,
	mc_26_3_daylight_detector_power_V_V_14,
	mc_26_3_daylight_detector_power_V_V_15,
} mc_26_3_daylight_detector_power;

typedef struct {
	b8 inverted;
	mc_26_3_daylight_detector_power power;
} mc_26_3_daylight_detector_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_dead_brain_coral_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_dead_brain_coral_fan_properties;

typedef enum {
	mc_26_3_dead_brain_coral_wall_fan_facing_V_NORTH,
	mc_26_3_dead_brain_coral_wall_fan_facing_V_SOUTH,
	mc_26_3_dead_brain_coral_wall_fan_facing_V_WEST,
	mc_26_3_dead_brain_coral_wall_fan_facing_V_EAST,
} mc_26_3_dead_brain_coral_wall_fan_facing;

typedef struct {
	mc_26_3_dead_brain_coral_wall_fan_facing facing;
	b8 waterlogged;
} mc_26_3_dead_brain_coral_wall_fan_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_dead_bubble_coral_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_dead_bubble_coral_fan_properties;

typedef enum {
	mc_26_3_dead_bubble_coral_wall_fan_facing_V_NORTH,
	mc_26_3_dead_bubble_coral_wall_fan_facing_V_SOUTH,
	mc_26_3_dead_bubble_coral_wall_fan_facing_V_WEST,
	mc_26_3_dead_bubble_coral_wall_fan_facing_V_EAST,
} mc_26_3_dead_bubble_coral_wall_fan_facing;

typedef struct {
	mc_26_3_dead_bubble_coral_wall_fan_facing facing;
	b8 waterlogged;
} mc_26_3_dead_bubble_coral_wall_fan_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_dead_fire_coral_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_dead_fire_coral_fan_properties;

typedef enum {
	mc_26_3_dead_fire_coral_wall_fan_facing_V_NORTH,
	mc_26_3_dead_fire_coral_wall_fan_facing_V_SOUTH,
	mc_26_3_dead_fire_coral_wall_fan_facing_V_WEST,
	mc_26_3_dead_fire_coral_wall_fan_facing_V_EAST,
} mc_26_3_dead_fire_coral_wall_fan_facing;

typedef struct {
	mc_26_3_dead_fire_coral_wall_fan_facing facing;
	b8 waterlogged;
} mc_26_3_dead_fire_coral_wall_fan_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_dead_horn_coral_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_dead_horn_coral_fan_properties;

typedef enum {
	mc_26_3_dead_horn_coral_wall_fan_facing_V_NORTH,
	mc_26_3_dead_horn_coral_wall_fan_facing_V_SOUTH,
	mc_26_3_dead_horn_coral_wall_fan_facing_V_WEST,
	mc_26_3_dead_horn_coral_wall_fan_facing_V_EAST,
} mc_26_3_dead_horn_coral_wall_fan_facing;

typedef struct {
	mc_26_3_dead_horn_coral_wall_fan_facing facing;
	b8 waterlogged;
} mc_26_3_dead_horn_coral_wall_fan_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_dead_tube_coral_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_dead_tube_coral_fan_properties;

typedef enum {
	mc_26_3_dead_tube_coral_wall_fan_facing_V_NORTH,
	mc_26_3_dead_tube_coral_wall_fan_facing_V_SOUTH,
	mc_26_3_dead_tube_coral_wall_fan_facing_V_WEST,
	mc_26_3_dead_tube_coral_wall_fan_facing_V_EAST,
} mc_26_3_dead_tube_coral_wall_fan_facing;

typedef struct {
	mc_26_3_dead_tube_coral_wall_fan_facing facing;
	b8 waterlogged;
} mc_26_3_dead_tube_coral_wall_fan_properties;

typedef enum {
	mc_26_3_decorated_pot_facing_V_NORTH,
	mc_26_3_decorated_pot_facing_V_SOUTH,
	mc_26_3_decorated_pot_facing_V_WEST,
	mc_26_3_decorated_pot_facing_V_EAST,
} mc_26_3_decorated_pot_facing;

typedef struct {
	b8 cracked;
	mc_26_3_decorated_pot_facing facing;
	b8 waterlogged;
} mc_26_3_decorated_pot_properties;

typedef enum {
	mc_26_3_deepslate_axis_V_X,
	mc_26_3_deepslate_axis_V_Y,
	mc_26_3_deepslate_axis_V_Z,
} mc_26_3_deepslate_axis;

typedef struct {
	mc_26_3_deepslate_axis axis;
} mc_26_3_deepslate_properties;

typedef enum {
	mc_26_3_deepslate_brick_slab_type_V_TOP,
	mc_26_3_deepslate_brick_slab_type_V_BOTTOM,
	mc_26_3_deepslate_brick_slab_type_V_DOUBLE,
} mc_26_3_deepslate_brick_slab_type;

typedef struct {
	mc_26_3_deepslate_brick_slab_type type;
	b8 waterlogged;
} mc_26_3_deepslate_brick_slab_properties;

typedef enum {
	mc_26_3_deepslate_brick_stairs_facing_V_NORTH,
	mc_26_3_deepslate_brick_stairs_facing_V_SOUTH,
	mc_26_3_deepslate_brick_stairs_facing_V_WEST,
	mc_26_3_deepslate_brick_stairs_facing_V_EAST,
} mc_26_3_deepslate_brick_stairs_facing;

typedef enum {
	mc_26_3_deepslate_brick_stairs_half_V_TOP,
	mc_26_3_deepslate_brick_stairs_half_V_BOTTOM,
} mc_26_3_deepslate_brick_stairs_half;

typedef enum {
	mc_26_3_deepslate_brick_stairs_shape_V_STRAIGHT,
	mc_26_3_deepslate_brick_stairs_shape_V_INNER_LEFT,
	mc_26_3_deepslate_brick_stairs_shape_V_INNER_RIGHT,
	mc_26_3_deepslate_brick_stairs_shape_V_OUTER_LEFT,
	mc_26_3_deepslate_brick_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_deepslate_brick_stairs_shape;

typedef struct {
	mc_26_3_deepslate_brick_stairs_facing facing;
	mc_26_3_deepslate_brick_stairs_half half;
	mc_26_3_deepslate_brick_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_deepslate_brick_stairs_properties;

typedef enum {
	mc_26_3_deepslate_brick_wall_east_V_NONE,
	mc_26_3_deepslate_brick_wall_east_V_LOW,
	mc_26_3_deepslate_brick_wall_east_V_TALL,
} mc_26_3_deepslate_brick_wall_east;

typedef enum {
	mc_26_3_deepslate_brick_wall_north_V_NONE,
	mc_26_3_deepslate_brick_wall_north_V_LOW,
	mc_26_3_deepslate_brick_wall_north_V_TALL,
} mc_26_3_deepslate_brick_wall_north;

typedef enum {
	mc_26_3_deepslate_brick_wall_south_V_NONE,
	mc_26_3_deepslate_brick_wall_south_V_LOW,
	mc_26_3_deepslate_brick_wall_south_V_TALL,
} mc_26_3_deepslate_brick_wall_south;

typedef enum {
	mc_26_3_deepslate_brick_wall_west_V_NONE,
	mc_26_3_deepslate_brick_wall_west_V_LOW,
	mc_26_3_deepslate_brick_wall_west_V_TALL,
} mc_26_3_deepslate_brick_wall_west;

typedef struct {
	mc_26_3_deepslate_brick_wall_east east;
	mc_26_3_deepslate_brick_wall_north north;
	mc_26_3_deepslate_brick_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_deepslate_brick_wall_west west;
} mc_26_3_deepslate_brick_wall_properties;

typedef struct {
	b8 lit;
} mc_26_3_deepslate_redstone_ore_properties;

typedef enum {
	mc_26_3_deepslate_tile_slab_type_V_TOP,
	mc_26_3_deepslate_tile_slab_type_V_BOTTOM,
	mc_26_3_deepslate_tile_slab_type_V_DOUBLE,
} mc_26_3_deepslate_tile_slab_type;

typedef struct {
	mc_26_3_deepslate_tile_slab_type type;
	b8 waterlogged;
} mc_26_3_deepslate_tile_slab_properties;

typedef enum {
	mc_26_3_deepslate_tile_stairs_facing_V_NORTH,
	mc_26_3_deepslate_tile_stairs_facing_V_SOUTH,
	mc_26_3_deepslate_tile_stairs_facing_V_WEST,
	mc_26_3_deepslate_tile_stairs_facing_V_EAST,
} mc_26_3_deepslate_tile_stairs_facing;

typedef enum {
	mc_26_3_deepslate_tile_stairs_half_V_TOP,
	mc_26_3_deepslate_tile_stairs_half_V_BOTTOM,
} mc_26_3_deepslate_tile_stairs_half;

typedef enum {
	mc_26_3_deepslate_tile_stairs_shape_V_STRAIGHT,
	mc_26_3_deepslate_tile_stairs_shape_V_INNER_LEFT,
	mc_26_3_deepslate_tile_stairs_shape_V_INNER_RIGHT,
	mc_26_3_deepslate_tile_stairs_shape_V_OUTER_LEFT,
	mc_26_3_deepslate_tile_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_deepslate_tile_stairs_shape;

typedef struct {
	mc_26_3_deepslate_tile_stairs_facing facing;
	mc_26_3_deepslate_tile_stairs_half half;
	mc_26_3_deepslate_tile_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_deepslate_tile_stairs_properties;

typedef enum {
	mc_26_3_deepslate_tile_wall_east_V_NONE,
	mc_26_3_deepslate_tile_wall_east_V_LOW,
	mc_26_3_deepslate_tile_wall_east_V_TALL,
} mc_26_3_deepslate_tile_wall_east;

typedef enum {
	mc_26_3_deepslate_tile_wall_north_V_NONE,
	mc_26_3_deepslate_tile_wall_north_V_LOW,
	mc_26_3_deepslate_tile_wall_north_V_TALL,
} mc_26_3_deepslate_tile_wall_north;

typedef enum {
	mc_26_3_deepslate_tile_wall_south_V_NONE,
	mc_26_3_deepslate_tile_wall_south_V_LOW,
	mc_26_3_deepslate_tile_wall_south_V_TALL,
} mc_26_3_deepslate_tile_wall_south;

typedef enum {
	mc_26_3_deepslate_tile_wall_west_V_NONE,
	mc_26_3_deepslate_tile_wall_west_V_LOW,
	mc_26_3_deepslate_tile_wall_west_V_TALL,
} mc_26_3_deepslate_tile_wall_west;

typedef struct {
	mc_26_3_deepslate_tile_wall_east east;
	mc_26_3_deepslate_tile_wall_north north;
	mc_26_3_deepslate_tile_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_deepslate_tile_wall_west west;
} mc_26_3_deepslate_tile_wall_properties;

typedef enum {
	mc_26_3_detector_rail_shape_V_NORTH_SOUTH,
	mc_26_3_detector_rail_shape_V_EAST_WEST,
	mc_26_3_detector_rail_shape_V_ASCENDING_EAST,
	mc_26_3_detector_rail_shape_V_ASCENDING_WEST,
	mc_26_3_detector_rail_shape_V_ASCENDING_NORTH,
	mc_26_3_detector_rail_shape_V_ASCENDING_SOUTH,
} mc_26_3_detector_rail_shape;

typedef struct {
	b8 powered;
	mc_26_3_detector_rail_shape shape;
	b8 waterlogged;
} mc_26_3_detector_rail_properties;

typedef enum {
	mc_26_3_diorite_slab_type_V_TOP,
	mc_26_3_diorite_slab_type_V_BOTTOM,
	mc_26_3_diorite_slab_type_V_DOUBLE,
} mc_26_3_diorite_slab_type;

typedef struct {
	mc_26_3_diorite_slab_type type;
	b8 waterlogged;
} mc_26_3_diorite_slab_properties;

typedef enum {
	mc_26_3_diorite_stairs_facing_V_NORTH,
	mc_26_3_diorite_stairs_facing_V_SOUTH,
	mc_26_3_diorite_stairs_facing_V_WEST,
	mc_26_3_diorite_stairs_facing_V_EAST,
} mc_26_3_diorite_stairs_facing;

typedef enum {
	mc_26_3_diorite_stairs_half_V_TOP,
	mc_26_3_diorite_stairs_half_V_BOTTOM,
} mc_26_3_diorite_stairs_half;

typedef enum {
	mc_26_3_diorite_stairs_shape_V_STRAIGHT,
	mc_26_3_diorite_stairs_shape_V_INNER_LEFT,
	mc_26_3_diorite_stairs_shape_V_INNER_RIGHT,
	mc_26_3_diorite_stairs_shape_V_OUTER_LEFT,
	mc_26_3_diorite_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_diorite_stairs_shape;

typedef struct {
	mc_26_3_diorite_stairs_facing facing;
	mc_26_3_diorite_stairs_half half;
	mc_26_3_diorite_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_diorite_stairs_properties;

typedef enum {
	mc_26_3_diorite_wall_east_V_NONE,
	mc_26_3_diorite_wall_east_V_LOW,
	mc_26_3_diorite_wall_east_V_TALL,
} mc_26_3_diorite_wall_east;

typedef enum {
	mc_26_3_diorite_wall_north_V_NONE,
	mc_26_3_diorite_wall_north_V_LOW,
	mc_26_3_diorite_wall_north_V_TALL,
} mc_26_3_diorite_wall_north;

typedef enum {
	mc_26_3_diorite_wall_south_V_NONE,
	mc_26_3_diorite_wall_south_V_LOW,
	mc_26_3_diorite_wall_south_V_TALL,
} mc_26_3_diorite_wall_south;

typedef enum {
	mc_26_3_diorite_wall_west_V_NONE,
	mc_26_3_diorite_wall_west_V_LOW,
	mc_26_3_diorite_wall_west_V_TALL,
} mc_26_3_diorite_wall_west;

typedef struct {
	mc_26_3_diorite_wall_east east;
	mc_26_3_diorite_wall_north north;
	mc_26_3_diorite_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_diorite_wall_west west;
} mc_26_3_diorite_wall_properties;

typedef enum {
	mc_26_3_dispenser_facing_V_NORTH,
	mc_26_3_dispenser_facing_V_EAST,
	mc_26_3_dispenser_facing_V_SOUTH,
	mc_26_3_dispenser_facing_V_WEST,
	mc_26_3_dispenser_facing_V_UP,
	mc_26_3_dispenser_facing_V_DOWN,
} mc_26_3_dispenser_facing;

typedef struct {
	mc_26_3_dispenser_facing facing;
	b8 triggered;
} mc_26_3_dispenser_properties;

typedef enum {
	mc_26_3_dragon_head_rotation_V_V_0,
	mc_26_3_dragon_head_rotation_V_V_1,
	mc_26_3_dragon_head_rotation_V_V_2,
	mc_26_3_dragon_head_rotation_V_V_3,
	mc_26_3_dragon_head_rotation_V_V_4,
	mc_26_3_dragon_head_rotation_V_V_5,
	mc_26_3_dragon_head_rotation_V_V_6,
	mc_26_3_dragon_head_rotation_V_V_7,
	mc_26_3_dragon_head_rotation_V_V_8,
	mc_26_3_dragon_head_rotation_V_V_9,
	mc_26_3_dragon_head_rotation_V_V_10,
	mc_26_3_dragon_head_rotation_V_V_11,
	mc_26_3_dragon_head_rotation_V_V_12,
	mc_26_3_dragon_head_rotation_V_V_13,
	mc_26_3_dragon_head_rotation_V_V_14,
	mc_26_3_dragon_head_rotation_V_V_15,
} mc_26_3_dragon_head_rotation;

typedef struct {
	b8 powered;
	mc_26_3_dragon_head_rotation rotation;
} mc_26_3_dragon_head_properties;

typedef enum {
	mc_26_3_dragon_wall_head_facing_V_NORTH,
	mc_26_3_dragon_wall_head_facing_V_SOUTH,
	mc_26_3_dragon_wall_head_facing_V_WEST,
	mc_26_3_dragon_wall_head_facing_V_EAST,
} mc_26_3_dragon_wall_head_facing;

typedef struct {
	mc_26_3_dragon_wall_head_facing facing;
	b8 powered;
} mc_26_3_dragon_wall_head_properties;

typedef enum {
	mc_26_3_dried_ghast_facing_V_NORTH,
	mc_26_3_dried_ghast_facing_V_SOUTH,
	mc_26_3_dried_ghast_facing_V_WEST,
	mc_26_3_dried_ghast_facing_V_EAST,
} mc_26_3_dried_ghast_facing;

typedef enum {
	mc_26_3_dried_ghast_hydration_V_V_0,
	mc_26_3_dried_ghast_hydration_V_V_1,
	mc_26_3_dried_ghast_hydration_V_V_2,
	mc_26_3_dried_ghast_hydration_V_V_3,
} mc_26_3_dried_ghast_hydration;

typedef struct {
	mc_26_3_dried_ghast_facing facing;
	mc_26_3_dried_ghast_hydration hydration;
	b8 waterlogged;
} mc_26_3_dried_ghast_properties;

typedef enum {
	mc_26_3_dropper_facing_V_NORTH,
	mc_26_3_dropper_facing_V_EAST,
	mc_26_3_dropper_facing_V_SOUTH,
	mc_26_3_dropper_facing_V_WEST,
	mc_26_3_dropper_facing_V_UP,
	mc_26_3_dropper_facing_V_DOWN,
} mc_26_3_dropper_facing;

typedef struct {
	mc_26_3_dropper_facing facing;
	b8 triggered;
} mc_26_3_dropper_properties;

typedef enum {
	mc_26_3_end_portal_frame_facing_V_NORTH,
	mc_26_3_end_portal_frame_facing_V_SOUTH,
	mc_26_3_end_portal_frame_facing_V_WEST,
	mc_26_3_end_portal_frame_facing_V_EAST,
} mc_26_3_end_portal_frame_facing;

typedef struct {
	b8 eye;
	mc_26_3_end_portal_frame_facing facing;
} mc_26_3_end_portal_frame_properties;

typedef enum {
	mc_26_3_end_rod_facing_V_NORTH,
	mc_26_3_end_rod_facing_V_EAST,
	mc_26_3_end_rod_facing_V_SOUTH,
	mc_26_3_end_rod_facing_V_WEST,
	mc_26_3_end_rod_facing_V_UP,
	mc_26_3_end_rod_facing_V_DOWN,
} mc_26_3_end_rod_facing;

typedef struct {
	mc_26_3_end_rod_facing facing;
} mc_26_3_end_rod_properties;

typedef enum {
	mc_26_3_end_stone_brick_slab_type_V_TOP,
	mc_26_3_end_stone_brick_slab_type_V_BOTTOM,
	mc_26_3_end_stone_brick_slab_type_V_DOUBLE,
} mc_26_3_end_stone_brick_slab_type;

typedef struct {
	mc_26_3_end_stone_brick_slab_type type;
	b8 waterlogged;
} mc_26_3_end_stone_brick_slab_properties;

typedef enum {
	mc_26_3_end_stone_brick_stairs_facing_V_NORTH,
	mc_26_3_end_stone_brick_stairs_facing_V_SOUTH,
	mc_26_3_end_stone_brick_stairs_facing_V_WEST,
	mc_26_3_end_stone_brick_stairs_facing_V_EAST,
} mc_26_3_end_stone_brick_stairs_facing;

typedef enum {
	mc_26_3_end_stone_brick_stairs_half_V_TOP,
	mc_26_3_end_stone_brick_stairs_half_V_BOTTOM,
} mc_26_3_end_stone_brick_stairs_half;

typedef enum {
	mc_26_3_end_stone_brick_stairs_shape_V_STRAIGHT,
	mc_26_3_end_stone_brick_stairs_shape_V_INNER_LEFT,
	mc_26_3_end_stone_brick_stairs_shape_V_INNER_RIGHT,
	mc_26_3_end_stone_brick_stairs_shape_V_OUTER_LEFT,
	mc_26_3_end_stone_brick_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_end_stone_brick_stairs_shape;

typedef struct {
	mc_26_3_end_stone_brick_stairs_facing facing;
	mc_26_3_end_stone_brick_stairs_half half;
	mc_26_3_end_stone_brick_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_end_stone_brick_stairs_properties;

typedef enum {
	mc_26_3_end_stone_brick_wall_east_V_NONE,
	mc_26_3_end_stone_brick_wall_east_V_LOW,
	mc_26_3_end_stone_brick_wall_east_V_TALL,
} mc_26_3_end_stone_brick_wall_east;

typedef enum {
	mc_26_3_end_stone_brick_wall_north_V_NONE,
	mc_26_3_end_stone_brick_wall_north_V_LOW,
	mc_26_3_end_stone_brick_wall_north_V_TALL,
} mc_26_3_end_stone_brick_wall_north;

typedef enum {
	mc_26_3_end_stone_brick_wall_south_V_NONE,
	mc_26_3_end_stone_brick_wall_south_V_LOW,
	mc_26_3_end_stone_brick_wall_south_V_TALL,
} mc_26_3_end_stone_brick_wall_south;

typedef enum {
	mc_26_3_end_stone_brick_wall_west_V_NONE,
	mc_26_3_end_stone_brick_wall_west_V_LOW,
	mc_26_3_end_stone_brick_wall_west_V_TALL,
} mc_26_3_end_stone_brick_wall_west;

typedef struct {
	mc_26_3_end_stone_brick_wall_east east;
	mc_26_3_end_stone_brick_wall_north north;
	mc_26_3_end_stone_brick_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_end_stone_brick_wall_west west;
} mc_26_3_end_stone_brick_wall_properties;

typedef enum {
	mc_26_3_ender_chest_facing_V_NORTH,
	mc_26_3_ender_chest_facing_V_SOUTH,
	mc_26_3_ender_chest_facing_V_WEST,
	mc_26_3_ender_chest_facing_V_EAST,
} mc_26_3_ender_chest_facing;

typedef struct {
	mc_26_3_ender_chest_facing facing;
	b8 waterlogged;
} mc_26_3_ender_chest_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_exposed_copper_bars_properties;

typedef struct {
	b8 lit;
	b8 powered;
} mc_26_3_exposed_copper_bulb_properties;

typedef enum {
	mc_26_3_exposed_copper_chain_axis_V_X,
	mc_26_3_exposed_copper_chain_axis_V_Y,
	mc_26_3_exposed_copper_chain_axis_V_Z,
} mc_26_3_exposed_copper_chain_axis;

typedef struct {
	mc_26_3_exposed_copper_chain_axis axis;
	b8 waterlogged;
} mc_26_3_exposed_copper_chain_properties;

typedef enum {
	mc_26_3_exposed_copper_chest_type_V_SINGLE,
	mc_26_3_exposed_copper_chest_type_V_LEFT,
	mc_26_3_exposed_copper_chest_type_V_RIGHT,
} mc_26_3_exposed_copper_chest_type;

typedef enum {
	mc_26_3_exposed_copper_chest_facing_V_NORTH,
	mc_26_3_exposed_copper_chest_facing_V_SOUTH,
	mc_26_3_exposed_copper_chest_facing_V_WEST,
	mc_26_3_exposed_copper_chest_facing_V_EAST,
} mc_26_3_exposed_copper_chest_facing;

typedef struct {
	mc_26_3_exposed_copper_chest_type type;
	mc_26_3_exposed_copper_chest_facing facing;
	b8 waterlogged;
} mc_26_3_exposed_copper_chest_properties;

typedef enum {
	mc_26_3_exposed_copper_door_facing_V_NORTH,
	mc_26_3_exposed_copper_door_facing_V_SOUTH,
	mc_26_3_exposed_copper_door_facing_V_WEST,
	mc_26_3_exposed_copper_door_facing_V_EAST,
} mc_26_3_exposed_copper_door_facing;

typedef enum {
	mc_26_3_exposed_copper_door_half_V_UPPER,
	mc_26_3_exposed_copper_door_half_V_LOWER,
} mc_26_3_exposed_copper_door_half;

typedef enum {
	mc_26_3_exposed_copper_door_hinge_V_LEFT,
	mc_26_3_exposed_copper_door_hinge_V_RIGHT,
} mc_26_3_exposed_copper_door_hinge;

typedef struct {
	mc_26_3_exposed_copper_door_facing facing;
	mc_26_3_exposed_copper_door_half half;
	mc_26_3_exposed_copper_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_exposed_copper_door_properties;

typedef enum {
	mc_26_3_exposed_copper_golem_statue_copper_golem_pose_V_STANDING,
	mc_26_3_exposed_copper_golem_statue_copper_golem_pose_V_SITTING,
	mc_26_3_exposed_copper_golem_statue_copper_golem_pose_V_RUNNING,
	mc_26_3_exposed_copper_golem_statue_copper_golem_pose_V_STAR,
} mc_26_3_exposed_copper_golem_statue_copper_golem_pose;

typedef enum {
	mc_26_3_exposed_copper_golem_statue_facing_V_NORTH,
	mc_26_3_exposed_copper_golem_statue_facing_V_SOUTH,
	mc_26_3_exposed_copper_golem_statue_facing_V_WEST,
	mc_26_3_exposed_copper_golem_statue_facing_V_EAST,
} mc_26_3_exposed_copper_golem_statue_facing;

typedef struct {
	mc_26_3_exposed_copper_golem_statue_copper_golem_pose copper_golem_pose;
	mc_26_3_exposed_copper_golem_statue_facing facing;
	b8 waterlogged;
} mc_26_3_exposed_copper_golem_statue_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_exposed_copper_grate_properties;

typedef struct {
	b8 hanging;
	b8 waterlogged;
} mc_26_3_exposed_copper_lantern_properties;

typedef enum {
	mc_26_3_exposed_copper_trapdoor_facing_V_NORTH,
	mc_26_3_exposed_copper_trapdoor_facing_V_SOUTH,
	mc_26_3_exposed_copper_trapdoor_facing_V_WEST,
	mc_26_3_exposed_copper_trapdoor_facing_V_EAST,
} mc_26_3_exposed_copper_trapdoor_facing;

typedef enum {
	mc_26_3_exposed_copper_trapdoor_half_V_TOP,
	mc_26_3_exposed_copper_trapdoor_half_V_BOTTOM,
} mc_26_3_exposed_copper_trapdoor_half;

typedef struct {
	mc_26_3_exposed_copper_trapdoor_facing facing;
	mc_26_3_exposed_copper_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_exposed_copper_trapdoor_properties;

typedef enum {
	mc_26_3_exposed_cut_copper_slab_type_V_TOP,
	mc_26_3_exposed_cut_copper_slab_type_V_BOTTOM,
	mc_26_3_exposed_cut_copper_slab_type_V_DOUBLE,
} mc_26_3_exposed_cut_copper_slab_type;

typedef struct {
	mc_26_3_exposed_cut_copper_slab_type type;
	b8 waterlogged;
} mc_26_3_exposed_cut_copper_slab_properties;

typedef enum {
	mc_26_3_exposed_cut_copper_stairs_facing_V_NORTH,
	mc_26_3_exposed_cut_copper_stairs_facing_V_SOUTH,
	mc_26_3_exposed_cut_copper_stairs_facing_V_WEST,
	mc_26_3_exposed_cut_copper_stairs_facing_V_EAST,
} mc_26_3_exposed_cut_copper_stairs_facing;

typedef enum {
	mc_26_3_exposed_cut_copper_stairs_half_V_TOP,
	mc_26_3_exposed_cut_copper_stairs_half_V_BOTTOM,
} mc_26_3_exposed_cut_copper_stairs_half;

typedef enum {
	mc_26_3_exposed_cut_copper_stairs_shape_V_STRAIGHT,
	mc_26_3_exposed_cut_copper_stairs_shape_V_INNER_LEFT,
	mc_26_3_exposed_cut_copper_stairs_shape_V_INNER_RIGHT,
	mc_26_3_exposed_cut_copper_stairs_shape_V_OUTER_LEFT,
	mc_26_3_exposed_cut_copper_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_exposed_cut_copper_stairs_shape;

typedef struct {
	mc_26_3_exposed_cut_copper_stairs_facing facing;
	mc_26_3_exposed_cut_copper_stairs_half half;
	mc_26_3_exposed_cut_copper_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_exposed_cut_copper_stairs_properties;

typedef enum {
	mc_26_3_exposed_lightning_rod_facing_V_NORTH,
	mc_26_3_exposed_lightning_rod_facing_V_EAST,
	mc_26_3_exposed_lightning_rod_facing_V_SOUTH,
	mc_26_3_exposed_lightning_rod_facing_V_WEST,
	mc_26_3_exposed_lightning_rod_facing_V_UP,
	mc_26_3_exposed_lightning_rod_facing_V_DOWN,
} mc_26_3_exposed_lightning_rod_facing;

typedef struct {
	mc_26_3_exposed_lightning_rod_facing facing;
	b8 powered;
	b8 waterlogged;
} mc_26_3_exposed_lightning_rod_properties;

typedef enum {
	mc_26_3_farmland_moisture_V_V_0,
	mc_26_3_farmland_moisture_V_V_1,
	mc_26_3_farmland_moisture_V_V_2,
	mc_26_3_farmland_moisture_V_V_3,
	mc_26_3_farmland_moisture_V_V_4,
	mc_26_3_farmland_moisture_V_V_5,
	mc_26_3_farmland_moisture_V_V_6,
	mc_26_3_farmland_moisture_V_V_7,
} mc_26_3_farmland_moisture;

typedef struct {
	mc_26_3_farmland_moisture moisture;
} mc_26_3_farmland_properties;

typedef enum {
	mc_26_3_fire_age_V_V_0,
	mc_26_3_fire_age_V_V_1,
	mc_26_3_fire_age_V_V_2,
	mc_26_3_fire_age_V_V_3,
	mc_26_3_fire_age_V_V_4,
	mc_26_3_fire_age_V_V_5,
	mc_26_3_fire_age_V_V_6,
	mc_26_3_fire_age_V_V_7,
	mc_26_3_fire_age_V_V_8,
	mc_26_3_fire_age_V_V_9,
	mc_26_3_fire_age_V_V_10,
	mc_26_3_fire_age_V_V_11,
	mc_26_3_fire_age_V_V_12,
	mc_26_3_fire_age_V_V_13,
	mc_26_3_fire_age_V_V_14,
	mc_26_3_fire_age_V_V_15,
} mc_26_3_fire_age;

typedef struct {
	mc_26_3_fire_age age;
	b8 east;
	b8 north;
	b8 south;
	b8 up;
	b8 west;
} mc_26_3_fire_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_fire_coral_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_fire_coral_fan_properties;

typedef enum {
	mc_26_3_fire_coral_wall_fan_facing_V_NORTH,
	mc_26_3_fire_coral_wall_fan_facing_V_SOUTH,
	mc_26_3_fire_coral_wall_fan_facing_V_WEST,
	mc_26_3_fire_coral_wall_fan_facing_V_EAST,
} mc_26_3_fire_coral_wall_fan_facing;

typedef struct {
	mc_26_3_fire_coral_wall_fan_facing facing;
	b8 waterlogged;
} mc_26_3_fire_coral_wall_fan_properties;

typedef enum {
	mc_26_3_flowering_azalea_leaves_distance_V_V_1,
	mc_26_3_flowering_azalea_leaves_distance_V_V_2,
	mc_26_3_flowering_azalea_leaves_distance_V_V_3,
	mc_26_3_flowering_azalea_leaves_distance_V_V_4,
	mc_26_3_flowering_azalea_leaves_distance_V_V_5,
	mc_26_3_flowering_azalea_leaves_distance_V_V_6,
	mc_26_3_flowering_azalea_leaves_distance_V_V_7,
} mc_26_3_flowering_azalea_leaves_distance;

typedef struct {
	mc_26_3_flowering_azalea_leaves_distance distance;
	b8 persistent;
	b8 waterlogged;
} mc_26_3_flowering_azalea_leaves_properties;

typedef enum {
	mc_26_3_frosted_ice_age_V_V_0,
	mc_26_3_frosted_ice_age_V_V_1,
	mc_26_3_frosted_ice_age_V_V_2,
	mc_26_3_frosted_ice_age_V_V_3,
} mc_26_3_frosted_ice_age;

typedef struct {
	mc_26_3_frosted_ice_age age;
} mc_26_3_frosted_ice_properties;

typedef enum {
	mc_26_3_furnace_facing_V_NORTH,
	mc_26_3_furnace_facing_V_SOUTH,
	mc_26_3_furnace_facing_V_WEST,
	mc_26_3_furnace_facing_V_EAST,
} mc_26_3_furnace_facing;

typedef struct {
	mc_26_3_furnace_facing facing;
	b8 lit;
} mc_26_3_furnace_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_glass_pane_properties;

typedef struct {
	b8 down;
	b8 east;
	b8 north;
	b8 south;
	b8 up;
	b8 waterlogged;
	b8 west;
} mc_26_3_glow_lichen_properties;

typedef enum {
	mc_26_3_granite_slab_type_V_TOP,
	mc_26_3_granite_slab_type_V_BOTTOM,
	mc_26_3_granite_slab_type_V_DOUBLE,
} mc_26_3_granite_slab_type;

typedef struct {
	mc_26_3_granite_slab_type type;
	b8 waterlogged;
} mc_26_3_granite_slab_properties;

typedef enum {
	mc_26_3_granite_stairs_facing_V_NORTH,
	mc_26_3_granite_stairs_facing_V_SOUTH,
	mc_26_3_granite_stairs_facing_V_WEST,
	mc_26_3_granite_stairs_facing_V_EAST,
} mc_26_3_granite_stairs_facing;

typedef enum {
	mc_26_3_granite_stairs_half_V_TOP,
	mc_26_3_granite_stairs_half_V_BOTTOM,
} mc_26_3_granite_stairs_half;

typedef enum {
	mc_26_3_granite_stairs_shape_V_STRAIGHT,
	mc_26_3_granite_stairs_shape_V_INNER_LEFT,
	mc_26_3_granite_stairs_shape_V_INNER_RIGHT,
	mc_26_3_granite_stairs_shape_V_OUTER_LEFT,
	mc_26_3_granite_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_granite_stairs_shape;

typedef struct {
	mc_26_3_granite_stairs_facing facing;
	mc_26_3_granite_stairs_half half;
	mc_26_3_granite_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_granite_stairs_properties;

typedef enum {
	mc_26_3_granite_wall_east_V_NONE,
	mc_26_3_granite_wall_east_V_LOW,
	mc_26_3_granite_wall_east_V_TALL,
} mc_26_3_granite_wall_east;

typedef enum {
	mc_26_3_granite_wall_north_V_NONE,
	mc_26_3_granite_wall_north_V_LOW,
	mc_26_3_granite_wall_north_V_TALL,
} mc_26_3_granite_wall_north;

typedef enum {
	mc_26_3_granite_wall_south_V_NONE,
	mc_26_3_granite_wall_south_V_LOW,
	mc_26_3_granite_wall_south_V_TALL,
} mc_26_3_granite_wall_south;

typedef enum {
	mc_26_3_granite_wall_west_V_NONE,
	mc_26_3_granite_wall_west_V_LOW,
	mc_26_3_granite_wall_west_V_TALL,
} mc_26_3_granite_wall_west;

typedef struct {
	mc_26_3_granite_wall_east east;
	mc_26_3_granite_wall_north north;
	mc_26_3_granite_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_granite_wall_west west;
} mc_26_3_granite_wall_properties;

typedef struct {
	b8 snowy;
} mc_26_3_grass_block_properties;

typedef enum {
	mc_26_3_gray_banner_rotation_V_V_0,
	mc_26_3_gray_banner_rotation_V_V_1,
	mc_26_3_gray_banner_rotation_V_V_2,
	mc_26_3_gray_banner_rotation_V_V_3,
	mc_26_3_gray_banner_rotation_V_V_4,
	mc_26_3_gray_banner_rotation_V_V_5,
	mc_26_3_gray_banner_rotation_V_V_6,
	mc_26_3_gray_banner_rotation_V_V_7,
	mc_26_3_gray_banner_rotation_V_V_8,
	mc_26_3_gray_banner_rotation_V_V_9,
	mc_26_3_gray_banner_rotation_V_V_10,
	mc_26_3_gray_banner_rotation_V_V_11,
	mc_26_3_gray_banner_rotation_V_V_12,
	mc_26_3_gray_banner_rotation_V_V_13,
	mc_26_3_gray_banner_rotation_V_V_14,
	mc_26_3_gray_banner_rotation_V_V_15,
} mc_26_3_gray_banner_rotation;

typedef struct {
	mc_26_3_gray_banner_rotation rotation;
} mc_26_3_gray_banner_properties;

typedef enum {
	mc_26_3_gray_bed_facing_V_NORTH,
	mc_26_3_gray_bed_facing_V_SOUTH,
	mc_26_3_gray_bed_facing_V_WEST,
	mc_26_3_gray_bed_facing_V_EAST,
} mc_26_3_gray_bed_facing;

typedef enum {
	mc_26_3_gray_bed_part_V_HEAD,
	mc_26_3_gray_bed_part_V_FOOT,
} mc_26_3_gray_bed_part;

typedef struct {
	mc_26_3_gray_bed_facing facing;
	b8 occupied;
	mc_26_3_gray_bed_part part;
} mc_26_3_gray_bed_properties;

typedef enum {
	mc_26_3_gray_candle_candles_V_V_1,
	mc_26_3_gray_candle_candles_V_V_2,
	mc_26_3_gray_candle_candles_V_V_3,
	mc_26_3_gray_candle_candles_V_V_4,
} mc_26_3_gray_candle_candles;

typedef struct {
	mc_26_3_gray_candle_candles candles;
	b8 lit;
	b8 waterlogged;
} mc_26_3_gray_candle_properties;

typedef struct {
	b8 lit;
} mc_26_3_gray_candle_cake_properties;

typedef enum {
	mc_26_3_gray_concrete_slab_type_V_TOP,
	mc_26_3_gray_concrete_slab_type_V_BOTTOM,
	mc_26_3_gray_concrete_slab_type_V_DOUBLE,
} mc_26_3_gray_concrete_slab_type;

typedef struct {
	mc_26_3_gray_concrete_slab_type type;
	b8 waterlogged;
} mc_26_3_gray_concrete_slab_properties;

typedef enum {
	mc_26_3_gray_concrete_stairs_facing_V_NORTH,
	mc_26_3_gray_concrete_stairs_facing_V_SOUTH,
	mc_26_3_gray_concrete_stairs_facing_V_WEST,
	mc_26_3_gray_concrete_stairs_facing_V_EAST,
} mc_26_3_gray_concrete_stairs_facing;

typedef enum {
	mc_26_3_gray_concrete_stairs_half_V_TOP,
	mc_26_3_gray_concrete_stairs_half_V_BOTTOM,
} mc_26_3_gray_concrete_stairs_half;

typedef enum {
	mc_26_3_gray_concrete_stairs_shape_V_STRAIGHT,
	mc_26_3_gray_concrete_stairs_shape_V_INNER_LEFT,
	mc_26_3_gray_concrete_stairs_shape_V_INNER_RIGHT,
	mc_26_3_gray_concrete_stairs_shape_V_OUTER_LEFT,
	mc_26_3_gray_concrete_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_gray_concrete_stairs_shape;

typedef struct {
	mc_26_3_gray_concrete_stairs_facing facing;
	mc_26_3_gray_concrete_stairs_half half;
	mc_26_3_gray_concrete_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_gray_concrete_stairs_properties;

typedef enum {
	mc_26_3_gray_glazed_terracotta_facing_V_NORTH,
	mc_26_3_gray_glazed_terracotta_facing_V_SOUTH,
	mc_26_3_gray_glazed_terracotta_facing_V_WEST,
	mc_26_3_gray_glazed_terracotta_facing_V_EAST,
} mc_26_3_gray_glazed_terracotta_facing;

typedef struct {
	mc_26_3_gray_glazed_terracotta_facing facing;
} mc_26_3_gray_glazed_terracotta_properties;

typedef enum {
	mc_26_3_gray_shulker_box_facing_V_NORTH,
	mc_26_3_gray_shulker_box_facing_V_EAST,
	mc_26_3_gray_shulker_box_facing_V_SOUTH,
	mc_26_3_gray_shulker_box_facing_V_WEST,
	mc_26_3_gray_shulker_box_facing_V_UP,
	mc_26_3_gray_shulker_box_facing_V_DOWN,
} mc_26_3_gray_shulker_box_facing;

typedef struct {
	mc_26_3_gray_shulker_box_facing facing;
} mc_26_3_gray_shulker_box_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_gray_stained_glass_pane_properties;

typedef enum {
	mc_26_3_gray_wall_banner_facing_V_NORTH,
	mc_26_3_gray_wall_banner_facing_V_SOUTH,
	mc_26_3_gray_wall_banner_facing_V_WEST,
	mc_26_3_gray_wall_banner_facing_V_EAST,
} mc_26_3_gray_wall_banner_facing;

typedef struct {
	mc_26_3_gray_wall_banner_facing facing;
} mc_26_3_gray_wall_banner_properties;

typedef enum {
	mc_26_3_gray_wool_slab_type_V_TOP,
	mc_26_3_gray_wool_slab_type_V_BOTTOM,
	mc_26_3_gray_wool_slab_type_V_DOUBLE,
} mc_26_3_gray_wool_slab_type;

typedef struct {
	mc_26_3_gray_wool_slab_type type;
	b8 waterlogged;
} mc_26_3_gray_wool_slab_properties;

typedef enum {
	mc_26_3_gray_wool_stairs_facing_V_NORTH,
	mc_26_3_gray_wool_stairs_facing_V_SOUTH,
	mc_26_3_gray_wool_stairs_facing_V_WEST,
	mc_26_3_gray_wool_stairs_facing_V_EAST,
} mc_26_3_gray_wool_stairs_facing;

typedef enum {
	mc_26_3_gray_wool_stairs_half_V_TOP,
	mc_26_3_gray_wool_stairs_half_V_BOTTOM,
} mc_26_3_gray_wool_stairs_half;

typedef enum {
	mc_26_3_gray_wool_stairs_shape_V_STRAIGHT,
	mc_26_3_gray_wool_stairs_shape_V_INNER_LEFT,
	mc_26_3_gray_wool_stairs_shape_V_INNER_RIGHT,
	mc_26_3_gray_wool_stairs_shape_V_OUTER_LEFT,
	mc_26_3_gray_wool_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_gray_wool_stairs_shape;

typedef struct {
	mc_26_3_gray_wool_stairs_facing facing;
	mc_26_3_gray_wool_stairs_half half;
	mc_26_3_gray_wool_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_gray_wool_stairs_properties;

typedef enum {
	mc_26_3_green_banner_rotation_V_V_0,
	mc_26_3_green_banner_rotation_V_V_1,
	mc_26_3_green_banner_rotation_V_V_2,
	mc_26_3_green_banner_rotation_V_V_3,
	mc_26_3_green_banner_rotation_V_V_4,
	mc_26_3_green_banner_rotation_V_V_5,
	mc_26_3_green_banner_rotation_V_V_6,
	mc_26_3_green_banner_rotation_V_V_7,
	mc_26_3_green_banner_rotation_V_V_8,
	mc_26_3_green_banner_rotation_V_V_9,
	mc_26_3_green_banner_rotation_V_V_10,
	mc_26_3_green_banner_rotation_V_V_11,
	mc_26_3_green_banner_rotation_V_V_12,
	mc_26_3_green_banner_rotation_V_V_13,
	mc_26_3_green_banner_rotation_V_V_14,
	mc_26_3_green_banner_rotation_V_V_15,
} mc_26_3_green_banner_rotation;

typedef struct {
	mc_26_3_green_banner_rotation rotation;
} mc_26_3_green_banner_properties;

typedef enum {
	mc_26_3_green_bed_facing_V_NORTH,
	mc_26_3_green_bed_facing_V_SOUTH,
	mc_26_3_green_bed_facing_V_WEST,
	mc_26_3_green_bed_facing_V_EAST,
} mc_26_3_green_bed_facing;

typedef enum {
	mc_26_3_green_bed_part_V_HEAD,
	mc_26_3_green_bed_part_V_FOOT,
} mc_26_3_green_bed_part;

typedef struct {
	mc_26_3_green_bed_facing facing;
	b8 occupied;
	mc_26_3_green_bed_part part;
} mc_26_3_green_bed_properties;

typedef enum {
	mc_26_3_green_candle_candles_V_V_1,
	mc_26_3_green_candle_candles_V_V_2,
	mc_26_3_green_candle_candles_V_V_3,
	mc_26_3_green_candle_candles_V_V_4,
} mc_26_3_green_candle_candles;

typedef struct {
	mc_26_3_green_candle_candles candles;
	b8 lit;
	b8 waterlogged;
} mc_26_3_green_candle_properties;

typedef struct {
	b8 lit;
} mc_26_3_green_candle_cake_properties;

typedef enum {
	mc_26_3_green_concrete_slab_type_V_TOP,
	mc_26_3_green_concrete_slab_type_V_BOTTOM,
	mc_26_3_green_concrete_slab_type_V_DOUBLE,
} mc_26_3_green_concrete_slab_type;

typedef struct {
	mc_26_3_green_concrete_slab_type type;
	b8 waterlogged;
} mc_26_3_green_concrete_slab_properties;

typedef enum {
	mc_26_3_green_concrete_stairs_facing_V_NORTH,
	mc_26_3_green_concrete_stairs_facing_V_SOUTH,
	mc_26_3_green_concrete_stairs_facing_V_WEST,
	mc_26_3_green_concrete_stairs_facing_V_EAST,
} mc_26_3_green_concrete_stairs_facing;

typedef enum {
	mc_26_3_green_concrete_stairs_half_V_TOP,
	mc_26_3_green_concrete_stairs_half_V_BOTTOM,
} mc_26_3_green_concrete_stairs_half;

typedef enum {
	mc_26_3_green_concrete_stairs_shape_V_STRAIGHT,
	mc_26_3_green_concrete_stairs_shape_V_INNER_LEFT,
	mc_26_3_green_concrete_stairs_shape_V_INNER_RIGHT,
	mc_26_3_green_concrete_stairs_shape_V_OUTER_LEFT,
	mc_26_3_green_concrete_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_green_concrete_stairs_shape;

typedef struct {
	mc_26_3_green_concrete_stairs_facing facing;
	mc_26_3_green_concrete_stairs_half half;
	mc_26_3_green_concrete_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_green_concrete_stairs_properties;

typedef enum {
	mc_26_3_green_glazed_terracotta_facing_V_NORTH,
	mc_26_3_green_glazed_terracotta_facing_V_SOUTH,
	mc_26_3_green_glazed_terracotta_facing_V_WEST,
	mc_26_3_green_glazed_terracotta_facing_V_EAST,
} mc_26_3_green_glazed_terracotta_facing;

typedef struct {
	mc_26_3_green_glazed_terracotta_facing facing;
} mc_26_3_green_glazed_terracotta_properties;

typedef enum {
	mc_26_3_green_shulker_box_facing_V_NORTH,
	mc_26_3_green_shulker_box_facing_V_EAST,
	mc_26_3_green_shulker_box_facing_V_SOUTH,
	mc_26_3_green_shulker_box_facing_V_WEST,
	mc_26_3_green_shulker_box_facing_V_UP,
	mc_26_3_green_shulker_box_facing_V_DOWN,
} mc_26_3_green_shulker_box_facing;

typedef struct {
	mc_26_3_green_shulker_box_facing facing;
} mc_26_3_green_shulker_box_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_green_stained_glass_pane_properties;

typedef enum {
	mc_26_3_green_wall_banner_facing_V_NORTH,
	mc_26_3_green_wall_banner_facing_V_SOUTH,
	mc_26_3_green_wall_banner_facing_V_WEST,
	mc_26_3_green_wall_banner_facing_V_EAST,
} mc_26_3_green_wall_banner_facing;

typedef struct {
	mc_26_3_green_wall_banner_facing facing;
} mc_26_3_green_wall_banner_properties;

typedef enum {
	mc_26_3_green_wool_slab_type_V_TOP,
	mc_26_3_green_wool_slab_type_V_BOTTOM,
	mc_26_3_green_wool_slab_type_V_DOUBLE,
} mc_26_3_green_wool_slab_type;

typedef struct {
	mc_26_3_green_wool_slab_type type;
	b8 waterlogged;
} mc_26_3_green_wool_slab_properties;

typedef enum {
	mc_26_3_green_wool_stairs_facing_V_NORTH,
	mc_26_3_green_wool_stairs_facing_V_SOUTH,
	mc_26_3_green_wool_stairs_facing_V_WEST,
	mc_26_3_green_wool_stairs_facing_V_EAST,
} mc_26_3_green_wool_stairs_facing;

typedef enum {
	mc_26_3_green_wool_stairs_half_V_TOP,
	mc_26_3_green_wool_stairs_half_V_BOTTOM,
} mc_26_3_green_wool_stairs_half;

typedef enum {
	mc_26_3_green_wool_stairs_shape_V_STRAIGHT,
	mc_26_3_green_wool_stairs_shape_V_INNER_LEFT,
	mc_26_3_green_wool_stairs_shape_V_INNER_RIGHT,
	mc_26_3_green_wool_stairs_shape_V_OUTER_LEFT,
	mc_26_3_green_wool_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_green_wool_stairs_shape;

typedef struct {
	mc_26_3_green_wool_stairs_facing facing;
	mc_26_3_green_wool_stairs_half half;
	mc_26_3_green_wool_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_green_wool_stairs_properties;

typedef enum {
	mc_26_3_grindstone_face_V_FLOOR,
	mc_26_3_grindstone_face_V_WALL,
	mc_26_3_grindstone_face_V_CEILING,
} mc_26_3_grindstone_face;

typedef enum {
	mc_26_3_grindstone_facing_V_NORTH,
	mc_26_3_grindstone_facing_V_SOUTH,
	mc_26_3_grindstone_facing_V_WEST,
	mc_26_3_grindstone_facing_V_EAST,
} mc_26_3_grindstone_facing;

typedef struct {
	mc_26_3_grindstone_face face;
	mc_26_3_grindstone_facing facing;
} mc_26_3_grindstone_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_hanging_roots_properties;

typedef enum {
	mc_26_3_hay_block_axis_V_X,
	mc_26_3_hay_block_axis_V_Y,
	mc_26_3_hay_block_axis_V_Z,
} mc_26_3_hay_block_axis;

typedef struct {
	mc_26_3_hay_block_axis axis;
} mc_26_3_hay_block_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_heavy_core_properties;

typedef enum {
	mc_26_3_heavy_weighted_pressure_plate_power_V_V_0,
	mc_26_3_heavy_weighted_pressure_plate_power_V_V_1,
	mc_26_3_heavy_weighted_pressure_plate_power_V_V_2,
	mc_26_3_heavy_weighted_pressure_plate_power_V_V_3,
	mc_26_3_heavy_weighted_pressure_plate_power_V_V_4,
	mc_26_3_heavy_weighted_pressure_plate_power_V_V_5,
	mc_26_3_heavy_weighted_pressure_plate_power_V_V_6,
	mc_26_3_heavy_weighted_pressure_plate_power_V_V_7,
	mc_26_3_heavy_weighted_pressure_plate_power_V_V_8,
	mc_26_3_heavy_weighted_pressure_plate_power_V_V_9,
	mc_26_3_heavy_weighted_pressure_plate_power_V_V_10,
	mc_26_3_heavy_weighted_pressure_plate_power_V_V_11,
	mc_26_3_heavy_weighted_pressure_plate_power_V_V_12,
	mc_26_3_heavy_weighted_pressure_plate_power_V_V_13,
	mc_26_3_heavy_weighted_pressure_plate_power_V_V_14,
	mc_26_3_heavy_weighted_pressure_plate_power_V_V_15,
} mc_26_3_heavy_weighted_pressure_plate_power;

typedef struct {
	mc_26_3_heavy_weighted_pressure_plate_power power;
} mc_26_3_heavy_weighted_pressure_plate_properties;

typedef enum {
	mc_26_3_hopper_facing_V_DOWN,
	mc_26_3_hopper_facing_V_NORTH,
	mc_26_3_hopper_facing_V_SOUTH,
	mc_26_3_hopper_facing_V_WEST,
	mc_26_3_hopper_facing_V_EAST,
} mc_26_3_hopper_facing;

typedef struct {
	b8 enabled;
	mc_26_3_hopper_facing facing;
} mc_26_3_hopper_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_horn_coral_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_horn_coral_fan_properties;

typedef enum {
	mc_26_3_horn_coral_wall_fan_facing_V_NORTH,
	mc_26_3_horn_coral_wall_fan_facing_V_SOUTH,
	mc_26_3_horn_coral_wall_fan_facing_V_WEST,
	mc_26_3_horn_coral_wall_fan_facing_V_EAST,
} mc_26_3_horn_coral_wall_fan_facing;

typedef struct {
	mc_26_3_horn_coral_wall_fan_facing facing;
	b8 waterlogged;
} mc_26_3_horn_coral_wall_fan_properties;

typedef enum {
	mc_26_3_infested_deepslate_axis_V_X,
	mc_26_3_infested_deepslate_axis_V_Y,
	mc_26_3_infested_deepslate_axis_V_Z,
} mc_26_3_infested_deepslate_axis;

typedef struct {
	mc_26_3_infested_deepslate_axis axis;
} mc_26_3_infested_deepslate_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_iron_bars_properties;

typedef enum {
	mc_26_3_iron_chain_axis_V_X,
	mc_26_3_iron_chain_axis_V_Y,
	mc_26_3_iron_chain_axis_V_Z,
} mc_26_3_iron_chain_axis;

typedef struct {
	mc_26_3_iron_chain_axis axis;
	b8 waterlogged;
} mc_26_3_iron_chain_properties;

typedef enum {
	mc_26_3_iron_door_facing_V_NORTH,
	mc_26_3_iron_door_facing_V_SOUTH,
	mc_26_3_iron_door_facing_V_WEST,
	mc_26_3_iron_door_facing_V_EAST,
} mc_26_3_iron_door_facing;

typedef enum {
	mc_26_3_iron_door_half_V_UPPER,
	mc_26_3_iron_door_half_V_LOWER,
} mc_26_3_iron_door_half;

typedef enum {
	mc_26_3_iron_door_hinge_V_LEFT,
	mc_26_3_iron_door_hinge_V_RIGHT,
} mc_26_3_iron_door_hinge;

typedef struct {
	mc_26_3_iron_door_facing facing;
	mc_26_3_iron_door_half half;
	mc_26_3_iron_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_iron_door_properties;

typedef enum {
	mc_26_3_iron_trapdoor_facing_V_NORTH,
	mc_26_3_iron_trapdoor_facing_V_SOUTH,
	mc_26_3_iron_trapdoor_facing_V_WEST,
	mc_26_3_iron_trapdoor_facing_V_EAST,
} mc_26_3_iron_trapdoor_facing;

typedef enum {
	mc_26_3_iron_trapdoor_half_V_TOP,
	mc_26_3_iron_trapdoor_half_V_BOTTOM,
} mc_26_3_iron_trapdoor_half;

typedef struct {
	mc_26_3_iron_trapdoor_facing facing;
	mc_26_3_iron_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_iron_trapdoor_properties;

typedef enum {
	mc_26_3_jack_o_lantern_facing_V_NORTH,
	mc_26_3_jack_o_lantern_facing_V_SOUTH,
	mc_26_3_jack_o_lantern_facing_V_WEST,
	mc_26_3_jack_o_lantern_facing_V_EAST,
} mc_26_3_jack_o_lantern_facing;

typedef struct {
	mc_26_3_jack_o_lantern_facing facing;
} mc_26_3_jack_o_lantern_properties;

typedef enum {
	mc_26_3_jigsaw_orientation_V_DOWN_EAST,
	mc_26_3_jigsaw_orientation_V_DOWN_NORTH,
	mc_26_3_jigsaw_orientation_V_DOWN_SOUTH,
	mc_26_3_jigsaw_orientation_V_DOWN_WEST,
	mc_26_3_jigsaw_orientation_V_UP_EAST,
	mc_26_3_jigsaw_orientation_V_UP_NORTH,
	mc_26_3_jigsaw_orientation_V_UP_SOUTH,
	mc_26_3_jigsaw_orientation_V_UP_WEST,
	mc_26_3_jigsaw_orientation_V_WEST_UP,
	mc_26_3_jigsaw_orientation_V_EAST_UP,
	mc_26_3_jigsaw_orientation_V_NORTH_UP,
	mc_26_3_jigsaw_orientation_V_SOUTH_UP,
} mc_26_3_jigsaw_orientation;

typedef struct {
	mc_26_3_jigsaw_orientation orientation;
} mc_26_3_jigsaw_properties;

typedef struct {
	b8 has_record;
} mc_26_3_jukebox_properties;

typedef enum {
	mc_26_3_jungle_button_face_V_FLOOR,
	mc_26_3_jungle_button_face_V_WALL,
	mc_26_3_jungle_button_face_V_CEILING,
} mc_26_3_jungle_button_face;

typedef enum {
	mc_26_3_jungle_button_facing_V_NORTH,
	mc_26_3_jungle_button_facing_V_SOUTH,
	mc_26_3_jungle_button_facing_V_WEST,
	mc_26_3_jungle_button_facing_V_EAST,
} mc_26_3_jungle_button_facing;

typedef struct {
	mc_26_3_jungle_button_face face;
	mc_26_3_jungle_button_facing facing;
	b8 powered;
} mc_26_3_jungle_button_properties;

typedef enum {
	mc_26_3_jungle_door_facing_V_NORTH,
	mc_26_3_jungle_door_facing_V_SOUTH,
	mc_26_3_jungle_door_facing_V_WEST,
	mc_26_3_jungle_door_facing_V_EAST,
} mc_26_3_jungle_door_facing;

typedef enum {
	mc_26_3_jungle_door_half_V_UPPER,
	mc_26_3_jungle_door_half_V_LOWER,
} mc_26_3_jungle_door_half;

typedef enum {
	mc_26_3_jungle_door_hinge_V_LEFT,
	mc_26_3_jungle_door_hinge_V_RIGHT,
} mc_26_3_jungle_door_hinge;

typedef struct {
	mc_26_3_jungle_door_facing facing;
	mc_26_3_jungle_door_half half;
	mc_26_3_jungle_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_jungle_door_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_jungle_fence_properties;

typedef enum {
	mc_26_3_jungle_fence_gate_facing_V_NORTH,
	mc_26_3_jungle_fence_gate_facing_V_SOUTH,
	mc_26_3_jungle_fence_gate_facing_V_WEST,
	mc_26_3_jungle_fence_gate_facing_V_EAST,
} mc_26_3_jungle_fence_gate_facing;

typedef struct {
	mc_26_3_jungle_fence_gate_facing facing;
	b8 in_wall;
	b8 open;
	b8 powered;
} mc_26_3_jungle_fence_gate_properties;

typedef enum {
	mc_26_3_jungle_hanging_sign_rotation_V_V_0,
	mc_26_3_jungle_hanging_sign_rotation_V_V_1,
	mc_26_3_jungle_hanging_sign_rotation_V_V_2,
	mc_26_3_jungle_hanging_sign_rotation_V_V_3,
	mc_26_3_jungle_hanging_sign_rotation_V_V_4,
	mc_26_3_jungle_hanging_sign_rotation_V_V_5,
	mc_26_3_jungle_hanging_sign_rotation_V_V_6,
	mc_26_3_jungle_hanging_sign_rotation_V_V_7,
	mc_26_3_jungle_hanging_sign_rotation_V_V_8,
	mc_26_3_jungle_hanging_sign_rotation_V_V_9,
	mc_26_3_jungle_hanging_sign_rotation_V_V_10,
	mc_26_3_jungle_hanging_sign_rotation_V_V_11,
	mc_26_3_jungle_hanging_sign_rotation_V_V_12,
	mc_26_3_jungle_hanging_sign_rotation_V_V_13,
	mc_26_3_jungle_hanging_sign_rotation_V_V_14,
	mc_26_3_jungle_hanging_sign_rotation_V_V_15,
} mc_26_3_jungle_hanging_sign_rotation;

typedef struct {
	b8 attached;
	mc_26_3_jungle_hanging_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_jungle_hanging_sign_properties;

typedef enum {
	mc_26_3_jungle_leaves_distance_V_V_1,
	mc_26_3_jungle_leaves_distance_V_V_2,
	mc_26_3_jungle_leaves_distance_V_V_3,
	mc_26_3_jungle_leaves_distance_V_V_4,
	mc_26_3_jungle_leaves_distance_V_V_5,
	mc_26_3_jungle_leaves_distance_V_V_6,
	mc_26_3_jungle_leaves_distance_V_V_7,
} mc_26_3_jungle_leaves_distance;

typedef struct {
	mc_26_3_jungle_leaves_distance distance;
	b8 persistent;
	b8 waterlogged;
} mc_26_3_jungle_leaves_properties;

typedef enum {
	mc_26_3_jungle_log_axis_V_X,
	mc_26_3_jungle_log_axis_V_Y,
	mc_26_3_jungle_log_axis_V_Z,
} mc_26_3_jungle_log_axis;

typedef struct {
	mc_26_3_jungle_log_axis axis;
} mc_26_3_jungle_log_properties;

typedef struct {
	b8 powered;
} mc_26_3_jungle_pressure_plate_properties;

typedef enum {
	mc_26_3_jungle_sapling_stage_V_V_0,
	mc_26_3_jungle_sapling_stage_V_V_1,
} mc_26_3_jungle_sapling_stage;

typedef struct {
	mc_26_3_jungle_sapling_stage stage;
} mc_26_3_jungle_sapling_properties;

typedef enum {
	mc_26_3_jungle_shelf_facing_V_NORTH,
	mc_26_3_jungle_shelf_facing_V_SOUTH,
	mc_26_3_jungle_shelf_facing_V_WEST,
	mc_26_3_jungle_shelf_facing_V_EAST,
} mc_26_3_jungle_shelf_facing;

typedef enum {
	mc_26_3_jungle_shelf_side_chain_V_UNCONNECTED,
	mc_26_3_jungle_shelf_side_chain_V_RIGHT,
	mc_26_3_jungle_shelf_side_chain_V_CENTER,
	mc_26_3_jungle_shelf_side_chain_V_LEFT,
} mc_26_3_jungle_shelf_side_chain;

typedef struct {
	mc_26_3_jungle_shelf_facing facing;
	b8 powered;
	mc_26_3_jungle_shelf_side_chain side_chain;
	b8 waterlogged;
} mc_26_3_jungle_shelf_properties;

typedef enum {
	mc_26_3_jungle_sign_rotation_V_V_0,
	mc_26_3_jungle_sign_rotation_V_V_1,
	mc_26_3_jungle_sign_rotation_V_V_2,
	mc_26_3_jungle_sign_rotation_V_V_3,
	mc_26_3_jungle_sign_rotation_V_V_4,
	mc_26_3_jungle_sign_rotation_V_V_5,
	mc_26_3_jungle_sign_rotation_V_V_6,
	mc_26_3_jungle_sign_rotation_V_V_7,
	mc_26_3_jungle_sign_rotation_V_V_8,
	mc_26_3_jungle_sign_rotation_V_V_9,
	mc_26_3_jungle_sign_rotation_V_V_10,
	mc_26_3_jungle_sign_rotation_V_V_11,
	mc_26_3_jungle_sign_rotation_V_V_12,
	mc_26_3_jungle_sign_rotation_V_V_13,
	mc_26_3_jungle_sign_rotation_V_V_14,
	mc_26_3_jungle_sign_rotation_V_V_15,
} mc_26_3_jungle_sign_rotation;

typedef struct {
	mc_26_3_jungle_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_jungle_sign_properties;

typedef enum {
	mc_26_3_jungle_slab_type_V_TOP,
	mc_26_3_jungle_slab_type_V_BOTTOM,
	mc_26_3_jungle_slab_type_V_DOUBLE,
} mc_26_3_jungle_slab_type;

typedef struct {
	mc_26_3_jungle_slab_type type;
	b8 waterlogged;
} mc_26_3_jungle_slab_properties;

typedef enum {
	mc_26_3_jungle_stairs_facing_V_NORTH,
	mc_26_3_jungle_stairs_facing_V_SOUTH,
	mc_26_3_jungle_stairs_facing_V_WEST,
	mc_26_3_jungle_stairs_facing_V_EAST,
} mc_26_3_jungle_stairs_facing;

typedef enum {
	mc_26_3_jungle_stairs_half_V_TOP,
	mc_26_3_jungle_stairs_half_V_BOTTOM,
} mc_26_3_jungle_stairs_half;

typedef enum {
	mc_26_3_jungle_stairs_shape_V_STRAIGHT,
	mc_26_3_jungle_stairs_shape_V_INNER_LEFT,
	mc_26_3_jungle_stairs_shape_V_INNER_RIGHT,
	mc_26_3_jungle_stairs_shape_V_OUTER_LEFT,
	mc_26_3_jungle_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_jungle_stairs_shape;

typedef struct {
	mc_26_3_jungle_stairs_facing facing;
	mc_26_3_jungle_stairs_half half;
	mc_26_3_jungle_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_jungle_stairs_properties;

typedef enum {
	mc_26_3_jungle_trapdoor_facing_V_NORTH,
	mc_26_3_jungle_trapdoor_facing_V_SOUTH,
	mc_26_3_jungle_trapdoor_facing_V_WEST,
	mc_26_3_jungle_trapdoor_facing_V_EAST,
} mc_26_3_jungle_trapdoor_facing;

typedef enum {
	mc_26_3_jungle_trapdoor_half_V_TOP,
	mc_26_3_jungle_trapdoor_half_V_BOTTOM,
} mc_26_3_jungle_trapdoor_half;

typedef struct {
	mc_26_3_jungle_trapdoor_facing facing;
	mc_26_3_jungle_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_jungle_trapdoor_properties;

typedef enum {
	mc_26_3_jungle_wall_hanging_sign_facing_V_NORTH,
	mc_26_3_jungle_wall_hanging_sign_facing_V_SOUTH,
	mc_26_3_jungle_wall_hanging_sign_facing_V_WEST,
	mc_26_3_jungle_wall_hanging_sign_facing_V_EAST,
} mc_26_3_jungle_wall_hanging_sign_facing;

typedef struct {
	mc_26_3_jungle_wall_hanging_sign_facing facing;
	b8 waterlogged;
} mc_26_3_jungle_wall_hanging_sign_properties;

typedef enum {
	mc_26_3_jungle_wall_sign_facing_V_NORTH,
	mc_26_3_jungle_wall_sign_facing_V_SOUTH,
	mc_26_3_jungle_wall_sign_facing_V_WEST,
	mc_26_3_jungle_wall_sign_facing_V_EAST,
} mc_26_3_jungle_wall_sign_facing;

typedef struct {
	mc_26_3_jungle_wall_sign_facing facing;
	b8 waterlogged;
} mc_26_3_jungle_wall_sign_properties;

typedef enum {
	mc_26_3_jungle_wood_axis_V_X,
	mc_26_3_jungle_wood_axis_V_Y,
	mc_26_3_jungle_wood_axis_V_Z,
} mc_26_3_jungle_wood_axis;

typedef struct {
	mc_26_3_jungle_wood_axis axis;
} mc_26_3_jungle_wood_properties;

typedef enum {
	mc_26_3_kelp_age_V_V_0,
	mc_26_3_kelp_age_V_V_1,
	mc_26_3_kelp_age_V_V_2,
	mc_26_3_kelp_age_V_V_3,
	mc_26_3_kelp_age_V_V_4,
	mc_26_3_kelp_age_V_V_5,
	mc_26_3_kelp_age_V_V_6,
	mc_26_3_kelp_age_V_V_7,
	mc_26_3_kelp_age_V_V_8,
	mc_26_3_kelp_age_V_V_9,
	mc_26_3_kelp_age_V_V_10,
	mc_26_3_kelp_age_V_V_11,
	mc_26_3_kelp_age_V_V_12,
	mc_26_3_kelp_age_V_V_13,
	mc_26_3_kelp_age_V_V_14,
	mc_26_3_kelp_age_V_V_15,
	mc_26_3_kelp_age_V_V_16,
	mc_26_3_kelp_age_V_V_17,
	mc_26_3_kelp_age_V_V_18,
	mc_26_3_kelp_age_V_V_19,
	mc_26_3_kelp_age_V_V_20,
	mc_26_3_kelp_age_V_V_21,
	mc_26_3_kelp_age_V_V_22,
	mc_26_3_kelp_age_V_V_23,
	mc_26_3_kelp_age_V_V_24,
	mc_26_3_kelp_age_V_V_25,
} mc_26_3_kelp_age;

typedef struct {
	mc_26_3_kelp_age age;
} mc_26_3_kelp_properties;

typedef enum {
	mc_26_3_ladder_facing_V_NORTH,
	mc_26_3_ladder_facing_V_SOUTH,
	mc_26_3_ladder_facing_V_WEST,
	mc_26_3_ladder_facing_V_EAST,
} mc_26_3_ladder_facing;

typedef struct {
	mc_26_3_ladder_facing facing;
	b8 waterlogged;
} mc_26_3_ladder_properties;

typedef struct {
	b8 hanging;
	b8 waterlogged;
} mc_26_3_lantern_properties;

typedef enum {
	mc_26_3_large_amethyst_bud_facing_V_NORTH,
	mc_26_3_large_amethyst_bud_facing_V_EAST,
	mc_26_3_large_amethyst_bud_facing_V_SOUTH,
	mc_26_3_large_amethyst_bud_facing_V_WEST,
	mc_26_3_large_amethyst_bud_facing_V_UP,
	mc_26_3_large_amethyst_bud_facing_V_DOWN,
} mc_26_3_large_amethyst_bud_facing;

typedef struct {
	mc_26_3_large_amethyst_bud_facing facing;
	b8 waterlogged;
} mc_26_3_large_amethyst_bud_properties;

typedef enum {
	mc_26_3_large_fern_half_V_UPPER,
	mc_26_3_large_fern_half_V_LOWER,
} mc_26_3_large_fern_half;

typedef struct {
	mc_26_3_large_fern_half half;
} mc_26_3_large_fern_properties;

typedef enum {
	mc_26_3_lava_level_V_V_0,
	mc_26_3_lava_level_V_V_1,
	mc_26_3_lava_level_V_V_2,
	mc_26_3_lava_level_V_V_3,
	mc_26_3_lava_level_V_V_4,
	mc_26_3_lava_level_V_V_5,
	mc_26_3_lava_level_V_V_6,
	mc_26_3_lava_level_V_V_7,
	mc_26_3_lava_level_V_V_8,
	mc_26_3_lava_level_V_V_9,
	mc_26_3_lava_level_V_V_10,
	mc_26_3_lava_level_V_V_11,
	mc_26_3_lava_level_V_V_12,
	mc_26_3_lava_level_V_V_13,
	mc_26_3_lava_level_V_V_14,
	mc_26_3_lava_level_V_V_15,
} mc_26_3_lava_level;

typedef struct {
	mc_26_3_lava_level level;
} mc_26_3_lava_properties;

typedef enum {
	mc_26_3_leaf_litter_facing_V_NORTH,
	mc_26_3_leaf_litter_facing_V_SOUTH,
	mc_26_3_leaf_litter_facing_V_WEST,
	mc_26_3_leaf_litter_facing_V_EAST,
} mc_26_3_leaf_litter_facing;

typedef enum {
	mc_26_3_leaf_litter_segment_amount_V_V_1,
	mc_26_3_leaf_litter_segment_amount_V_V_2,
	mc_26_3_leaf_litter_segment_amount_V_V_3,
	mc_26_3_leaf_litter_segment_amount_V_V_4,
} mc_26_3_leaf_litter_segment_amount;

typedef struct {
	mc_26_3_leaf_litter_facing facing;
	mc_26_3_leaf_litter_segment_amount segment_amount;
} mc_26_3_leaf_litter_properties;

typedef enum {
	mc_26_3_lectern_facing_V_NORTH,
	mc_26_3_lectern_facing_V_SOUTH,
	mc_26_3_lectern_facing_V_WEST,
	mc_26_3_lectern_facing_V_EAST,
} mc_26_3_lectern_facing;

typedef struct {
	mc_26_3_lectern_facing facing;
	b8 has_book;
	b8 powered;
} mc_26_3_lectern_properties;

typedef enum {
	mc_26_3_lever_face_V_FLOOR,
	mc_26_3_lever_face_V_WALL,
	mc_26_3_lever_face_V_CEILING,
} mc_26_3_lever_face;

typedef enum {
	mc_26_3_lever_facing_V_NORTH,
	mc_26_3_lever_facing_V_SOUTH,
	mc_26_3_lever_facing_V_WEST,
	mc_26_3_lever_facing_V_EAST,
} mc_26_3_lever_facing;

typedef struct {
	mc_26_3_lever_face face;
	mc_26_3_lever_facing facing;
	b8 powered;
} mc_26_3_lever_properties;

typedef enum {
	mc_26_3_light_level_V_V_0,
	mc_26_3_light_level_V_V_1,
	mc_26_3_light_level_V_V_2,
	mc_26_3_light_level_V_V_3,
	mc_26_3_light_level_V_V_4,
	mc_26_3_light_level_V_V_5,
	mc_26_3_light_level_V_V_6,
	mc_26_3_light_level_V_V_7,
	mc_26_3_light_level_V_V_8,
	mc_26_3_light_level_V_V_9,
	mc_26_3_light_level_V_V_10,
	mc_26_3_light_level_V_V_11,
	mc_26_3_light_level_V_V_12,
	mc_26_3_light_level_V_V_13,
	mc_26_3_light_level_V_V_14,
	mc_26_3_light_level_V_V_15,
} mc_26_3_light_level;

typedef struct {
	mc_26_3_light_level level;
	b8 waterlogged;
} mc_26_3_light_properties;

typedef enum {
	mc_26_3_light_blue_banner_rotation_V_V_0,
	mc_26_3_light_blue_banner_rotation_V_V_1,
	mc_26_3_light_blue_banner_rotation_V_V_2,
	mc_26_3_light_blue_banner_rotation_V_V_3,
	mc_26_3_light_blue_banner_rotation_V_V_4,
	mc_26_3_light_blue_banner_rotation_V_V_5,
	mc_26_3_light_blue_banner_rotation_V_V_6,
	mc_26_3_light_blue_banner_rotation_V_V_7,
	mc_26_3_light_blue_banner_rotation_V_V_8,
	mc_26_3_light_blue_banner_rotation_V_V_9,
	mc_26_3_light_blue_banner_rotation_V_V_10,
	mc_26_3_light_blue_banner_rotation_V_V_11,
	mc_26_3_light_blue_banner_rotation_V_V_12,
	mc_26_3_light_blue_banner_rotation_V_V_13,
	mc_26_3_light_blue_banner_rotation_V_V_14,
	mc_26_3_light_blue_banner_rotation_V_V_15,
} mc_26_3_light_blue_banner_rotation;

typedef struct {
	mc_26_3_light_blue_banner_rotation rotation;
} mc_26_3_light_blue_banner_properties;

typedef enum {
	mc_26_3_light_blue_bed_facing_V_NORTH,
	mc_26_3_light_blue_bed_facing_V_SOUTH,
	mc_26_3_light_blue_bed_facing_V_WEST,
	mc_26_3_light_blue_bed_facing_V_EAST,
} mc_26_3_light_blue_bed_facing;

typedef enum {
	mc_26_3_light_blue_bed_part_V_HEAD,
	mc_26_3_light_blue_bed_part_V_FOOT,
} mc_26_3_light_blue_bed_part;

typedef struct {
	mc_26_3_light_blue_bed_facing facing;
	b8 occupied;
	mc_26_3_light_blue_bed_part part;
} mc_26_3_light_blue_bed_properties;

typedef enum {
	mc_26_3_light_blue_candle_candles_V_V_1,
	mc_26_3_light_blue_candle_candles_V_V_2,
	mc_26_3_light_blue_candle_candles_V_V_3,
	mc_26_3_light_blue_candle_candles_V_V_4,
} mc_26_3_light_blue_candle_candles;

typedef struct {
	mc_26_3_light_blue_candle_candles candles;
	b8 lit;
	b8 waterlogged;
} mc_26_3_light_blue_candle_properties;

typedef struct {
	b8 lit;
} mc_26_3_light_blue_candle_cake_properties;

typedef enum {
	mc_26_3_light_blue_concrete_slab_type_V_TOP,
	mc_26_3_light_blue_concrete_slab_type_V_BOTTOM,
	mc_26_3_light_blue_concrete_slab_type_V_DOUBLE,
} mc_26_3_light_blue_concrete_slab_type;

typedef struct {
	mc_26_3_light_blue_concrete_slab_type type;
	b8 waterlogged;
} mc_26_3_light_blue_concrete_slab_properties;

typedef enum {
	mc_26_3_light_blue_concrete_stairs_facing_V_NORTH,
	mc_26_3_light_blue_concrete_stairs_facing_V_SOUTH,
	mc_26_3_light_blue_concrete_stairs_facing_V_WEST,
	mc_26_3_light_blue_concrete_stairs_facing_V_EAST,
} mc_26_3_light_blue_concrete_stairs_facing;

typedef enum {
	mc_26_3_light_blue_concrete_stairs_half_V_TOP,
	mc_26_3_light_blue_concrete_stairs_half_V_BOTTOM,
} mc_26_3_light_blue_concrete_stairs_half;

typedef enum {
	mc_26_3_light_blue_concrete_stairs_shape_V_STRAIGHT,
	mc_26_3_light_blue_concrete_stairs_shape_V_INNER_LEFT,
	mc_26_3_light_blue_concrete_stairs_shape_V_INNER_RIGHT,
	mc_26_3_light_blue_concrete_stairs_shape_V_OUTER_LEFT,
	mc_26_3_light_blue_concrete_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_light_blue_concrete_stairs_shape;

typedef struct {
	mc_26_3_light_blue_concrete_stairs_facing facing;
	mc_26_3_light_blue_concrete_stairs_half half;
	mc_26_3_light_blue_concrete_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_light_blue_concrete_stairs_properties;

typedef enum {
	mc_26_3_light_blue_glazed_terracotta_facing_V_NORTH,
	mc_26_3_light_blue_glazed_terracotta_facing_V_SOUTH,
	mc_26_3_light_blue_glazed_terracotta_facing_V_WEST,
	mc_26_3_light_blue_glazed_terracotta_facing_V_EAST,
} mc_26_3_light_blue_glazed_terracotta_facing;

typedef struct {
	mc_26_3_light_blue_glazed_terracotta_facing facing;
} mc_26_3_light_blue_glazed_terracotta_properties;

typedef enum {
	mc_26_3_light_blue_shulker_box_facing_V_NORTH,
	mc_26_3_light_blue_shulker_box_facing_V_EAST,
	mc_26_3_light_blue_shulker_box_facing_V_SOUTH,
	mc_26_3_light_blue_shulker_box_facing_V_WEST,
	mc_26_3_light_blue_shulker_box_facing_V_UP,
	mc_26_3_light_blue_shulker_box_facing_V_DOWN,
} mc_26_3_light_blue_shulker_box_facing;

typedef struct {
	mc_26_3_light_blue_shulker_box_facing facing;
} mc_26_3_light_blue_shulker_box_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_light_blue_stained_glass_pane_properties;

typedef enum {
	mc_26_3_light_blue_wall_banner_facing_V_NORTH,
	mc_26_3_light_blue_wall_banner_facing_V_SOUTH,
	mc_26_3_light_blue_wall_banner_facing_V_WEST,
	mc_26_3_light_blue_wall_banner_facing_V_EAST,
} mc_26_3_light_blue_wall_banner_facing;

typedef struct {
	mc_26_3_light_blue_wall_banner_facing facing;
} mc_26_3_light_blue_wall_banner_properties;

typedef enum {
	mc_26_3_light_blue_wool_slab_type_V_TOP,
	mc_26_3_light_blue_wool_slab_type_V_BOTTOM,
	mc_26_3_light_blue_wool_slab_type_V_DOUBLE,
} mc_26_3_light_blue_wool_slab_type;

typedef struct {
	mc_26_3_light_blue_wool_slab_type type;
	b8 waterlogged;
} mc_26_3_light_blue_wool_slab_properties;

typedef enum {
	mc_26_3_light_blue_wool_stairs_facing_V_NORTH,
	mc_26_3_light_blue_wool_stairs_facing_V_SOUTH,
	mc_26_3_light_blue_wool_stairs_facing_V_WEST,
	mc_26_3_light_blue_wool_stairs_facing_V_EAST,
} mc_26_3_light_blue_wool_stairs_facing;

typedef enum {
	mc_26_3_light_blue_wool_stairs_half_V_TOP,
	mc_26_3_light_blue_wool_stairs_half_V_BOTTOM,
} mc_26_3_light_blue_wool_stairs_half;

typedef enum {
	mc_26_3_light_blue_wool_stairs_shape_V_STRAIGHT,
	mc_26_3_light_blue_wool_stairs_shape_V_INNER_LEFT,
	mc_26_3_light_blue_wool_stairs_shape_V_INNER_RIGHT,
	mc_26_3_light_blue_wool_stairs_shape_V_OUTER_LEFT,
	mc_26_3_light_blue_wool_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_light_blue_wool_stairs_shape;

typedef struct {
	mc_26_3_light_blue_wool_stairs_facing facing;
	mc_26_3_light_blue_wool_stairs_half half;
	mc_26_3_light_blue_wool_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_light_blue_wool_stairs_properties;

typedef enum {
	mc_26_3_light_gray_banner_rotation_V_V_0,
	mc_26_3_light_gray_banner_rotation_V_V_1,
	mc_26_3_light_gray_banner_rotation_V_V_2,
	mc_26_3_light_gray_banner_rotation_V_V_3,
	mc_26_3_light_gray_banner_rotation_V_V_4,
	mc_26_3_light_gray_banner_rotation_V_V_5,
	mc_26_3_light_gray_banner_rotation_V_V_6,
	mc_26_3_light_gray_banner_rotation_V_V_7,
	mc_26_3_light_gray_banner_rotation_V_V_8,
	mc_26_3_light_gray_banner_rotation_V_V_9,
	mc_26_3_light_gray_banner_rotation_V_V_10,
	mc_26_3_light_gray_banner_rotation_V_V_11,
	mc_26_3_light_gray_banner_rotation_V_V_12,
	mc_26_3_light_gray_banner_rotation_V_V_13,
	mc_26_3_light_gray_banner_rotation_V_V_14,
	mc_26_3_light_gray_banner_rotation_V_V_15,
} mc_26_3_light_gray_banner_rotation;

typedef struct {
	mc_26_3_light_gray_banner_rotation rotation;
} mc_26_3_light_gray_banner_properties;

typedef enum {
	mc_26_3_light_gray_bed_facing_V_NORTH,
	mc_26_3_light_gray_bed_facing_V_SOUTH,
	mc_26_3_light_gray_bed_facing_V_WEST,
	mc_26_3_light_gray_bed_facing_V_EAST,
} mc_26_3_light_gray_bed_facing;

typedef enum {
	mc_26_3_light_gray_bed_part_V_HEAD,
	mc_26_3_light_gray_bed_part_V_FOOT,
} mc_26_3_light_gray_bed_part;

typedef struct {
	mc_26_3_light_gray_bed_facing facing;
	b8 occupied;
	mc_26_3_light_gray_bed_part part;
} mc_26_3_light_gray_bed_properties;

typedef enum {
	mc_26_3_light_gray_candle_candles_V_V_1,
	mc_26_3_light_gray_candle_candles_V_V_2,
	mc_26_3_light_gray_candle_candles_V_V_3,
	mc_26_3_light_gray_candle_candles_V_V_4,
} mc_26_3_light_gray_candle_candles;

typedef struct {
	mc_26_3_light_gray_candle_candles candles;
	b8 lit;
	b8 waterlogged;
} mc_26_3_light_gray_candle_properties;

typedef struct {
	b8 lit;
} mc_26_3_light_gray_candle_cake_properties;

typedef enum {
	mc_26_3_light_gray_concrete_slab_type_V_TOP,
	mc_26_3_light_gray_concrete_slab_type_V_BOTTOM,
	mc_26_3_light_gray_concrete_slab_type_V_DOUBLE,
} mc_26_3_light_gray_concrete_slab_type;

typedef struct {
	mc_26_3_light_gray_concrete_slab_type type;
	b8 waterlogged;
} mc_26_3_light_gray_concrete_slab_properties;

typedef enum {
	mc_26_3_light_gray_concrete_stairs_facing_V_NORTH,
	mc_26_3_light_gray_concrete_stairs_facing_V_SOUTH,
	mc_26_3_light_gray_concrete_stairs_facing_V_WEST,
	mc_26_3_light_gray_concrete_stairs_facing_V_EAST,
} mc_26_3_light_gray_concrete_stairs_facing;

typedef enum {
	mc_26_3_light_gray_concrete_stairs_half_V_TOP,
	mc_26_3_light_gray_concrete_stairs_half_V_BOTTOM,
} mc_26_3_light_gray_concrete_stairs_half;

typedef enum {
	mc_26_3_light_gray_concrete_stairs_shape_V_STRAIGHT,
	mc_26_3_light_gray_concrete_stairs_shape_V_INNER_LEFT,
	mc_26_3_light_gray_concrete_stairs_shape_V_INNER_RIGHT,
	mc_26_3_light_gray_concrete_stairs_shape_V_OUTER_LEFT,
	mc_26_3_light_gray_concrete_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_light_gray_concrete_stairs_shape;

typedef struct {
	mc_26_3_light_gray_concrete_stairs_facing facing;
	mc_26_3_light_gray_concrete_stairs_half half;
	mc_26_3_light_gray_concrete_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_light_gray_concrete_stairs_properties;

typedef enum {
	mc_26_3_light_gray_glazed_terracotta_facing_V_NORTH,
	mc_26_3_light_gray_glazed_terracotta_facing_V_SOUTH,
	mc_26_3_light_gray_glazed_terracotta_facing_V_WEST,
	mc_26_3_light_gray_glazed_terracotta_facing_V_EAST,
} mc_26_3_light_gray_glazed_terracotta_facing;

typedef struct {
	mc_26_3_light_gray_glazed_terracotta_facing facing;
} mc_26_3_light_gray_glazed_terracotta_properties;

typedef enum {
	mc_26_3_light_gray_shulker_box_facing_V_NORTH,
	mc_26_3_light_gray_shulker_box_facing_V_EAST,
	mc_26_3_light_gray_shulker_box_facing_V_SOUTH,
	mc_26_3_light_gray_shulker_box_facing_V_WEST,
	mc_26_3_light_gray_shulker_box_facing_V_UP,
	mc_26_3_light_gray_shulker_box_facing_V_DOWN,
} mc_26_3_light_gray_shulker_box_facing;

typedef struct {
	mc_26_3_light_gray_shulker_box_facing facing;
} mc_26_3_light_gray_shulker_box_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_light_gray_stained_glass_pane_properties;

typedef enum {
	mc_26_3_light_gray_wall_banner_facing_V_NORTH,
	mc_26_3_light_gray_wall_banner_facing_V_SOUTH,
	mc_26_3_light_gray_wall_banner_facing_V_WEST,
	mc_26_3_light_gray_wall_banner_facing_V_EAST,
} mc_26_3_light_gray_wall_banner_facing;

typedef struct {
	mc_26_3_light_gray_wall_banner_facing facing;
} mc_26_3_light_gray_wall_banner_properties;

typedef enum {
	mc_26_3_light_gray_wool_slab_type_V_TOP,
	mc_26_3_light_gray_wool_slab_type_V_BOTTOM,
	mc_26_3_light_gray_wool_slab_type_V_DOUBLE,
} mc_26_3_light_gray_wool_slab_type;

typedef struct {
	mc_26_3_light_gray_wool_slab_type type;
	b8 waterlogged;
} mc_26_3_light_gray_wool_slab_properties;

typedef enum {
	mc_26_3_light_gray_wool_stairs_facing_V_NORTH,
	mc_26_3_light_gray_wool_stairs_facing_V_SOUTH,
	mc_26_3_light_gray_wool_stairs_facing_V_WEST,
	mc_26_3_light_gray_wool_stairs_facing_V_EAST,
} mc_26_3_light_gray_wool_stairs_facing;

typedef enum {
	mc_26_3_light_gray_wool_stairs_half_V_TOP,
	mc_26_3_light_gray_wool_stairs_half_V_BOTTOM,
} mc_26_3_light_gray_wool_stairs_half;

typedef enum {
	mc_26_3_light_gray_wool_stairs_shape_V_STRAIGHT,
	mc_26_3_light_gray_wool_stairs_shape_V_INNER_LEFT,
	mc_26_3_light_gray_wool_stairs_shape_V_INNER_RIGHT,
	mc_26_3_light_gray_wool_stairs_shape_V_OUTER_LEFT,
	mc_26_3_light_gray_wool_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_light_gray_wool_stairs_shape;

typedef struct {
	mc_26_3_light_gray_wool_stairs_facing facing;
	mc_26_3_light_gray_wool_stairs_half half;
	mc_26_3_light_gray_wool_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_light_gray_wool_stairs_properties;

typedef enum {
	mc_26_3_light_weighted_pressure_plate_power_V_V_0,
	mc_26_3_light_weighted_pressure_plate_power_V_V_1,
	mc_26_3_light_weighted_pressure_plate_power_V_V_2,
	mc_26_3_light_weighted_pressure_plate_power_V_V_3,
	mc_26_3_light_weighted_pressure_plate_power_V_V_4,
	mc_26_3_light_weighted_pressure_plate_power_V_V_5,
	mc_26_3_light_weighted_pressure_plate_power_V_V_6,
	mc_26_3_light_weighted_pressure_plate_power_V_V_7,
	mc_26_3_light_weighted_pressure_plate_power_V_V_8,
	mc_26_3_light_weighted_pressure_plate_power_V_V_9,
	mc_26_3_light_weighted_pressure_plate_power_V_V_10,
	mc_26_3_light_weighted_pressure_plate_power_V_V_11,
	mc_26_3_light_weighted_pressure_plate_power_V_V_12,
	mc_26_3_light_weighted_pressure_plate_power_V_V_13,
	mc_26_3_light_weighted_pressure_plate_power_V_V_14,
	mc_26_3_light_weighted_pressure_plate_power_V_V_15,
} mc_26_3_light_weighted_pressure_plate_power;

typedef struct {
	mc_26_3_light_weighted_pressure_plate_power power;
} mc_26_3_light_weighted_pressure_plate_properties;

typedef enum {
	mc_26_3_lightning_rod_facing_V_NORTH,
	mc_26_3_lightning_rod_facing_V_EAST,
	mc_26_3_lightning_rod_facing_V_SOUTH,
	mc_26_3_lightning_rod_facing_V_WEST,
	mc_26_3_lightning_rod_facing_V_UP,
	mc_26_3_lightning_rod_facing_V_DOWN,
} mc_26_3_lightning_rod_facing;

typedef struct {
	mc_26_3_lightning_rod_facing facing;
	b8 powered;
	b8 waterlogged;
} mc_26_3_lightning_rod_properties;

typedef enum {
	mc_26_3_lilac_half_V_UPPER,
	mc_26_3_lilac_half_V_LOWER,
} mc_26_3_lilac_half;

typedef struct {
	mc_26_3_lilac_half half;
} mc_26_3_lilac_properties;

typedef enum {
	mc_26_3_lime_banner_rotation_V_V_0,
	mc_26_3_lime_banner_rotation_V_V_1,
	mc_26_3_lime_banner_rotation_V_V_2,
	mc_26_3_lime_banner_rotation_V_V_3,
	mc_26_3_lime_banner_rotation_V_V_4,
	mc_26_3_lime_banner_rotation_V_V_5,
	mc_26_3_lime_banner_rotation_V_V_6,
	mc_26_3_lime_banner_rotation_V_V_7,
	mc_26_3_lime_banner_rotation_V_V_8,
	mc_26_3_lime_banner_rotation_V_V_9,
	mc_26_3_lime_banner_rotation_V_V_10,
	mc_26_3_lime_banner_rotation_V_V_11,
	mc_26_3_lime_banner_rotation_V_V_12,
	mc_26_3_lime_banner_rotation_V_V_13,
	mc_26_3_lime_banner_rotation_V_V_14,
	mc_26_3_lime_banner_rotation_V_V_15,
} mc_26_3_lime_banner_rotation;

typedef struct {
	mc_26_3_lime_banner_rotation rotation;
} mc_26_3_lime_banner_properties;

typedef enum {
	mc_26_3_lime_bed_facing_V_NORTH,
	mc_26_3_lime_bed_facing_V_SOUTH,
	mc_26_3_lime_bed_facing_V_WEST,
	mc_26_3_lime_bed_facing_V_EAST,
} mc_26_3_lime_bed_facing;

typedef enum {
	mc_26_3_lime_bed_part_V_HEAD,
	mc_26_3_lime_bed_part_V_FOOT,
} mc_26_3_lime_bed_part;

typedef struct {
	mc_26_3_lime_bed_facing facing;
	b8 occupied;
	mc_26_3_lime_bed_part part;
} mc_26_3_lime_bed_properties;

typedef enum {
	mc_26_3_lime_candle_candles_V_V_1,
	mc_26_3_lime_candle_candles_V_V_2,
	mc_26_3_lime_candle_candles_V_V_3,
	mc_26_3_lime_candle_candles_V_V_4,
} mc_26_3_lime_candle_candles;

typedef struct {
	mc_26_3_lime_candle_candles candles;
	b8 lit;
	b8 waterlogged;
} mc_26_3_lime_candle_properties;

typedef struct {
	b8 lit;
} mc_26_3_lime_candle_cake_properties;

typedef enum {
	mc_26_3_lime_concrete_slab_type_V_TOP,
	mc_26_3_lime_concrete_slab_type_V_BOTTOM,
	mc_26_3_lime_concrete_slab_type_V_DOUBLE,
} mc_26_3_lime_concrete_slab_type;

typedef struct {
	mc_26_3_lime_concrete_slab_type type;
	b8 waterlogged;
} mc_26_3_lime_concrete_slab_properties;

typedef enum {
	mc_26_3_lime_concrete_stairs_facing_V_NORTH,
	mc_26_3_lime_concrete_stairs_facing_V_SOUTH,
	mc_26_3_lime_concrete_stairs_facing_V_WEST,
	mc_26_3_lime_concrete_stairs_facing_V_EAST,
} mc_26_3_lime_concrete_stairs_facing;

typedef enum {
	mc_26_3_lime_concrete_stairs_half_V_TOP,
	mc_26_3_lime_concrete_stairs_half_V_BOTTOM,
} mc_26_3_lime_concrete_stairs_half;

typedef enum {
	mc_26_3_lime_concrete_stairs_shape_V_STRAIGHT,
	mc_26_3_lime_concrete_stairs_shape_V_INNER_LEFT,
	mc_26_3_lime_concrete_stairs_shape_V_INNER_RIGHT,
	mc_26_3_lime_concrete_stairs_shape_V_OUTER_LEFT,
	mc_26_3_lime_concrete_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_lime_concrete_stairs_shape;

typedef struct {
	mc_26_3_lime_concrete_stairs_facing facing;
	mc_26_3_lime_concrete_stairs_half half;
	mc_26_3_lime_concrete_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_lime_concrete_stairs_properties;

typedef enum {
	mc_26_3_lime_glazed_terracotta_facing_V_NORTH,
	mc_26_3_lime_glazed_terracotta_facing_V_SOUTH,
	mc_26_3_lime_glazed_terracotta_facing_V_WEST,
	mc_26_3_lime_glazed_terracotta_facing_V_EAST,
} mc_26_3_lime_glazed_terracotta_facing;

typedef struct {
	mc_26_3_lime_glazed_terracotta_facing facing;
} mc_26_3_lime_glazed_terracotta_properties;

typedef enum {
	mc_26_3_lime_shulker_box_facing_V_NORTH,
	mc_26_3_lime_shulker_box_facing_V_EAST,
	mc_26_3_lime_shulker_box_facing_V_SOUTH,
	mc_26_3_lime_shulker_box_facing_V_WEST,
	mc_26_3_lime_shulker_box_facing_V_UP,
	mc_26_3_lime_shulker_box_facing_V_DOWN,
} mc_26_3_lime_shulker_box_facing;

typedef struct {
	mc_26_3_lime_shulker_box_facing facing;
} mc_26_3_lime_shulker_box_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_lime_stained_glass_pane_properties;

typedef enum {
	mc_26_3_lime_wall_banner_facing_V_NORTH,
	mc_26_3_lime_wall_banner_facing_V_SOUTH,
	mc_26_3_lime_wall_banner_facing_V_WEST,
	mc_26_3_lime_wall_banner_facing_V_EAST,
} mc_26_3_lime_wall_banner_facing;

typedef struct {
	mc_26_3_lime_wall_banner_facing facing;
} mc_26_3_lime_wall_banner_properties;

typedef enum {
	mc_26_3_lime_wool_slab_type_V_TOP,
	mc_26_3_lime_wool_slab_type_V_BOTTOM,
	mc_26_3_lime_wool_slab_type_V_DOUBLE,
} mc_26_3_lime_wool_slab_type;

typedef struct {
	mc_26_3_lime_wool_slab_type type;
	b8 waterlogged;
} mc_26_3_lime_wool_slab_properties;

typedef enum {
	mc_26_3_lime_wool_stairs_facing_V_NORTH,
	mc_26_3_lime_wool_stairs_facing_V_SOUTH,
	mc_26_3_lime_wool_stairs_facing_V_WEST,
	mc_26_3_lime_wool_stairs_facing_V_EAST,
} mc_26_3_lime_wool_stairs_facing;

typedef enum {
	mc_26_3_lime_wool_stairs_half_V_TOP,
	mc_26_3_lime_wool_stairs_half_V_BOTTOM,
} mc_26_3_lime_wool_stairs_half;

typedef enum {
	mc_26_3_lime_wool_stairs_shape_V_STRAIGHT,
	mc_26_3_lime_wool_stairs_shape_V_INNER_LEFT,
	mc_26_3_lime_wool_stairs_shape_V_INNER_RIGHT,
	mc_26_3_lime_wool_stairs_shape_V_OUTER_LEFT,
	mc_26_3_lime_wool_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_lime_wool_stairs_shape;

typedef struct {
	mc_26_3_lime_wool_stairs_facing facing;
	mc_26_3_lime_wool_stairs_half half;
	mc_26_3_lime_wool_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_lime_wool_stairs_properties;

typedef enum {
	mc_26_3_loom_facing_V_NORTH,
	mc_26_3_loom_facing_V_SOUTH,
	mc_26_3_loom_facing_V_WEST,
	mc_26_3_loom_facing_V_EAST,
} mc_26_3_loom_facing;

typedef struct {
	mc_26_3_loom_facing facing;
} mc_26_3_loom_properties;

typedef enum {
	mc_26_3_magenta_banner_rotation_V_V_0,
	mc_26_3_magenta_banner_rotation_V_V_1,
	mc_26_3_magenta_banner_rotation_V_V_2,
	mc_26_3_magenta_banner_rotation_V_V_3,
	mc_26_3_magenta_banner_rotation_V_V_4,
	mc_26_3_magenta_banner_rotation_V_V_5,
	mc_26_3_magenta_banner_rotation_V_V_6,
	mc_26_3_magenta_banner_rotation_V_V_7,
	mc_26_3_magenta_banner_rotation_V_V_8,
	mc_26_3_magenta_banner_rotation_V_V_9,
	mc_26_3_magenta_banner_rotation_V_V_10,
	mc_26_3_magenta_banner_rotation_V_V_11,
	mc_26_3_magenta_banner_rotation_V_V_12,
	mc_26_3_magenta_banner_rotation_V_V_13,
	mc_26_3_magenta_banner_rotation_V_V_14,
	mc_26_3_magenta_banner_rotation_V_V_15,
} mc_26_3_magenta_banner_rotation;

typedef struct {
	mc_26_3_magenta_banner_rotation rotation;
} mc_26_3_magenta_banner_properties;

typedef enum {
	mc_26_3_magenta_bed_facing_V_NORTH,
	mc_26_3_magenta_bed_facing_V_SOUTH,
	mc_26_3_magenta_bed_facing_V_WEST,
	mc_26_3_magenta_bed_facing_V_EAST,
} mc_26_3_magenta_bed_facing;

typedef enum {
	mc_26_3_magenta_bed_part_V_HEAD,
	mc_26_3_magenta_bed_part_V_FOOT,
} mc_26_3_magenta_bed_part;

typedef struct {
	mc_26_3_magenta_bed_facing facing;
	b8 occupied;
	mc_26_3_magenta_bed_part part;
} mc_26_3_magenta_bed_properties;

typedef enum {
	mc_26_3_magenta_candle_candles_V_V_1,
	mc_26_3_magenta_candle_candles_V_V_2,
	mc_26_3_magenta_candle_candles_V_V_3,
	mc_26_3_magenta_candle_candles_V_V_4,
} mc_26_3_magenta_candle_candles;

typedef struct {
	mc_26_3_magenta_candle_candles candles;
	b8 lit;
	b8 waterlogged;
} mc_26_3_magenta_candle_properties;

typedef struct {
	b8 lit;
} mc_26_3_magenta_candle_cake_properties;

typedef enum {
	mc_26_3_magenta_concrete_slab_type_V_TOP,
	mc_26_3_magenta_concrete_slab_type_V_BOTTOM,
	mc_26_3_magenta_concrete_slab_type_V_DOUBLE,
} mc_26_3_magenta_concrete_slab_type;

typedef struct {
	mc_26_3_magenta_concrete_slab_type type;
	b8 waterlogged;
} mc_26_3_magenta_concrete_slab_properties;

typedef enum {
	mc_26_3_magenta_concrete_stairs_facing_V_NORTH,
	mc_26_3_magenta_concrete_stairs_facing_V_SOUTH,
	mc_26_3_magenta_concrete_stairs_facing_V_WEST,
	mc_26_3_magenta_concrete_stairs_facing_V_EAST,
} mc_26_3_magenta_concrete_stairs_facing;

typedef enum {
	mc_26_3_magenta_concrete_stairs_half_V_TOP,
	mc_26_3_magenta_concrete_stairs_half_V_BOTTOM,
} mc_26_3_magenta_concrete_stairs_half;

typedef enum {
	mc_26_3_magenta_concrete_stairs_shape_V_STRAIGHT,
	mc_26_3_magenta_concrete_stairs_shape_V_INNER_LEFT,
	mc_26_3_magenta_concrete_stairs_shape_V_INNER_RIGHT,
	mc_26_3_magenta_concrete_stairs_shape_V_OUTER_LEFT,
	mc_26_3_magenta_concrete_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_magenta_concrete_stairs_shape;

typedef struct {
	mc_26_3_magenta_concrete_stairs_facing facing;
	mc_26_3_magenta_concrete_stairs_half half;
	mc_26_3_magenta_concrete_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_magenta_concrete_stairs_properties;

typedef enum {
	mc_26_3_magenta_glazed_terracotta_facing_V_NORTH,
	mc_26_3_magenta_glazed_terracotta_facing_V_SOUTH,
	mc_26_3_magenta_glazed_terracotta_facing_V_WEST,
	mc_26_3_magenta_glazed_terracotta_facing_V_EAST,
} mc_26_3_magenta_glazed_terracotta_facing;

typedef struct {
	mc_26_3_magenta_glazed_terracotta_facing facing;
} mc_26_3_magenta_glazed_terracotta_properties;

typedef enum {
	mc_26_3_magenta_shulker_box_facing_V_NORTH,
	mc_26_3_magenta_shulker_box_facing_V_EAST,
	mc_26_3_magenta_shulker_box_facing_V_SOUTH,
	mc_26_3_magenta_shulker_box_facing_V_WEST,
	mc_26_3_magenta_shulker_box_facing_V_UP,
	mc_26_3_magenta_shulker_box_facing_V_DOWN,
} mc_26_3_magenta_shulker_box_facing;

typedef struct {
	mc_26_3_magenta_shulker_box_facing facing;
} mc_26_3_magenta_shulker_box_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_magenta_stained_glass_pane_properties;

typedef enum {
	mc_26_3_magenta_wall_banner_facing_V_NORTH,
	mc_26_3_magenta_wall_banner_facing_V_SOUTH,
	mc_26_3_magenta_wall_banner_facing_V_WEST,
	mc_26_3_magenta_wall_banner_facing_V_EAST,
} mc_26_3_magenta_wall_banner_facing;

typedef struct {
	mc_26_3_magenta_wall_banner_facing facing;
} mc_26_3_magenta_wall_banner_properties;

typedef enum {
	mc_26_3_magenta_wool_slab_type_V_TOP,
	mc_26_3_magenta_wool_slab_type_V_BOTTOM,
	mc_26_3_magenta_wool_slab_type_V_DOUBLE,
} mc_26_3_magenta_wool_slab_type;

typedef struct {
	mc_26_3_magenta_wool_slab_type type;
	b8 waterlogged;
} mc_26_3_magenta_wool_slab_properties;

typedef enum {
	mc_26_3_magenta_wool_stairs_facing_V_NORTH,
	mc_26_3_magenta_wool_stairs_facing_V_SOUTH,
	mc_26_3_magenta_wool_stairs_facing_V_WEST,
	mc_26_3_magenta_wool_stairs_facing_V_EAST,
} mc_26_3_magenta_wool_stairs_facing;

typedef enum {
	mc_26_3_magenta_wool_stairs_half_V_TOP,
	mc_26_3_magenta_wool_stairs_half_V_BOTTOM,
} mc_26_3_magenta_wool_stairs_half;

typedef enum {
	mc_26_3_magenta_wool_stairs_shape_V_STRAIGHT,
	mc_26_3_magenta_wool_stairs_shape_V_INNER_LEFT,
	mc_26_3_magenta_wool_stairs_shape_V_INNER_RIGHT,
	mc_26_3_magenta_wool_stairs_shape_V_OUTER_LEFT,
	mc_26_3_magenta_wool_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_magenta_wool_stairs_shape;

typedef struct {
	mc_26_3_magenta_wool_stairs_facing facing;
	mc_26_3_magenta_wool_stairs_half half;
	mc_26_3_magenta_wool_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_magenta_wool_stairs_properties;

typedef enum {
	mc_26_3_mangrove_button_face_V_FLOOR,
	mc_26_3_mangrove_button_face_V_WALL,
	mc_26_3_mangrove_button_face_V_CEILING,
} mc_26_3_mangrove_button_face;

typedef enum {
	mc_26_3_mangrove_button_facing_V_NORTH,
	mc_26_3_mangrove_button_facing_V_SOUTH,
	mc_26_3_mangrove_button_facing_V_WEST,
	mc_26_3_mangrove_button_facing_V_EAST,
} mc_26_3_mangrove_button_facing;

typedef struct {
	mc_26_3_mangrove_button_face face;
	mc_26_3_mangrove_button_facing facing;
	b8 powered;
} mc_26_3_mangrove_button_properties;

typedef enum {
	mc_26_3_mangrove_door_facing_V_NORTH,
	mc_26_3_mangrove_door_facing_V_SOUTH,
	mc_26_3_mangrove_door_facing_V_WEST,
	mc_26_3_mangrove_door_facing_V_EAST,
} mc_26_3_mangrove_door_facing;

typedef enum {
	mc_26_3_mangrove_door_half_V_UPPER,
	mc_26_3_mangrove_door_half_V_LOWER,
} mc_26_3_mangrove_door_half;

typedef enum {
	mc_26_3_mangrove_door_hinge_V_LEFT,
	mc_26_3_mangrove_door_hinge_V_RIGHT,
} mc_26_3_mangrove_door_hinge;

typedef struct {
	mc_26_3_mangrove_door_facing facing;
	mc_26_3_mangrove_door_half half;
	mc_26_3_mangrove_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_mangrove_door_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_mangrove_fence_properties;

typedef enum {
	mc_26_3_mangrove_fence_gate_facing_V_NORTH,
	mc_26_3_mangrove_fence_gate_facing_V_SOUTH,
	mc_26_3_mangrove_fence_gate_facing_V_WEST,
	mc_26_3_mangrove_fence_gate_facing_V_EAST,
} mc_26_3_mangrove_fence_gate_facing;

typedef struct {
	mc_26_3_mangrove_fence_gate_facing facing;
	b8 in_wall;
	b8 open;
	b8 powered;
} mc_26_3_mangrove_fence_gate_properties;

typedef enum {
	mc_26_3_mangrove_hanging_sign_rotation_V_V_0,
	mc_26_3_mangrove_hanging_sign_rotation_V_V_1,
	mc_26_3_mangrove_hanging_sign_rotation_V_V_2,
	mc_26_3_mangrove_hanging_sign_rotation_V_V_3,
	mc_26_3_mangrove_hanging_sign_rotation_V_V_4,
	mc_26_3_mangrove_hanging_sign_rotation_V_V_5,
	mc_26_3_mangrove_hanging_sign_rotation_V_V_6,
	mc_26_3_mangrove_hanging_sign_rotation_V_V_7,
	mc_26_3_mangrove_hanging_sign_rotation_V_V_8,
	mc_26_3_mangrove_hanging_sign_rotation_V_V_9,
	mc_26_3_mangrove_hanging_sign_rotation_V_V_10,
	mc_26_3_mangrove_hanging_sign_rotation_V_V_11,
	mc_26_3_mangrove_hanging_sign_rotation_V_V_12,
	mc_26_3_mangrove_hanging_sign_rotation_V_V_13,
	mc_26_3_mangrove_hanging_sign_rotation_V_V_14,
	mc_26_3_mangrove_hanging_sign_rotation_V_V_15,
} mc_26_3_mangrove_hanging_sign_rotation;

typedef struct {
	b8 attached;
	mc_26_3_mangrove_hanging_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_mangrove_hanging_sign_properties;

typedef enum {
	mc_26_3_mangrove_leaves_distance_V_V_1,
	mc_26_3_mangrove_leaves_distance_V_V_2,
	mc_26_3_mangrove_leaves_distance_V_V_3,
	mc_26_3_mangrove_leaves_distance_V_V_4,
	mc_26_3_mangrove_leaves_distance_V_V_5,
	mc_26_3_mangrove_leaves_distance_V_V_6,
	mc_26_3_mangrove_leaves_distance_V_V_7,
} mc_26_3_mangrove_leaves_distance;

typedef struct {
	mc_26_3_mangrove_leaves_distance distance;
	b8 persistent;
	b8 waterlogged;
} mc_26_3_mangrove_leaves_properties;

typedef enum {
	mc_26_3_mangrove_log_axis_V_X,
	mc_26_3_mangrove_log_axis_V_Y,
	mc_26_3_mangrove_log_axis_V_Z,
} mc_26_3_mangrove_log_axis;

typedef struct {
	mc_26_3_mangrove_log_axis axis;
} mc_26_3_mangrove_log_properties;

typedef struct {
	b8 powered;
} mc_26_3_mangrove_pressure_plate_properties;

typedef enum {
	mc_26_3_mangrove_propagule_age_V_V_0,
	mc_26_3_mangrove_propagule_age_V_V_1,
	mc_26_3_mangrove_propagule_age_V_V_2,
	mc_26_3_mangrove_propagule_age_V_V_3,
	mc_26_3_mangrove_propagule_age_V_V_4,
} mc_26_3_mangrove_propagule_age;

typedef enum {
	mc_26_3_mangrove_propagule_stage_V_V_0,
	mc_26_3_mangrove_propagule_stage_V_V_1,
} mc_26_3_mangrove_propagule_stage;

typedef struct {
	mc_26_3_mangrove_propagule_age age;
	b8 hanging;
	mc_26_3_mangrove_propagule_stage stage;
	b8 waterlogged;
} mc_26_3_mangrove_propagule_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_mangrove_roots_properties;

typedef enum {
	mc_26_3_mangrove_shelf_facing_V_NORTH,
	mc_26_3_mangrove_shelf_facing_V_SOUTH,
	mc_26_3_mangrove_shelf_facing_V_WEST,
	mc_26_3_mangrove_shelf_facing_V_EAST,
} mc_26_3_mangrove_shelf_facing;

typedef enum {
	mc_26_3_mangrove_shelf_side_chain_V_UNCONNECTED,
	mc_26_3_mangrove_shelf_side_chain_V_RIGHT,
	mc_26_3_mangrove_shelf_side_chain_V_CENTER,
	mc_26_3_mangrove_shelf_side_chain_V_LEFT,
} mc_26_3_mangrove_shelf_side_chain;

typedef struct {
	mc_26_3_mangrove_shelf_facing facing;
	b8 powered;
	mc_26_3_mangrove_shelf_side_chain side_chain;
	b8 waterlogged;
} mc_26_3_mangrove_shelf_properties;

typedef enum {
	mc_26_3_mangrove_sign_rotation_V_V_0,
	mc_26_3_mangrove_sign_rotation_V_V_1,
	mc_26_3_mangrove_sign_rotation_V_V_2,
	mc_26_3_mangrove_sign_rotation_V_V_3,
	mc_26_3_mangrove_sign_rotation_V_V_4,
	mc_26_3_mangrove_sign_rotation_V_V_5,
	mc_26_3_mangrove_sign_rotation_V_V_6,
	mc_26_3_mangrove_sign_rotation_V_V_7,
	mc_26_3_mangrove_sign_rotation_V_V_8,
	mc_26_3_mangrove_sign_rotation_V_V_9,
	mc_26_3_mangrove_sign_rotation_V_V_10,
	mc_26_3_mangrove_sign_rotation_V_V_11,
	mc_26_3_mangrove_sign_rotation_V_V_12,
	mc_26_3_mangrove_sign_rotation_V_V_13,
	mc_26_3_mangrove_sign_rotation_V_V_14,
	mc_26_3_mangrove_sign_rotation_V_V_15,
} mc_26_3_mangrove_sign_rotation;

typedef struct {
	mc_26_3_mangrove_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_mangrove_sign_properties;

typedef enum {
	mc_26_3_mangrove_slab_type_V_TOP,
	mc_26_3_mangrove_slab_type_V_BOTTOM,
	mc_26_3_mangrove_slab_type_V_DOUBLE,
} mc_26_3_mangrove_slab_type;

typedef struct {
	mc_26_3_mangrove_slab_type type;
	b8 waterlogged;
} mc_26_3_mangrove_slab_properties;

typedef enum {
	mc_26_3_mangrove_stairs_facing_V_NORTH,
	mc_26_3_mangrove_stairs_facing_V_SOUTH,
	mc_26_3_mangrove_stairs_facing_V_WEST,
	mc_26_3_mangrove_stairs_facing_V_EAST,
} mc_26_3_mangrove_stairs_facing;

typedef enum {
	mc_26_3_mangrove_stairs_half_V_TOP,
	mc_26_3_mangrove_stairs_half_V_BOTTOM,
} mc_26_3_mangrove_stairs_half;

typedef enum {
	mc_26_3_mangrove_stairs_shape_V_STRAIGHT,
	mc_26_3_mangrove_stairs_shape_V_INNER_LEFT,
	mc_26_3_mangrove_stairs_shape_V_INNER_RIGHT,
	mc_26_3_mangrove_stairs_shape_V_OUTER_LEFT,
	mc_26_3_mangrove_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_mangrove_stairs_shape;

typedef struct {
	mc_26_3_mangrove_stairs_facing facing;
	mc_26_3_mangrove_stairs_half half;
	mc_26_3_mangrove_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_mangrove_stairs_properties;

typedef enum {
	mc_26_3_mangrove_trapdoor_facing_V_NORTH,
	mc_26_3_mangrove_trapdoor_facing_V_SOUTH,
	mc_26_3_mangrove_trapdoor_facing_V_WEST,
	mc_26_3_mangrove_trapdoor_facing_V_EAST,
} mc_26_3_mangrove_trapdoor_facing;

typedef enum {
	mc_26_3_mangrove_trapdoor_half_V_TOP,
	mc_26_3_mangrove_trapdoor_half_V_BOTTOM,
} mc_26_3_mangrove_trapdoor_half;

typedef struct {
	mc_26_3_mangrove_trapdoor_facing facing;
	mc_26_3_mangrove_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_mangrove_trapdoor_properties;

typedef enum {
	mc_26_3_mangrove_wall_hanging_sign_facing_V_NORTH,
	mc_26_3_mangrove_wall_hanging_sign_facing_V_SOUTH,
	mc_26_3_mangrove_wall_hanging_sign_facing_V_WEST,
	mc_26_3_mangrove_wall_hanging_sign_facing_V_EAST,
} mc_26_3_mangrove_wall_hanging_sign_facing;

typedef struct {
	mc_26_3_mangrove_wall_hanging_sign_facing facing;
	b8 waterlogged;
} mc_26_3_mangrove_wall_hanging_sign_properties;

typedef enum {
	mc_26_3_mangrove_wall_sign_facing_V_NORTH,
	mc_26_3_mangrove_wall_sign_facing_V_SOUTH,
	mc_26_3_mangrove_wall_sign_facing_V_WEST,
	mc_26_3_mangrove_wall_sign_facing_V_EAST,
} mc_26_3_mangrove_wall_sign_facing;

typedef struct {
	mc_26_3_mangrove_wall_sign_facing facing;
	b8 waterlogged;
} mc_26_3_mangrove_wall_sign_properties;

typedef enum {
	mc_26_3_mangrove_wood_axis_V_X,
	mc_26_3_mangrove_wood_axis_V_Y,
	mc_26_3_mangrove_wood_axis_V_Z,
} mc_26_3_mangrove_wood_axis;

typedef struct {
	mc_26_3_mangrove_wood_axis axis;
} mc_26_3_mangrove_wood_properties;

typedef enum {
	mc_26_3_medium_amethyst_bud_facing_V_NORTH,
	mc_26_3_medium_amethyst_bud_facing_V_EAST,
	mc_26_3_medium_amethyst_bud_facing_V_SOUTH,
	mc_26_3_medium_amethyst_bud_facing_V_WEST,
	mc_26_3_medium_amethyst_bud_facing_V_UP,
	mc_26_3_medium_amethyst_bud_facing_V_DOWN,
} mc_26_3_medium_amethyst_bud_facing;

typedef struct {
	mc_26_3_medium_amethyst_bud_facing facing;
	b8 waterlogged;
} mc_26_3_medium_amethyst_bud_properties;

typedef enum {
	mc_26_3_melon_stem_age_V_V_0,
	mc_26_3_melon_stem_age_V_V_1,
	mc_26_3_melon_stem_age_V_V_2,
	mc_26_3_melon_stem_age_V_V_3,
	mc_26_3_melon_stem_age_V_V_4,
	mc_26_3_melon_stem_age_V_V_5,
	mc_26_3_melon_stem_age_V_V_6,
	mc_26_3_melon_stem_age_V_V_7,
} mc_26_3_melon_stem_age;

typedef struct {
	mc_26_3_melon_stem_age age;
} mc_26_3_melon_stem_properties;

typedef enum {
	mc_26_3_mossy_cobblestone_slab_type_V_TOP,
	mc_26_3_mossy_cobblestone_slab_type_V_BOTTOM,
	mc_26_3_mossy_cobblestone_slab_type_V_DOUBLE,
} mc_26_3_mossy_cobblestone_slab_type;

typedef struct {
	mc_26_3_mossy_cobblestone_slab_type type;
	b8 waterlogged;
} mc_26_3_mossy_cobblestone_slab_properties;

typedef enum {
	mc_26_3_mossy_cobblestone_stairs_facing_V_NORTH,
	mc_26_3_mossy_cobblestone_stairs_facing_V_SOUTH,
	mc_26_3_mossy_cobblestone_stairs_facing_V_WEST,
	mc_26_3_mossy_cobblestone_stairs_facing_V_EAST,
} mc_26_3_mossy_cobblestone_stairs_facing;

typedef enum {
	mc_26_3_mossy_cobblestone_stairs_half_V_TOP,
	mc_26_3_mossy_cobblestone_stairs_half_V_BOTTOM,
} mc_26_3_mossy_cobblestone_stairs_half;

typedef enum {
	mc_26_3_mossy_cobblestone_stairs_shape_V_STRAIGHT,
	mc_26_3_mossy_cobblestone_stairs_shape_V_INNER_LEFT,
	mc_26_3_mossy_cobblestone_stairs_shape_V_INNER_RIGHT,
	mc_26_3_mossy_cobblestone_stairs_shape_V_OUTER_LEFT,
	mc_26_3_mossy_cobblestone_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_mossy_cobblestone_stairs_shape;

typedef struct {
	mc_26_3_mossy_cobblestone_stairs_facing facing;
	mc_26_3_mossy_cobblestone_stairs_half half;
	mc_26_3_mossy_cobblestone_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_mossy_cobblestone_stairs_properties;

typedef enum {
	mc_26_3_mossy_cobblestone_wall_east_V_NONE,
	mc_26_3_mossy_cobblestone_wall_east_V_LOW,
	mc_26_3_mossy_cobblestone_wall_east_V_TALL,
} mc_26_3_mossy_cobblestone_wall_east;

typedef enum {
	mc_26_3_mossy_cobblestone_wall_north_V_NONE,
	mc_26_3_mossy_cobblestone_wall_north_V_LOW,
	mc_26_3_mossy_cobblestone_wall_north_V_TALL,
} mc_26_3_mossy_cobblestone_wall_north;

typedef enum {
	mc_26_3_mossy_cobblestone_wall_south_V_NONE,
	mc_26_3_mossy_cobblestone_wall_south_V_LOW,
	mc_26_3_mossy_cobblestone_wall_south_V_TALL,
} mc_26_3_mossy_cobblestone_wall_south;

typedef enum {
	mc_26_3_mossy_cobblestone_wall_west_V_NONE,
	mc_26_3_mossy_cobblestone_wall_west_V_LOW,
	mc_26_3_mossy_cobblestone_wall_west_V_TALL,
} mc_26_3_mossy_cobblestone_wall_west;

typedef struct {
	mc_26_3_mossy_cobblestone_wall_east east;
	mc_26_3_mossy_cobblestone_wall_north north;
	mc_26_3_mossy_cobblestone_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_mossy_cobblestone_wall_west west;
} mc_26_3_mossy_cobblestone_wall_properties;

typedef enum {
	mc_26_3_mossy_stone_brick_slab_type_V_TOP,
	mc_26_3_mossy_stone_brick_slab_type_V_BOTTOM,
	mc_26_3_mossy_stone_brick_slab_type_V_DOUBLE,
} mc_26_3_mossy_stone_brick_slab_type;

typedef struct {
	mc_26_3_mossy_stone_brick_slab_type type;
	b8 waterlogged;
} mc_26_3_mossy_stone_brick_slab_properties;

typedef enum {
	mc_26_3_mossy_stone_brick_stairs_facing_V_NORTH,
	mc_26_3_mossy_stone_brick_stairs_facing_V_SOUTH,
	mc_26_3_mossy_stone_brick_stairs_facing_V_WEST,
	mc_26_3_mossy_stone_brick_stairs_facing_V_EAST,
} mc_26_3_mossy_stone_brick_stairs_facing;

typedef enum {
	mc_26_3_mossy_stone_brick_stairs_half_V_TOP,
	mc_26_3_mossy_stone_brick_stairs_half_V_BOTTOM,
} mc_26_3_mossy_stone_brick_stairs_half;

typedef enum {
	mc_26_3_mossy_stone_brick_stairs_shape_V_STRAIGHT,
	mc_26_3_mossy_stone_brick_stairs_shape_V_INNER_LEFT,
	mc_26_3_mossy_stone_brick_stairs_shape_V_INNER_RIGHT,
	mc_26_3_mossy_stone_brick_stairs_shape_V_OUTER_LEFT,
	mc_26_3_mossy_stone_brick_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_mossy_stone_brick_stairs_shape;

typedef struct {
	mc_26_3_mossy_stone_brick_stairs_facing facing;
	mc_26_3_mossy_stone_brick_stairs_half half;
	mc_26_3_mossy_stone_brick_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_mossy_stone_brick_stairs_properties;

typedef enum {
	mc_26_3_mossy_stone_brick_wall_east_V_NONE,
	mc_26_3_mossy_stone_brick_wall_east_V_LOW,
	mc_26_3_mossy_stone_brick_wall_east_V_TALL,
} mc_26_3_mossy_stone_brick_wall_east;

typedef enum {
	mc_26_3_mossy_stone_brick_wall_north_V_NONE,
	mc_26_3_mossy_stone_brick_wall_north_V_LOW,
	mc_26_3_mossy_stone_brick_wall_north_V_TALL,
} mc_26_3_mossy_stone_brick_wall_north;

typedef enum {
	mc_26_3_mossy_stone_brick_wall_south_V_NONE,
	mc_26_3_mossy_stone_brick_wall_south_V_LOW,
	mc_26_3_mossy_stone_brick_wall_south_V_TALL,
} mc_26_3_mossy_stone_brick_wall_south;

typedef enum {
	mc_26_3_mossy_stone_brick_wall_west_V_NONE,
	mc_26_3_mossy_stone_brick_wall_west_V_LOW,
	mc_26_3_mossy_stone_brick_wall_west_V_TALL,
} mc_26_3_mossy_stone_brick_wall_west;

typedef struct {
	mc_26_3_mossy_stone_brick_wall_east east;
	mc_26_3_mossy_stone_brick_wall_north north;
	mc_26_3_mossy_stone_brick_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_mossy_stone_brick_wall_west west;
} mc_26_3_mossy_stone_brick_wall_properties;

typedef enum {
	mc_26_3_moving_piston_type_V_NORMAL,
	mc_26_3_moving_piston_type_V_STICKY,
} mc_26_3_moving_piston_type;

typedef enum {
	mc_26_3_moving_piston_facing_V_NORTH,
	mc_26_3_moving_piston_facing_V_EAST,
	mc_26_3_moving_piston_facing_V_SOUTH,
	mc_26_3_moving_piston_facing_V_WEST,
	mc_26_3_moving_piston_facing_V_UP,
	mc_26_3_moving_piston_facing_V_DOWN,
} mc_26_3_moving_piston_facing;

typedef struct {
	mc_26_3_moving_piston_type type;
	mc_26_3_moving_piston_facing facing;
} mc_26_3_moving_piston_properties;

typedef enum {
	mc_26_3_mud_brick_slab_type_V_TOP,
	mc_26_3_mud_brick_slab_type_V_BOTTOM,
	mc_26_3_mud_brick_slab_type_V_DOUBLE,
} mc_26_3_mud_brick_slab_type;

typedef struct {
	mc_26_3_mud_brick_slab_type type;
	b8 waterlogged;
} mc_26_3_mud_brick_slab_properties;

typedef enum {
	mc_26_3_mud_brick_stairs_facing_V_NORTH,
	mc_26_3_mud_brick_stairs_facing_V_SOUTH,
	mc_26_3_mud_brick_stairs_facing_V_WEST,
	mc_26_3_mud_brick_stairs_facing_V_EAST,
} mc_26_3_mud_brick_stairs_facing;

typedef enum {
	mc_26_3_mud_brick_stairs_half_V_TOP,
	mc_26_3_mud_brick_stairs_half_V_BOTTOM,
} mc_26_3_mud_brick_stairs_half;

typedef enum {
	mc_26_3_mud_brick_stairs_shape_V_STRAIGHT,
	mc_26_3_mud_brick_stairs_shape_V_INNER_LEFT,
	mc_26_3_mud_brick_stairs_shape_V_INNER_RIGHT,
	mc_26_3_mud_brick_stairs_shape_V_OUTER_LEFT,
	mc_26_3_mud_brick_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_mud_brick_stairs_shape;

typedef struct {
	mc_26_3_mud_brick_stairs_facing facing;
	mc_26_3_mud_brick_stairs_half half;
	mc_26_3_mud_brick_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_mud_brick_stairs_properties;

typedef enum {
	mc_26_3_mud_brick_wall_east_V_NONE,
	mc_26_3_mud_brick_wall_east_V_LOW,
	mc_26_3_mud_brick_wall_east_V_TALL,
} mc_26_3_mud_brick_wall_east;

typedef enum {
	mc_26_3_mud_brick_wall_north_V_NONE,
	mc_26_3_mud_brick_wall_north_V_LOW,
	mc_26_3_mud_brick_wall_north_V_TALL,
} mc_26_3_mud_brick_wall_north;

typedef enum {
	mc_26_3_mud_brick_wall_south_V_NONE,
	mc_26_3_mud_brick_wall_south_V_LOW,
	mc_26_3_mud_brick_wall_south_V_TALL,
} mc_26_3_mud_brick_wall_south;

typedef enum {
	mc_26_3_mud_brick_wall_west_V_NONE,
	mc_26_3_mud_brick_wall_west_V_LOW,
	mc_26_3_mud_brick_wall_west_V_TALL,
} mc_26_3_mud_brick_wall_west;

typedef struct {
	mc_26_3_mud_brick_wall_east east;
	mc_26_3_mud_brick_wall_north north;
	mc_26_3_mud_brick_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_mud_brick_wall_west west;
} mc_26_3_mud_brick_wall_properties;

typedef enum {
	mc_26_3_muddy_mangrove_roots_axis_V_X,
	mc_26_3_muddy_mangrove_roots_axis_V_Y,
	mc_26_3_muddy_mangrove_roots_axis_V_Z,
} mc_26_3_muddy_mangrove_roots_axis;

typedef struct {
	mc_26_3_muddy_mangrove_roots_axis axis;
} mc_26_3_muddy_mangrove_roots_properties;

typedef struct {
	b8 down;
	b8 east;
	b8 north;
	b8 south;
	b8 up;
	b8 west;
} mc_26_3_mushroom_stem_properties;

typedef struct {
	b8 snowy;
} mc_26_3_mycelium_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_nether_brick_fence_properties;

typedef enum {
	mc_26_3_nether_brick_slab_type_V_TOP,
	mc_26_3_nether_brick_slab_type_V_BOTTOM,
	mc_26_3_nether_brick_slab_type_V_DOUBLE,
} mc_26_3_nether_brick_slab_type;

typedef struct {
	mc_26_3_nether_brick_slab_type type;
	b8 waterlogged;
} mc_26_3_nether_brick_slab_properties;

typedef enum {
	mc_26_3_nether_brick_stairs_facing_V_NORTH,
	mc_26_3_nether_brick_stairs_facing_V_SOUTH,
	mc_26_3_nether_brick_stairs_facing_V_WEST,
	mc_26_3_nether_brick_stairs_facing_V_EAST,
} mc_26_3_nether_brick_stairs_facing;

typedef enum {
	mc_26_3_nether_brick_stairs_half_V_TOP,
	mc_26_3_nether_brick_stairs_half_V_BOTTOM,
} mc_26_3_nether_brick_stairs_half;

typedef enum {
	mc_26_3_nether_brick_stairs_shape_V_STRAIGHT,
	mc_26_3_nether_brick_stairs_shape_V_INNER_LEFT,
	mc_26_3_nether_brick_stairs_shape_V_INNER_RIGHT,
	mc_26_3_nether_brick_stairs_shape_V_OUTER_LEFT,
	mc_26_3_nether_brick_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_nether_brick_stairs_shape;

typedef struct {
	mc_26_3_nether_brick_stairs_facing facing;
	mc_26_3_nether_brick_stairs_half half;
	mc_26_3_nether_brick_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_nether_brick_stairs_properties;

typedef enum {
	mc_26_3_nether_brick_wall_east_V_NONE,
	mc_26_3_nether_brick_wall_east_V_LOW,
	mc_26_3_nether_brick_wall_east_V_TALL,
} mc_26_3_nether_brick_wall_east;

typedef enum {
	mc_26_3_nether_brick_wall_north_V_NONE,
	mc_26_3_nether_brick_wall_north_V_LOW,
	mc_26_3_nether_brick_wall_north_V_TALL,
} mc_26_3_nether_brick_wall_north;

typedef enum {
	mc_26_3_nether_brick_wall_south_V_NONE,
	mc_26_3_nether_brick_wall_south_V_LOW,
	mc_26_3_nether_brick_wall_south_V_TALL,
} mc_26_3_nether_brick_wall_south;

typedef enum {
	mc_26_3_nether_brick_wall_west_V_NONE,
	mc_26_3_nether_brick_wall_west_V_LOW,
	mc_26_3_nether_brick_wall_west_V_TALL,
} mc_26_3_nether_brick_wall_west;

typedef struct {
	mc_26_3_nether_brick_wall_east east;
	mc_26_3_nether_brick_wall_north north;
	mc_26_3_nether_brick_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_nether_brick_wall_west west;
} mc_26_3_nether_brick_wall_properties;

typedef enum {
	mc_26_3_nether_portal_axis_V_X,
	mc_26_3_nether_portal_axis_V_Z,
} mc_26_3_nether_portal_axis;

typedef struct {
	mc_26_3_nether_portal_axis axis;
} mc_26_3_nether_portal_properties;

typedef enum {
	mc_26_3_nether_wart_age_V_V_0,
	mc_26_3_nether_wart_age_V_V_1,
	mc_26_3_nether_wart_age_V_V_2,
	mc_26_3_nether_wart_age_V_V_3,
} mc_26_3_nether_wart_age;

typedef struct {
	mc_26_3_nether_wart_age age;
} mc_26_3_nether_wart_properties;

typedef enum {
	mc_26_3_note_block_instrument_V_HARP,
	mc_26_3_note_block_instrument_V_BASEDRUM,
	mc_26_3_note_block_instrument_V_SNARE,
	mc_26_3_note_block_instrument_V_HAT,
	mc_26_3_note_block_instrument_V_BASS,
	mc_26_3_note_block_instrument_V_FLUTE,
	mc_26_3_note_block_instrument_V_BELL,
	mc_26_3_note_block_instrument_V_GUITAR,
	mc_26_3_note_block_instrument_V_CHIME,
	mc_26_3_note_block_instrument_V_XYLOPHONE,
	mc_26_3_note_block_instrument_V_IRON_XYLOPHONE,
	mc_26_3_note_block_instrument_V_COW_BELL,
	mc_26_3_note_block_instrument_V_DIDGERIDOO,
	mc_26_3_note_block_instrument_V_BIT,
	mc_26_3_note_block_instrument_V_BANJO,
	mc_26_3_note_block_instrument_V_PLING,
	mc_26_3_note_block_instrument_V_TRUMPET,
	mc_26_3_note_block_instrument_V_TRUMPET_EXPOSED,
	mc_26_3_note_block_instrument_V_TRUMPET_OXIDIZED,
	mc_26_3_note_block_instrument_V_TRUMPET_WEATHERED,
	mc_26_3_note_block_instrument_V_ZOMBIE,
	mc_26_3_note_block_instrument_V_SKELETON,
	mc_26_3_note_block_instrument_V_CREEPER,
	mc_26_3_note_block_instrument_V_DRAGON,
	mc_26_3_note_block_instrument_V_WITHER_SKELETON,
	mc_26_3_note_block_instrument_V_PIGLIN,
	mc_26_3_note_block_instrument_V_CUSTOM_HEAD,
} mc_26_3_note_block_instrument;

typedef enum {
	mc_26_3_note_block_note_V_V_0,
	mc_26_3_note_block_note_V_V_1,
	mc_26_3_note_block_note_V_V_2,
	mc_26_3_note_block_note_V_V_3,
	mc_26_3_note_block_note_V_V_4,
	mc_26_3_note_block_note_V_V_5,
	mc_26_3_note_block_note_V_V_6,
	mc_26_3_note_block_note_V_V_7,
	mc_26_3_note_block_note_V_V_8,
	mc_26_3_note_block_note_V_V_9,
	mc_26_3_note_block_note_V_V_10,
	mc_26_3_note_block_note_V_V_11,
	mc_26_3_note_block_note_V_V_12,
	mc_26_3_note_block_note_V_V_13,
	mc_26_3_note_block_note_V_V_14,
	mc_26_3_note_block_note_V_V_15,
	mc_26_3_note_block_note_V_V_16,
	mc_26_3_note_block_note_V_V_17,
	mc_26_3_note_block_note_V_V_18,
	mc_26_3_note_block_note_V_V_19,
	mc_26_3_note_block_note_V_V_20,
	mc_26_3_note_block_note_V_V_21,
	mc_26_3_note_block_note_V_V_22,
	mc_26_3_note_block_note_V_V_23,
	mc_26_3_note_block_note_V_V_24,
} mc_26_3_note_block_note;

typedef struct {
	mc_26_3_note_block_instrument instrument;
	mc_26_3_note_block_note note;
	b8 powered;
} mc_26_3_note_block_properties;

typedef enum {
	mc_26_3_oak_button_face_V_FLOOR,
	mc_26_3_oak_button_face_V_WALL,
	mc_26_3_oak_button_face_V_CEILING,
} mc_26_3_oak_button_face;

typedef enum {
	mc_26_3_oak_button_facing_V_NORTH,
	mc_26_3_oak_button_facing_V_SOUTH,
	mc_26_3_oak_button_facing_V_WEST,
	mc_26_3_oak_button_facing_V_EAST,
} mc_26_3_oak_button_facing;

typedef struct {
	mc_26_3_oak_button_face face;
	mc_26_3_oak_button_facing facing;
	b8 powered;
} mc_26_3_oak_button_properties;

typedef enum {
	mc_26_3_oak_door_facing_V_NORTH,
	mc_26_3_oak_door_facing_V_SOUTH,
	mc_26_3_oak_door_facing_V_WEST,
	mc_26_3_oak_door_facing_V_EAST,
} mc_26_3_oak_door_facing;

typedef enum {
	mc_26_3_oak_door_half_V_UPPER,
	mc_26_3_oak_door_half_V_LOWER,
} mc_26_3_oak_door_half;

typedef enum {
	mc_26_3_oak_door_hinge_V_LEFT,
	mc_26_3_oak_door_hinge_V_RIGHT,
} mc_26_3_oak_door_hinge;

typedef struct {
	mc_26_3_oak_door_facing facing;
	mc_26_3_oak_door_half half;
	mc_26_3_oak_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_oak_door_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_oak_fence_properties;

typedef enum {
	mc_26_3_oak_fence_gate_facing_V_NORTH,
	mc_26_3_oak_fence_gate_facing_V_SOUTH,
	mc_26_3_oak_fence_gate_facing_V_WEST,
	mc_26_3_oak_fence_gate_facing_V_EAST,
} mc_26_3_oak_fence_gate_facing;

typedef struct {
	mc_26_3_oak_fence_gate_facing facing;
	b8 in_wall;
	b8 open;
	b8 powered;
} mc_26_3_oak_fence_gate_properties;

typedef enum {
	mc_26_3_oak_hanging_sign_rotation_V_V_0,
	mc_26_3_oak_hanging_sign_rotation_V_V_1,
	mc_26_3_oak_hanging_sign_rotation_V_V_2,
	mc_26_3_oak_hanging_sign_rotation_V_V_3,
	mc_26_3_oak_hanging_sign_rotation_V_V_4,
	mc_26_3_oak_hanging_sign_rotation_V_V_5,
	mc_26_3_oak_hanging_sign_rotation_V_V_6,
	mc_26_3_oak_hanging_sign_rotation_V_V_7,
	mc_26_3_oak_hanging_sign_rotation_V_V_8,
	mc_26_3_oak_hanging_sign_rotation_V_V_9,
	mc_26_3_oak_hanging_sign_rotation_V_V_10,
	mc_26_3_oak_hanging_sign_rotation_V_V_11,
	mc_26_3_oak_hanging_sign_rotation_V_V_12,
	mc_26_3_oak_hanging_sign_rotation_V_V_13,
	mc_26_3_oak_hanging_sign_rotation_V_V_14,
	mc_26_3_oak_hanging_sign_rotation_V_V_15,
} mc_26_3_oak_hanging_sign_rotation;

typedef struct {
	b8 attached;
	mc_26_3_oak_hanging_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_oak_hanging_sign_properties;

typedef enum {
	mc_26_3_oak_leaves_distance_V_V_1,
	mc_26_3_oak_leaves_distance_V_V_2,
	mc_26_3_oak_leaves_distance_V_V_3,
	mc_26_3_oak_leaves_distance_V_V_4,
	mc_26_3_oak_leaves_distance_V_V_5,
	mc_26_3_oak_leaves_distance_V_V_6,
	mc_26_3_oak_leaves_distance_V_V_7,
} mc_26_3_oak_leaves_distance;

typedef struct {
	mc_26_3_oak_leaves_distance distance;
	b8 persistent;
	b8 waterlogged;
} mc_26_3_oak_leaves_properties;

typedef enum {
	mc_26_3_oak_log_axis_V_X,
	mc_26_3_oak_log_axis_V_Y,
	mc_26_3_oak_log_axis_V_Z,
} mc_26_3_oak_log_axis;

typedef struct {
	mc_26_3_oak_log_axis axis;
} mc_26_3_oak_log_properties;

typedef struct {
	b8 powered;
} mc_26_3_oak_pressure_plate_properties;

typedef enum {
	mc_26_3_oak_sapling_stage_V_V_0,
	mc_26_3_oak_sapling_stage_V_V_1,
} mc_26_3_oak_sapling_stage;

typedef struct {
	mc_26_3_oak_sapling_stage stage;
} mc_26_3_oak_sapling_properties;

typedef enum {
	mc_26_3_oak_shelf_facing_V_NORTH,
	mc_26_3_oak_shelf_facing_V_SOUTH,
	mc_26_3_oak_shelf_facing_V_WEST,
	mc_26_3_oak_shelf_facing_V_EAST,
} mc_26_3_oak_shelf_facing;

typedef enum {
	mc_26_3_oak_shelf_side_chain_V_UNCONNECTED,
	mc_26_3_oak_shelf_side_chain_V_RIGHT,
	mc_26_3_oak_shelf_side_chain_V_CENTER,
	mc_26_3_oak_shelf_side_chain_V_LEFT,
} mc_26_3_oak_shelf_side_chain;

typedef struct {
	mc_26_3_oak_shelf_facing facing;
	b8 powered;
	mc_26_3_oak_shelf_side_chain side_chain;
	b8 waterlogged;
} mc_26_3_oak_shelf_properties;

typedef enum {
	mc_26_3_oak_sign_rotation_V_V_0,
	mc_26_3_oak_sign_rotation_V_V_1,
	mc_26_3_oak_sign_rotation_V_V_2,
	mc_26_3_oak_sign_rotation_V_V_3,
	mc_26_3_oak_sign_rotation_V_V_4,
	mc_26_3_oak_sign_rotation_V_V_5,
	mc_26_3_oak_sign_rotation_V_V_6,
	mc_26_3_oak_sign_rotation_V_V_7,
	mc_26_3_oak_sign_rotation_V_V_8,
	mc_26_3_oak_sign_rotation_V_V_9,
	mc_26_3_oak_sign_rotation_V_V_10,
	mc_26_3_oak_sign_rotation_V_V_11,
	mc_26_3_oak_sign_rotation_V_V_12,
	mc_26_3_oak_sign_rotation_V_V_13,
	mc_26_3_oak_sign_rotation_V_V_14,
	mc_26_3_oak_sign_rotation_V_V_15,
} mc_26_3_oak_sign_rotation;

typedef struct {
	mc_26_3_oak_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_oak_sign_properties;

typedef enum {
	mc_26_3_oak_slab_type_V_TOP,
	mc_26_3_oak_slab_type_V_BOTTOM,
	mc_26_3_oak_slab_type_V_DOUBLE,
} mc_26_3_oak_slab_type;

typedef struct {
	mc_26_3_oak_slab_type type;
	b8 waterlogged;
} mc_26_3_oak_slab_properties;

typedef enum {
	mc_26_3_oak_stairs_facing_V_NORTH,
	mc_26_3_oak_stairs_facing_V_SOUTH,
	mc_26_3_oak_stairs_facing_V_WEST,
	mc_26_3_oak_stairs_facing_V_EAST,
} mc_26_3_oak_stairs_facing;

typedef enum {
	mc_26_3_oak_stairs_half_V_TOP,
	mc_26_3_oak_stairs_half_V_BOTTOM,
} mc_26_3_oak_stairs_half;

typedef enum {
	mc_26_3_oak_stairs_shape_V_STRAIGHT,
	mc_26_3_oak_stairs_shape_V_INNER_LEFT,
	mc_26_3_oak_stairs_shape_V_INNER_RIGHT,
	mc_26_3_oak_stairs_shape_V_OUTER_LEFT,
	mc_26_3_oak_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_oak_stairs_shape;

typedef struct {
	mc_26_3_oak_stairs_facing facing;
	mc_26_3_oak_stairs_half half;
	mc_26_3_oak_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_oak_stairs_properties;

typedef enum {
	mc_26_3_oak_trapdoor_facing_V_NORTH,
	mc_26_3_oak_trapdoor_facing_V_SOUTH,
	mc_26_3_oak_trapdoor_facing_V_WEST,
	mc_26_3_oak_trapdoor_facing_V_EAST,
} mc_26_3_oak_trapdoor_facing;

typedef enum {
	mc_26_3_oak_trapdoor_half_V_TOP,
	mc_26_3_oak_trapdoor_half_V_BOTTOM,
} mc_26_3_oak_trapdoor_half;

typedef struct {
	mc_26_3_oak_trapdoor_facing facing;
	mc_26_3_oak_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_oak_trapdoor_properties;

typedef enum {
	mc_26_3_oak_wall_hanging_sign_facing_V_NORTH,
	mc_26_3_oak_wall_hanging_sign_facing_V_SOUTH,
	mc_26_3_oak_wall_hanging_sign_facing_V_WEST,
	mc_26_3_oak_wall_hanging_sign_facing_V_EAST,
} mc_26_3_oak_wall_hanging_sign_facing;

typedef struct {
	mc_26_3_oak_wall_hanging_sign_facing facing;
	b8 waterlogged;
} mc_26_3_oak_wall_hanging_sign_properties;

typedef enum {
	mc_26_3_oak_wall_sign_facing_V_NORTH,
	mc_26_3_oak_wall_sign_facing_V_SOUTH,
	mc_26_3_oak_wall_sign_facing_V_WEST,
	mc_26_3_oak_wall_sign_facing_V_EAST,
} mc_26_3_oak_wall_sign_facing;

typedef struct {
	mc_26_3_oak_wall_sign_facing facing;
	b8 waterlogged;
} mc_26_3_oak_wall_sign_properties;

typedef enum {
	mc_26_3_oak_wood_axis_V_X,
	mc_26_3_oak_wood_axis_V_Y,
	mc_26_3_oak_wood_axis_V_Z,
} mc_26_3_oak_wood_axis;

typedef struct {
	mc_26_3_oak_wood_axis axis;
} mc_26_3_oak_wood_properties;

typedef enum {
	mc_26_3_observer_facing_V_NORTH,
	mc_26_3_observer_facing_V_EAST,
	mc_26_3_observer_facing_V_SOUTH,
	mc_26_3_observer_facing_V_WEST,
	mc_26_3_observer_facing_V_UP,
	mc_26_3_observer_facing_V_DOWN,
} mc_26_3_observer_facing;

typedef struct {
	mc_26_3_observer_facing facing;
	b8 powered;
} mc_26_3_observer_properties;

typedef enum {
	mc_26_3_ochre_froglight_axis_V_X,
	mc_26_3_ochre_froglight_axis_V_Y,
	mc_26_3_ochre_froglight_axis_V_Z,
} mc_26_3_ochre_froglight_axis;

typedef struct {
	mc_26_3_ochre_froglight_axis axis;
} mc_26_3_ochre_froglight_properties;

typedef enum {
	mc_26_3_orange_banner_rotation_V_V_0,
	mc_26_3_orange_banner_rotation_V_V_1,
	mc_26_3_orange_banner_rotation_V_V_2,
	mc_26_3_orange_banner_rotation_V_V_3,
	mc_26_3_orange_banner_rotation_V_V_4,
	mc_26_3_orange_banner_rotation_V_V_5,
	mc_26_3_orange_banner_rotation_V_V_6,
	mc_26_3_orange_banner_rotation_V_V_7,
	mc_26_3_orange_banner_rotation_V_V_8,
	mc_26_3_orange_banner_rotation_V_V_9,
	mc_26_3_orange_banner_rotation_V_V_10,
	mc_26_3_orange_banner_rotation_V_V_11,
	mc_26_3_orange_banner_rotation_V_V_12,
	mc_26_3_orange_banner_rotation_V_V_13,
	mc_26_3_orange_banner_rotation_V_V_14,
	mc_26_3_orange_banner_rotation_V_V_15,
} mc_26_3_orange_banner_rotation;

typedef struct {
	mc_26_3_orange_banner_rotation rotation;
} mc_26_3_orange_banner_properties;

typedef enum {
	mc_26_3_orange_bed_facing_V_NORTH,
	mc_26_3_orange_bed_facing_V_SOUTH,
	mc_26_3_orange_bed_facing_V_WEST,
	mc_26_3_orange_bed_facing_V_EAST,
} mc_26_3_orange_bed_facing;

typedef enum {
	mc_26_3_orange_bed_part_V_HEAD,
	mc_26_3_orange_bed_part_V_FOOT,
} mc_26_3_orange_bed_part;

typedef struct {
	mc_26_3_orange_bed_facing facing;
	b8 occupied;
	mc_26_3_orange_bed_part part;
} mc_26_3_orange_bed_properties;

typedef enum {
	mc_26_3_orange_candle_candles_V_V_1,
	mc_26_3_orange_candle_candles_V_V_2,
	mc_26_3_orange_candle_candles_V_V_3,
	mc_26_3_orange_candle_candles_V_V_4,
} mc_26_3_orange_candle_candles;

typedef struct {
	mc_26_3_orange_candle_candles candles;
	b8 lit;
	b8 waterlogged;
} mc_26_3_orange_candle_properties;

typedef struct {
	b8 lit;
} mc_26_3_orange_candle_cake_properties;

typedef enum {
	mc_26_3_orange_concrete_slab_type_V_TOP,
	mc_26_3_orange_concrete_slab_type_V_BOTTOM,
	mc_26_3_orange_concrete_slab_type_V_DOUBLE,
} mc_26_3_orange_concrete_slab_type;

typedef struct {
	mc_26_3_orange_concrete_slab_type type;
	b8 waterlogged;
} mc_26_3_orange_concrete_slab_properties;

typedef enum {
	mc_26_3_orange_concrete_stairs_facing_V_NORTH,
	mc_26_3_orange_concrete_stairs_facing_V_SOUTH,
	mc_26_3_orange_concrete_stairs_facing_V_WEST,
	mc_26_3_orange_concrete_stairs_facing_V_EAST,
} mc_26_3_orange_concrete_stairs_facing;

typedef enum {
	mc_26_3_orange_concrete_stairs_half_V_TOP,
	mc_26_3_orange_concrete_stairs_half_V_BOTTOM,
} mc_26_3_orange_concrete_stairs_half;

typedef enum {
	mc_26_3_orange_concrete_stairs_shape_V_STRAIGHT,
	mc_26_3_orange_concrete_stairs_shape_V_INNER_LEFT,
	mc_26_3_orange_concrete_stairs_shape_V_INNER_RIGHT,
	mc_26_3_orange_concrete_stairs_shape_V_OUTER_LEFT,
	mc_26_3_orange_concrete_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_orange_concrete_stairs_shape;

typedef struct {
	mc_26_3_orange_concrete_stairs_facing facing;
	mc_26_3_orange_concrete_stairs_half half;
	mc_26_3_orange_concrete_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_orange_concrete_stairs_properties;

typedef enum {
	mc_26_3_orange_glazed_terracotta_facing_V_NORTH,
	mc_26_3_orange_glazed_terracotta_facing_V_SOUTH,
	mc_26_3_orange_glazed_terracotta_facing_V_WEST,
	mc_26_3_orange_glazed_terracotta_facing_V_EAST,
} mc_26_3_orange_glazed_terracotta_facing;

typedef struct {
	mc_26_3_orange_glazed_terracotta_facing facing;
} mc_26_3_orange_glazed_terracotta_properties;

typedef enum {
	mc_26_3_orange_poplar_leaves_distance_V_V_1,
	mc_26_3_orange_poplar_leaves_distance_V_V_2,
	mc_26_3_orange_poplar_leaves_distance_V_V_3,
	mc_26_3_orange_poplar_leaves_distance_V_V_4,
	mc_26_3_orange_poplar_leaves_distance_V_V_5,
	mc_26_3_orange_poplar_leaves_distance_V_V_6,
	mc_26_3_orange_poplar_leaves_distance_V_V_7,
} mc_26_3_orange_poplar_leaves_distance;

typedef struct {
	mc_26_3_orange_poplar_leaves_distance distance;
	b8 persistent;
	b8 waterlogged;
} mc_26_3_orange_poplar_leaves_properties;

typedef enum {
	mc_26_3_orange_shulker_box_facing_V_NORTH,
	mc_26_3_orange_shulker_box_facing_V_EAST,
	mc_26_3_orange_shulker_box_facing_V_SOUTH,
	mc_26_3_orange_shulker_box_facing_V_WEST,
	mc_26_3_orange_shulker_box_facing_V_UP,
	mc_26_3_orange_shulker_box_facing_V_DOWN,
} mc_26_3_orange_shulker_box_facing;

typedef struct {
	mc_26_3_orange_shulker_box_facing facing;
} mc_26_3_orange_shulker_box_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_orange_stained_glass_pane_properties;

typedef enum {
	mc_26_3_orange_wall_banner_facing_V_NORTH,
	mc_26_3_orange_wall_banner_facing_V_SOUTH,
	mc_26_3_orange_wall_banner_facing_V_WEST,
	mc_26_3_orange_wall_banner_facing_V_EAST,
} mc_26_3_orange_wall_banner_facing;

typedef struct {
	mc_26_3_orange_wall_banner_facing facing;
} mc_26_3_orange_wall_banner_properties;

typedef enum {
	mc_26_3_orange_wool_slab_type_V_TOP,
	mc_26_3_orange_wool_slab_type_V_BOTTOM,
	mc_26_3_orange_wool_slab_type_V_DOUBLE,
} mc_26_3_orange_wool_slab_type;

typedef struct {
	mc_26_3_orange_wool_slab_type type;
	b8 waterlogged;
} mc_26_3_orange_wool_slab_properties;

typedef enum {
	mc_26_3_orange_wool_stairs_facing_V_NORTH,
	mc_26_3_orange_wool_stairs_facing_V_SOUTH,
	mc_26_3_orange_wool_stairs_facing_V_WEST,
	mc_26_3_orange_wool_stairs_facing_V_EAST,
} mc_26_3_orange_wool_stairs_facing;

typedef enum {
	mc_26_3_orange_wool_stairs_half_V_TOP,
	mc_26_3_orange_wool_stairs_half_V_BOTTOM,
} mc_26_3_orange_wool_stairs_half;

typedef enum {
	mc_26_3_orange_wool_stairs_shape_V_STRAIGHT,
	mc_26_3_orange_wool_stairs_shape_V_INNER_LEFT,
	mc_26_3_orange_wool_stairs_shape_V_INNER_RIGHT,
	mc_26_3_orange_wool_stairs_shape_V_OUTER_LEFT,
	mc_26_3_orange_wool_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_orange_wool_stairs_shape;

typedef struct {
	mc_26_3_orange_wool_stairs_facing facing;
	mc_26_3_orange_wool_stairs_half half;
	mc_26_3_orange_wool_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_orange_wool_stairs_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_oxidized_copper_bars_properties;

typedef struct {
	b8 lit;
	b8 powered;
} mc_26_3_oxidized_copper_bulb_properties;

typedef enum {
	mc_26_3_oxidized_copper_chain_axis_V_X,
	mc_26_3_oxidized_copper_chain_axis_V_Y,
	mc_26_3_oxidized_copper_chain_axis_V_Z,
} mc_26_3_oxidized_copper_chain_axis;

typedef struct {
	mc_26_3_oxidized_copper_chain_axis axis;
	b8 waterlogged;
} mc_26_3_oxidized_copper_chain_properties;

typedef enum {
	mc_26_3_oxidized_copper_chest_type_V_SINGLE,
	mc_26_3_oxidized_copper_chest_type_V_LEFT,
	mc_26_3_oxidized_copper_chest_type_V_RIGHT,
} mc_26_3_oxidized_copper_chest_type;

typedef enum {
	mc_26_3_oxidized_copper_chest_facing_V_NORTH,
	mc_26_3_oxidized_copper_chest_facing_V_SOUTH,
	mc_26_3_oxidized_copper_chest_facing_V_WEST,
	mc_26_3_oxidized_copper_chest_facing_V_EAST,
} mc_26_3_oxidized_copper_chest_facing;

typedef struct {
	mc_26_3_oxidized_copper_chest_type type;
	mc_26_3_oxidized_copper_chest_facing facing;
	b8 waterlogged;
} mc_26_3_oxidized_copper_chest_properties;

typedef enum {
	mc_26_3_oxidized_copper_door_facing_V_NORTH,
	mc_26_3_oxidized_copper_door_facing_V_SOUTH,
	mc_26_3_oxidized_copper_door_facing_V_WEST,
	mc_26_3_oxidized_copper_door_facing_V_EAST,
} mc_26_3_oxidized_copper_door_facing;

typedef enum {
	mc_26_3_oxidized_copper_door_half_V_UPPER,
	mc_26_3_oxidized_copper_door_half_V_LOWER,
} mc_26_3_oxidized_copper_door_half;

typedef enum {
	mc_26_3_oxidized_copper_door_hinge_V_LEFT,
	mc_26_3_oxidized_copper_door_hinge_V_RIGHT,
} mc_26_3_oxidized_copper_door_hinge;

typedef struct {
	mc_26_3_oxidized_copper_door_facing facing;
	mc_26_3_oxidized_copper_door_half half;
	mc_26_3_oxidized_copper_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_oxidized_copper_door_properties;

typedef enum {
	mc_26_3_oxidized_copper_golem_statue_copper_golem_pose_V_STANDING,
	mc_26_3_oxidized_copper_golem_statue_copper_golem_pose_V_SITTING,
	mc_26_3_oxidized_copper_golem_statue_copper_golem_pose_V_RUNNING,
	mc_26_3_oxidized_copper_golem_statue_copper_golem_pose_V_STAR,
} mc_26_3_oxidized_copper_golem_statue_copper_golem_pose;

typedef enum {
	mc_26_3_oxidized_copper_golem_statue_facing_V_NORTH,
	mc_26_3_oxidized_copper_golem_statue_facing_V_SOUTH,
	mc_26_3_oxidized_copper_golem_statue_facing_V_WEST,
	mc_26_3_oxidized_copper_golem_statue_facing_V_EAST,
} mc_26_3_oxidized_copper_golem_statue_facing;

typedef struct {
	mc_26_3_oxidized_copper_golem_statue_copper_golem_pose copper_golem_pose;
	mc_26_3_oxidized_copper_golem_statue_facing facing;
	b8 waterlogged;
} mc_26_3_oxidized_copper_golem_statue_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_oxidized_copper_grate_properties;

typedef struct {
	b8 hanging;
	b8 waterlogged;
} mc_26_3_oxidized_copper_lantern_properties;

typedef enum {
	mc_26_3_oxidized_copper_trapdoor_facing_V_NORTH,
	mc_26_3_oxidized_copper_trapdoor_facing_V_SOUTH,
	mc_26_3_oxidized_copper_trapdoor_facing_V_WEST,
	mc_26_3_oxidized_copper_trapdoor_facing_V_EAST,
} mc_26_3_oxidized_copper_trapdoor_facing;

typedef enum {
	mc_26_3_oxidized_copper_trapdoor_half_V_TOP,
	mc_26_3_oxidized_copper_trapdoor_half_V_BOTTOM,
} mc_26_3_oxidized_copper_trapdoor_half;

typedef struct {
	mc_26_3_oxidized_copper_trapdoor_facing facing;
	mc_26_3_oxidized_copper_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_oxidized_copper_trapdoor_properties;

typedef enum {
	mc_26_3_oxidized_cut_copper_slab_type_V_TOP,
	mc_26_3_oxidized_cut_copper_slab_type_V_BOTTOM,
	mc_26_3_oxidized_cut_copper_slab_type_V_DOUBLE,
} mc_26_3_oxidized_cut_copper_slab_type;

typedef struct {
	mc_26_3_oxidized_cut_copper_slab_type type;
	b8 waterlogged;
} mc_26_3_oxidized_cut_copper_slab_properties;

typedef enum {
	mc_26_3_oxidized_cut_copper_stairs_facing_V_NORTH,
	mc_26_3_oxidized_cut_copper_stairs_facing_V_SOUTH,
	mc_26_3_oxidized_cut_copper_stairs_facing_V_WEST,
	mc_26_3_oxidized_cut_copper_stairs_facing_V_EAST,
} mc_26_3_oxidized_cut_copper_stairs_facing;

typedef enum {
	mc_26_3_oxidized_cut_copper_stairs_half_V_TOP,
	mc_26_3_oxidized_cut_copper_stairs_half_V_BOTTOM,
} mc_26_3_oxidized_cut_copper_stairs_half;

typedef enum {
	mc_26_3_oxidized_cut_copper_stairs_shape_V_STRAIGHT,
	mc_26_3_oxidized_cut_copper_stairs_shape_V_INNER_LEFT,
	mc_26_3_oxidized_cut_copper_stairs_shape_V_INNER_RIGHT,
	mc_26_3_oxidized_cut_copper_stairs_shape_V_OUTER_LEFT,
	mc_26_3_oxidized_cut_copper_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_oxidized_cut_copper_stairs_shape;

typedef struct {
	mc_26_3_oxidized_cut_copper_stairs_facing facing;
	mc_26_3_oxidized_cut_copper_stairs_half half;
	mc_26_3_oxidized_cut_copper_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_oxidized_cut_copper_stairs_properties;

typedef enum {
	mc_26_3_oxidized_lightning_rod_facing_V_NORTH,
	mc_26_3_oxidized_lightning_rod_facing_V_EAST,
	mc_26_3_oxidized_lightning_rod_facing_V_SOUTH,
	mc_26_3_oxidized_lightning_rod_facing_V_WEST,
	mc_26_3_oxidized_lightning_rod_facing_V_UP,
	mc_26_3_oxidized_lightning_rod_facing_V_DOWN,
} mc_26_3_oxidized_lightning_rod_facing;

typedef struct {
	mc_26_3_oxidized_lightning_rod_facing facing;
	b8 powered;
	b8 waterlogged;
} mc_26_3_oxidized_lightning_rod_properties;

typedef struct {
	b8 tip;
} mc_26_3_pale_hanging_moss_properties;

typedef enum {
	mc_26_3_pale_moss_carpet_east_V_NONE,
	mc_26_3_pale_moss_carpet_east_V_LOW,
	mc_26_3_pale_moss_carpet_east_V_TALL,
} mc_26_3_pale_moss_carpet_east;

typedef enum {
	mc_26_3_pale_moss_carpet_north_V_NONE,
	mc_26_3_pale_moss_carpet_north_V_LOW,
	mc_26_3_pale_moss_carpet_north_V_TALL,
} mc_26_3_pale_moss_carpet_north;

typedef enum {
	mc_26_3_pale_moss_carpet_south_V_NONE,
	mc_26_3_pale_moss_carpet_south_V_LOW,
	mc_26_3_pale_moss_carpet_south_V_TALL,
} mc_26_3_pale_moss_carpet_south;

typedef enum {
	mc_26_3_pale_moss_carpet_west_V_NONE,
	mc_26_3_pale_moss_carpet_west_V_LOW,
	mc_26_3_pale_moss_carpet_west_V_TALL,
} mc_26_3_pale_moss_carpet_west;

typedef struct {
	b8 bottom;
	mc_26_3_pale_moss_carpet_east east;
	mc_26_3_pale_moss_carpet_north north;
	mc_26_3_pale_moss_carpet_south south;
	mc_26_3_pale_moss_carpet_west west;
} mc_26_3_pale_moss_carpet_properties;

typedef enum {
	mc_26_3_pale_oak_button_face_V_FLOOR,
	mc_26_3_pale_oak_button_face_V_WALL,
	mc_26_3_pale_oak_button_face_V_CEILING,
} mc_26_3_pale_oak_button_face;

typedef enum {
	mc_26_3_pale_oak_button_facing_V_NORTH,
	mc_26_3_pale_oak_button_facing_V_SOUTH,
	mc_26_3_pale_oak_button_facing_V_WEST,
	mc_26_3_pale_oak_button_facing_V_EAST,
} mc_26_3_pale_oak_button_facing;

typedef struct {
	mc_26_3_pale_oak_button_face face;
	mc_26_3_pale_oak_button_facing facing;
	b8 powered;
} mc_26_3_pale_oak_button_properties;

typedef enum {
	mc_26_3_pale_oak_door_facing_V_NORTH,
	mc_26_3_pale_oak_door_facing_V_SOUTH,
	mc_26_3_pale_oak_door_facing_V_WEST,
	mc_26_3_pale_oak_door_facing_V_EAST,
} mc_26_3_pale_oak_door_facing;

typedef enum {
	mc_26_3_pale_oak_door_half_V_UPPER,
	mc_26_3_pale_oak_door_half_V_LOWER,
} mc_26_3_pale_oak_door_half;

typedef enum {
	mc_26_3_pale_oak_door_hinge_V_LEFT,
	mc_26_3_pale_oak_door_hinge_V_RIGHT,
} mc_26_3_pale_oak_door_hinge;

typedef struct {
	mc_26_3_pale_oak_door_facing facing;
	mc_26_3_pale_oak_door_half half;
	mc_26_3_pale_oak_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_pale_oak_door_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_pale_oak_fence_properties;

typedef enum {
	mc_26_3_pale_oak_fence_gate_facing_V_NORTH,
	mc_26_3_pale_oak_fence_gate_facing_V_SOUTH,
	mc_26_3_pale_oak_fence_gate_facing_V_WEST,
	mc_26_3_pale_oak_fence_gate_facing_V_EAST,
} mc_26_3_pale_oak_fence_gate_facing;

typedef struct {
	mc_26_3_pale_oak_fence_gate_facing facing;
	b8 in_wall;
	b8 open;
	b8 powered;
} mc_26_3_pale_oak_fence_gate_properties;

typedef enum {
	mc_26_3_pale_oak_hanging_sign_rotation_V_V_0,
	mc_26_3_pale_oak_hanging_sign_rotation_V_V_1,
	mc_26_3_pale_oak_hanging_sign_rotation_V_V_2,
	mc_26_3_pale_oak_hanging_sign_rotation_V_V_3,
	mc_26_3_pale_oak_hanging_sign_rotation_V_V_4,
	mc_26_3_pale_oak_hanging_sign_rotation_V_V_5,
	mc_26_3_pale_oak_hanging_sign_rotation_V_V_6,
	mc_26_3_pale_oak_hanging_sign_rotation_V_V_7,
	mc_26_3_pale_oak_hanging_sign_rotation_V_V_8,
	mc_26_3_pale_oak_hanging_sign_rotation_V_V_9,
	mc_26_3_pale_oak_hanging_sign_rotation_V_V_10,
	mc_26_3_pale_oak_hanging_sign_rotation_V_V_11,
	mc_26_3_pale_oak_hanging_sign_rotation_V_V_12,
	mc_26_3_pale_oak_hanging_sign_rotation_V_V_13,
	mc_26_3_pale_oak_hanging_sign_rotation_V_V_14,
	mc_26_3_pale_oak_hanging_sign_rotation_V_V_15,
} mc_26_3_pale_oak_hanging_sign_rotation;

typedef struct {
	b8 attached;
	mc_26_3_pale_oak_hanging_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_pale_oak_hanging_sign_properties;

typedef enum {
	mc_26_3_pale_oak_leaves_distance_V_V_1,
	mc_26_3_pale_oak_leaves_distance_V_V_2,
	mc_26_3_pale_oak_leaves_distance_V_V_3,
	mc_26_3_pale_oak_leaves_distance_V_V_4,
	mc_26_3_pale_oak_leaves_distance_V_V_5,
	mc_26_3_pale_oak_leaves_distance_V_V_6,
	mc_26_3_pale_oak_leaves_distance_V_V_7,
} mc_26_3_pale_oak_leaves_distance;

typedef struct {
	mc_26_3_pale_oak_leaves_distance distance;
	b8 persistent;
	b8 waterlogged;
} mc_26_3_pale_oak_leaves_properties;

typedef enum {
	mc_26_3_pale_oak_log_axis_V_X,
	mc_26_3_pale_oak_log_axis_V_Y,
	mc_26_3_pale_oak_log_axis_V_Z,
} mc_26_3_pale_oak_log_axis;

typedef struct {
	mc_26_3_pale_oak_log_axis axis;
} mc_26_3_pale_oak_log_properties;

typedef struct {
	b8 powered;
} mc_26_3_pale_oak_pressure_plate_properties;

typedef enum {
	mc_26_3_pale_oak_sapling_stage_V_V_0,
	mc_26_3_pale_oak_sapling_stage_V_V_1,
} mc_26_3_pale_oak_sapling_stage;

typedef struct {
	mc_26_3_pale_oak_sapling_stage stage;
} mc_26_3_pale_oak_sapling_properties;

typedef enum {
	mc_26_3_pale_oak_shelf_facing_V_NORTH,
	mc_26_3_pale_oak_shelf_facing_V_SOUTH,
	mc_26_3_pale_oak_shelf_facing_V_WEST,
	mc_26_3_pale_oak_shelf_facing_V_EAST,
} mc_26_3_pale_oak_shelf_facing;

typedef enum {
	mc_26_3_pale_oak_shelf_side_chain_V_UNCONNECTED,
	mc_26_3_pale_oak_shelf_side_chain_V_RIGHT,
	mc_26_3_pale_oak_shelf_side_chain_V_CENTER,
	mc_26_3_pale_oak_shelf_side_chain_V_LEFT,
} mc_26_3_pale_oak_shelf_side_chain;

typedef struct {
	mc_26_3_pale_oak_shelf_facing facing;
	b8 powered;
	mc_26_3_pale_oak_shelf_side_chain side_chain;
	b8 waterlogged;
} mc_26_3_pale_oak_shelf_properties;

typedef enum {
	mc_26_3_pale_oak_sign_rotation_V_V_0,
	mc_26_3_pale_oak_sign_rotation_V_V_1,
	mc_26_3_pale_oak_sign_rotation_V_V_2,
	mc_26_3_pale_oak_sign_rotation_V_V_3,
	mc_26_3_pale_oak_sign_rotation_V_V_4,
	mc_26_3_pale_oak_sign_rotation_V_V_5,
	mc_26_3_pale_oak_sign_rotation_V_V_6,
	mc_26_3_pale_oak_sign_rotation_V_V_7,
	mc_26_3_pale_oak_sign_rotation_V_V_8,
	mc_26_3_pale_oak_sign_rotation_V_V_9,
	mc_26_3_pale_oak_sign_rotation_V_V_10,
	mc_26_3_pale_oak_sign_rotation_V_V_11,
	mc_26_3_pale_oak_sign_rotation_V_V_12,
	mc_26_3_pale_oak_sign_rotation_V_V_13,
	mc_26_3_pale_oak_sign_rotation_V_V_14,
	mc_26_3_pale_oak_sign_rotation_V_V_15,
} mc_26_3_pale_oak_sign_rotation;

typedef struct {
	mc_26_3_pale_oak_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_pale_oak_sign_properties;

typedef enum {
	mc_26_3_pale_oak_slab_type_V_TOP,
	mc_26_3_pale_oak_slab_type_V_BOTTOM,
	mc_26_3_pale_oak_slab_type_V_DOUBLE,
} mc_26_3_pale_oak_slab_type;

typedef struct {
	mc_26_3_pale_oak_slab_type type;
	b8 waterlogged;
} mc_26_3_pale_oak_slab_properties;

typedef enum {
	mc_26_3_pale_oak_stairs_facing_V_NORTH,
	mc_26_3_pale_oak_stairs_facing_V_SOUTH,
	mc_26_3_pale_oak_stairs_facing_V_WEST,
	mc_26_3_pale_oak_stairs_facing_V_EAST,
} mc_26_3_pale_oak_stairs_facing;

typedef enum {
	mc_26_3_pale_oak_stairs_half_V_TOP,
	mc_26_3_pale_oak_stairs_half_V_BOTTOM,
} mc_26_3_pale_oak_stairs_half;

typedef enum {
	mc_26_3_pale_oak_stairs_shape_V_STRAIGHT,
	mc_26_3_pale_oak_stairs_shape_V_INNER_LEFT,
	mc_26_3_pale_oak_stairs_shape_V_INNER_RIGHT,
	mc_26_3_pale_oak_stairs_shape_V_OUTER_LEFT,
	mc_26_3_pale_oak_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_pale_oak_stairs_shape;

typedef struct {
	mc_26_3_pale_oak_stairs_facing facing;
	mc_26_3_pale_oak_stairs_half half;
	mc_26_3_pale_oak_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_pale_oak_stairs_properties;

typedef enum {
	mc_26_3_pale_oak_trapdoor_facing_V_NORTH,
	mc_26_3_pale_oak_trapdoor_facing_V_SOUTH,
	mc_26_3_pale_oak_trapdoor_facing_V_WEST,
	mc_26_3_pale_oak_trapdoor_facing_V_EAST,
} mc_26_3_pale_oak_trapdoor_facing;

typedef enum {
	mc_26_3_pale_oak_trapdoor_half_V_TOP,
	mc_26_3_pale_oak_trapdoor_half_V_BOTTOM,
} mc_26_3_pale_oak_trapdoor_half;

typedef struct {
	mc_26_3_pale_oak_trapdoor_facing facing;
	mc_26_3_pale_oak_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_pale_oak_trapdoor_properties;

typedef enum {
	mc_26_3_pale_oak_wall_hanging_sign_facing_V_NORTH,
	mc_26_3_pale_oak_wall_hanging_sign_facing_V_SOUTH,
	mc_26_3_pale_oak_wall_hanging_sign_facing_V_WEST,
	mc_26_3_pale_oak_wall_hanging_sign_facing_V_EAST,
} mc_26_3_pale_oak_wall_hanging_sign_facing;

typedef struct {
	mc_26_3_pale_oak_wall_hanging_sign_facing facing;
	b8 waterlogged;
} mc_26_3_pale_oak_wall_hanging_sign_properties;

typedef enum {
	mc_26_3_pale_oak_wall_sign_facing_V_NORTH,
	mc_26_3_pale_oak_wall_sign_facing_V_SOUTH,
	mc_26_3_pale_oak_wall_sign_facing_V_WEST,
	mc_26_3_pale_oak_wall_sign_facing_V_EAST,
} mc_26_3_pale_oak_wall_sign_facing;

typedef struct {
	mc_26_3_pale_oak_wall_sign_facing facing;
	b8 waterlogged;
} mc_26_3_pale_oak_wall_sign_properties;

typedef enum {
	mc_26_3_pale_oak_wood_axis_V_X,
	mc_26_3_pale_oak_wood_axis_V_Y,
	mc_26_3_pale_oak_wood_axis_V_Z,
} mc_26_3_pale_oak_wood_axis;

typedef struct {
	mc_26_3_pale_oak_wood_axis axis;
} mc_26_3_pale_oak_wood_properties;

typedef enum {
	mc_26_3_pearlescent_froglight_axis_V_X,
	mc_26_3_pearlescent_froglight_axis_V_Y,
	mc_26_3_pearlescent_froglight_axis_V_Z,
} mc_26_3_pearlescent_froglight_axis;

typedef struct {
	mc_26_3_pearlescent_froglight_axis axis;
} mc_26_3_pearlescent_froglight_properties;

typedef enum {
	mc_26_3_peony_half_V_UPPER,
	mc_26_3_peony_half_V_LOWER,
} mc_26_3_peony_half;

typedef struct {
	mc_26_3_peony_half half;
} mc_26_3_peony_properties;

typedef enum {
	mc_26_3_petrified_oak_slab_type_V_TOP,
	mc_26_3_petrified_oak_slab_type_V_BOTTOM,
	mc_26_3_petrified_oak_slab_type_V_DOUBLE,
} mc_26_3_petrified_oak_slab_type;

typedef struct {
	mc_26_3_petrified_oak_slab_type type;
	b8 waterlogged;
} mc_26_3_petrified_oak_slab_properties;

typedef enum {
	mc_26_3_piglin_head_rotation_V_V_0,
	mc_26_3_piglin_head_rotation_V_V_1,
	mc_26_3_piglin_head_rotation_V_V_2,
	mc_26_3_piglin_head_rotation_V_V_3,
	mc_26_3_piglin_head_rotation_V_V_4,
	mc_26_3_piglin_head_rotation_V_V_5,
	mc_26_3_piglin_head_rotation_V_V_6,
	mc_26_3_piglin_head_rotation_V_V_7,
	mc_26_3_piglin_head_rotation_V_V_8,
	mc_26_3_piglin_head_rotation_V_V_9,
	mc_26_3_piglin_head_rotation_V_V_10,
	mc_26_3_piglin_head_rotation_V_V_11,
	mc_26_3_piglin_head_rotation_V_V_12,
	mc_26_3_piglin_head_rotation_V_V_13,
	mc_26_3_piglin_head_rotation_V_V_14,
	mc_26_3_piglin_head_rotation_V_V_15,
} mc_26_3_piglin_head_rotation;

typedef struct {
	b8 powered;
	mc_26_3_piglin_head_rotation rotation;
} mc_26_3_piglin_head_properties;

typedef enum {
	mc_26_3_piglin_wall_head_facing_V_NORTH,
	mc_26_3_piglin_wall_head_facing_V_SOUTH,
	mc_26_3_piglin_wall_head_facing_V_WEST,
	mc_26_3_piglin_wall_head_facing_V_EAST,
} mc_26_3_piglin_wall_head_facing;

typedef struct {
	mc_26_3_piglin_wall_head_facing facing;
	b8 powered;
} mc_26_3_piglin_wall_head_properties;

typedef enum {
	mc_26_3_pink_banner_rotation_V_V_0,
	mc_26_3_pink_banner_rotation_V_V_1,
	mc_26_3_pink_banner_rotation_V_V_2,
	mc_26_3_pink_banner_rotation_V_V_3,
	mc_26_3_pink_banner_rotation_V_V_4,
	mc_26_3_pink_banner_rotation_V_V_5,
	mc_26_3_pink_banner_rotation_V_V_6,
	mc_26_3_pink_banner_rotation_V_V_7,
	mc_26_3_pink_banner_rotation_V_V_8,
	mc_26_3_pink_banner_rotation_V_V_9,
	mc_26_3_pink_banner_rotation_V_V_10,
	mc_26_3_pink_banner_rotation_V_V_11,
	mc_26_3_pink_banner_rotation_V_V_12,
	mc_26_3_pink_banner_rotation_V_V_13,
	mc_26_3_pink_banner_rotation_V_V_14,
	mc_26_3_pink_banner_rotation_V_V_15,
} mc_26_3_pink_banner_rotation;

typedef struct {
	mc_26_3_pink_banner_rotation rotation;
} mc_26_3_pink_banner_properties;

typedef enum {
	mc_26_3_pink_bed_facing_V_NORTH,
	mc_26_3_pink_bed_facing_V_SOUTH,
	mc_26_3_pink_bed_facing_V_WEST,
	mc_26_3_pink_bed_facing_V_EAST,
} mc_26_3_pink_bed_facing;

typedef enum {
	mc_26_3_pink_bed_part_V_HEAD,
	mc_26_3_pink_bed_part_V_FOOT,
} mc_26_3_pink_bed_part;

typedef struct {
	mc_26_3_pink_bed_facing facing;
	b8 occupied;
	mc_26_3_pink_bed_part part;
} mc_26_3_pink_bed_properties;

typedef enum {
	mc_26_3_pink_candle_candles_V_V_1,
	mc_26_3_pink_candle_candles_V_V_2,
	mc_26_3_pink_candle_candles_V_V_3,
	mc_26_3_pink_candle_candles_V_V_4,
} mc_26_3_pink_candle_candles;

typedef struct {
	mc_26_3_pink_candle_candles candles;
	b8 lit;
	b8 waterlogged;
} mc_26_3_pink_candle_properties;

typedef struct {
	b8 lit;
} mc_26_3_pink_candle_cake_properties;

typedef enum {
	mc_26_3_pink_concrete_slab_type_V_TOP,
	mc_26_3_pink_concrete_slab_type_V_BOTTOM,
	mc_26_3_pink_concrete_slab_type_V_DOUBLE,
} mc_26_3_pink_concrete_slab_type;

typedef struct {
	mc_26_3_pink_concrete_slab_type type;
	b8 waterlogged;
} mc_26_3_pink_concrete_slab_properties;

typedef enum {
	mc_26_3_pink_concrete_stairs_facing_V_NORTH,
	mc_26_3_pink_concrete_stairs_facing_V_SOUTH,
	mc_26_3_pink_concrete_stairs_facing_V_WEST,
	mc_26_3_pink_concrete_stairs_facing_V_EAST,
} mc_26_3_pink_concrete_stairs_facing;

typedef enum {
	mc_26_3_pink_concrete_stairs_half_V_TOP,
	mc_26_3_pink_concrete_stairs_half_V_BOTTOM,
} mc_26_3_pink_concrete_stairs_half;

typedef enum {
	mc_26_3_pink_concrete_stairs_shape_V_STRAIGHT,
	mc_26_3_pink_concrete_stairs_shape_V_INNER_LEFT,
	mc_26_3_pink_concrete_stairs_shape_V_INNER_RIGHT,
	mc_26_3_pink_concrete_stairs_shape_V_OUTER_LEFT,
	mc_26_3_pink_concrete_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_pink_concrete_stairs_shape;

typedef struct {
	mc_26_3_pink_concrete_stairs_facing facing;
	mc_26_3_pink_concrete_stairs_half half;
	mc_26_3_pink_concrete_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_pink_concrete_stairs_properties;

typedef enum {
	mc_26_3_pink_glazed_terracotta_facing_V_NORTH,
	mc_26_3_pink_glazed_terracotta_facing_V_SOUTH,
	mc_26_3_pink_glazed_terracotta_facing_V_WEST,
	mc_26_3_pink_glazed_terracotta_facing_V_EAST,
} mc_26_3_pink_glazed_terracotta_facing;

typedef struct {
	mc_26_3_pink_glazed_terracotta_facing facing;
} mc_26_3_pink_glazed_terracotta_properties;

typedef enum {
	mc_26_3_pink_petals_facing_V_NORTH,
	mc_26_3_pink_petals_facing_V_SOUTH,
	mc_26_3_pink_petals_facing_V_WEST,
	mc_26_3_pink_petals_facing_V_EAST,
} mc_26_3_pink_petals_facing;

typedef enum {
	mc_26_3_pink_petals_flower_amount_V_V_1,
	mc_26_3_pink_petals_flower_amount_V_V_2,
	mc_26_3_pink_petals_flower_amount_V_V_3,
	mc_26_3_pink_petals_flower_amount_V_V_4,
} mc_26_3_pink_petals_flower_amount;

typedef struct {
	mc_26_3_pink_petals_facing facing;
	mc_26_3_pink_petals_flower_amount flower_amount;
} mc_26_3_pink_petals_properties;

typedef enum {
	mc_26_3_pink_shulker_box_facing_V_NORTH,
	mc_26_3_pink_shulker_box_facing_V_EAST,
	mc_26_3_pink_shulker_box_facing_V_SOUTH,
	mc_26_3_pink_shulker_box_facing_V_WEST,
	mc_26_3_pink_shulker_box_facing_V_UP,
	mc_26_3_pink_shulker_box_facing_V_DOWN,
} mc_26_3_pink_shulker_box_facing;

typedef struct {
	mc_26_3_pink_shulker_box_facing facing;
} mc_26_3_pink_shulker_box_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_pink_stained_glass_pane_properties;

typedef enum {
	mc_26_3_pink_wall_banner_facing_V_NORTH,
	mc_26_3_pink_wall_banner_facing_V_SOUTH,
	mc_26_3_pink_wall_banner_facing_V_WEST,
	mc_26_3_pink_wall_banner_facing_V_EAST,
} mc_26_3_pink_wall_banner_facing;

typedef struct {
	mc_26_3_pink_wall_banner_facing facing;
} mc_26_3_pink_wall_banner_properties;

typedef enum {
	mc_26_3_pink_wool_slab_type_V_TOP,
	mc_26_3_pink_wool_slab_type_V_BOTTOM,
	mc_26_3_pink_wool_slab_type_V_DOUBLE,
} mc_26_3_pink_wool_slab_type;

typedef struct {
	mc_26_3_pink_wool_slab_type type;
	b8 waterlogged;
} mc_26_3_pink_wool_slab_properties;

typedef enum {
	mc_26_3_pink_wool_stairs_facing_V_NORTH,
	mc_26_3_pink_wool_stairs_facing_V_SOUTH,
	mc_26_3_pink_wool_stairs_facing_V_WEST,
	mc_26_3_pink_wool_stairs_facing_V_EAST,
} mc_26_3_pink_wool_stairs_facing;

typedef enum {
	mc_26_3_pink_wool_stairs_half_V_TOP,
	mc_26_3_pink_wool_stairs_half_V_BOTTOM,
} mc_26_3_pink_wool_stairs_half;

typedef enum {
	mc_26_3_pink_wool_stairs_shape_V_STRAIGHT,
	mc_26_3_pink_wool_stairs_shape_V_INNER_LEFT,
	mc_26_3_pink_wool_stairs_shape_V_INNER_RIGHT,
	mc_26_3_pink_wool_stairs_shape_V_OUTER_LEFT,
	mc_26_3_pink_wool_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_pink_wool_stairs_shape;

typedef struct {
	mc_26_3_pink_wool_stairs_facing facing;
	mc_26_3_pink_wool_stairs_half half;
	mc_26_3_pink_wool_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_pink_wool_stairs_properties;

typedef enum {
	mc_26_3_piston_facing_V_NORTH,
	mc_26_3_piston_facing_V_EAST,
	mc_26_3_piston_facing_V_SOUTH,
	mc_26_3_piston_facing_V_WEST,
	mc_26_3_piston_facing_V_UP,
	mc_26_3_piston_facing_V_DOWN,
} mc_26_3_piston_facing;

typedef struct {
	b8 extended;
	mc_26_3_piston_facing facing;
} mc_26_3_piston_properties;

typedef enum {
	mc_26_3_piston_head_type_V_NORMAL,
	mc_26_3_piston_head_type_V_STICKY,
} mc_26_3_piston_head_type;

typedef enum {
	mc_26_3_piston_head_facing_V_NORTH,
	mc_26_3_piston_head_facing_V_EAST,
	mc_26_3_piston_head_facing_V_SOUTH,
	mc_26_3_piston_head_facing_V_WEST,
	mc_26_3_piston_head_facing_V_UP,
	mc_26_3_piston_head_facing_V_DOWN,
} mc_26_3_piston_head_facing;

typedef struct {
	mc_26_3_piston_head_type type;
	mc_26_3_piston_head_facing facing;
	b8 short_;
} mc_26_3_piston_head_properties;

typedef enum {
	mc_26_3_pitcher_crop_age_V_V_0,
	mc_26_3_pitcher_crop_age_V_V_1,
	mc_26_3_pitcher_crop_age_V_V_2,
	mc_26_3_pitcher_crop_age_V_V_3,
	mc_26_3_pitcher_crop_age_V_V_4,
} mc_26_3_pitcher_crop_age;

typedef enum {
	mc_26_3_pitcher_crop_half_V_UPPER,
	mc_26_3_pitcher_crop_half_V_LOWER,
} mc_26_3_pitcher_crop_half;

typedef struct {
	mc_26_3_pitcher_crop_age age;
	mc_26_3_pitcher_crop_half half;
} mc_26_3_pitcher_crop_properties;

typedef enum {
	mc_26_3_pitcher_plant_half_V_UPPER,
	mc_26_3_pitcher_plant_half_V_LOWER,
} mc_26_3_pitcher_plant_half;

typedef struct {
	mc_26_3_pitcher_plant_half half;
} mc_26_3_pitcher_plant_properties;

typedef enum {
	mc_26_3_player_head_rotation_V_V_0,
	mc_26_3_player_head_rotation_V_V_1,
	mc_26_3_player_head_rotation_V_V_2,
	mc_26_3_player_head_rotation_V_V_3,
	mc_26_3_player_head_rotation_V_V_4,
	mc_26_3_player_head_rotation_V_V_5,
	mc_26_3_player_head_rotation_V_V_6,
	mc_26_3_player_head_rotation_V_V_7,
	mc_26_3_player_head_rotation_V_V_8,
	mc_26_3_player_head_rotation_V_V_9,
	mc_26_3_player_head_rotation_V_V_10,
	mc_26_3_player_head_rotation_V_V_11,
	mc_26_3_player_head_rotation_V_V_12,
	mc_26_3_player_head_rotation_V_V_13,
	mc_26_3_player_head_rotation_V_V_14,
	mc_26_3_player_head_rotation_V_V_15,
} mc_26_3_player_head_rotation;

typedef struct {
	b8 powered;
	mc_26_3_player_head_rotation rotation;
} mc_26_3_player_head_properties;

typedef enum {
	mc_26_3_player_wall_head_facing_V_NORTH,
	mc_26_3_player_wall_head_facing_V_SOUTH,
	mc_26_3_player_wall_head_facing_V_WEST,
	mc_26_3_player_wall_head_facing_V_EAST,
} mc_26_3_player_wall_head_facing;

typedef struct {
	mc_26_3_player_wall_head_facing facing;
	b8 powered;
} mc_26_3_player_wall_head_properties;

typedef struct {
	b8 snowy;
} mc_26_3_podzol_properties;

typedef enum {
	mc_26_3_pointed_dripstone_thickness_V_TIP_MERGE,
	mc_26_3_pointed_dripstone_thickness_V_TIP,
	mc_26_3_pointed_dripstone_thickness_V_FRUSTUM,
	mc_26_3_pointed_dripstone_thickness_V_MIDDLE,
	mc_26_3_pointed_dripstone_thickness_V_BASE,
} mc_26_3_pointed_dripstone_thickness;

typedef enum {
	mc_26_3_pointed_dripstone_vertical_direction_V_UP,
	mc_26_3_pointed_dripstone_vertical_direction_V_DOWN,
} mc_26_3_pointed_dripstone_vertical_direction;

typedef struct {
	mc_26_3_pointed_dripstone_thickness thickness;
	mc_26_3_pointed_dripstone_vertical_direction vertical_direction;
	b8 waterlogged;
} mc_26_3_pointed_dripstone_properties;

typedef enum {
	mc_26_3_polished_andesite_slab_type_V_TOP,
	mc_26_3_polished_andesite_slab_type_V_BOTTOM,
	mc_26_3_polished_andesite_slab_type_V_DOUBLE,
} mc_26_3_polished_andesite_slab_type;

typedef struct {
	mc_26_3_polished_andesite_slab_type type;
	b8 waterlogged;
} mc_26_3_polished_andesite_slab_properties;

typedef enum {
	mc_26_3_polished_andesite_stairs_facing_V_NORTH,
	mc_26_3_polished_andesite_stairs_facing_V_SOUTH,
	mc_26_3_polished_andesite_stairs_facing_V_WEST,
	mc_26_3_polished_andesite_stairs_facing_V_EAST,
} mc_26_3_polished_andesite_stairs_facing;

typedef enum {
	mc_26_3_polished_andesite_stairs_half_V_TOP,
	mc_26_3_polished_andesite_stairs_half_V_BOTTOM,
} mc_26_3_polished_andesite_stairs_half;

typedef enum {
	mc_26_3_polished_andesite_stairs_shape_V_STRAIGHT,
	mc_26_3_polished_andesite_stairs_shape_V_INNER_LEFT,
	mc_26_3_polished_andesite_stairs_shape_V_INNER_RIGHT,
	mc_26_3_polished_andesite_stairs_shape_V_OUTER_LEFT,
	mc_26_3_polished_andesite_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_polished_andesite_stairs_shape;

typedef struct {
	mc_26_3_polished_andesite_stairs_facing facing;
	mc_26_3_polished_andesite_stairs_half half;
	mc_26_3_polished_andesite_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_polished_andesite_stairs_properties;

typedef enum {
	mc_26_3_polished_basalt_axis_V_X,
	mc_26_3_polished_basalt_axis_V_Y,
	mc_26_3_polished_basalt_axis_V_Z,
} mc_26_3_polished_basalt_axis;

typedef struct {
	mc_26_3_polished_basalt_axis axis;
} mc_26_3_polished_basalt_properties;

typedef enum {
	mc_26_3_polished_blackstone_brick_slab_type_V_TOP,
	mc_26_3_polished_blackstone_brick_slab_type_V_BOTTOM,
	mc_26_3_polished_blackstone_brick_slab_type_V_DOUBLE,
} mc_26_3_polished_blackstone_brick_slab_type;

typedef struct {
	mc_26_3_polished_blackstone_brick_slab_type type;
	b8 waterlogged;
} mc_26_3_polished_blackstone_brick_slab_properties;

typedef enum {
	mc_26_3_polished_blackstone_brick_stairs_facing_V_NORTH,
	mc_26_3_polished_blackstone_brick_stairs_facing_V_SOUTH,
	mc_26_3_polished_blackstone_brick_stairs_facing_V_WEST,
	mc_26_3_polished_blackstone_brick_stairs_facing_V_EAST,
} mc_26_3_polished_blackstone_brick_stairs_facing;

typedef enum {
	mc_26_3_polished_blackstone_brick_stairs_half_V_TOP,
	mc_26_3_polished_blackstone_brick_stairs_half_V_BOTTOM,
} mc_26_3_polished_blackstone_brick_stairs_half;

typedef enum {
	mc_26_3_polished_blackstone_brick_stairs_shape_V_STRAIGHT,
	mc_26_3_polished_blackstone_brick_stairs_shape_V_INNER_LEFT,
	mc_26_3_polished_blackstone_brick_stairs_shape_V_INNER_RIGHT,
	mc_26_3_polished_blackstone_brick_stairs_shape_V_OUTER_LEFT,
	mc_26_3_polished_blackstone_brick_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_polished_blackstone_brick_stairs_shape;

typedef struct {
	mc_26_3_polished_blackstone_brick_stairs_facing facing;
	mc_26_3_polished_blackstone_brick_stairs_half half;
	mc_26_3_polished_blackstone_brick_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_polished_blackstone_brick_stairs_properties;

typedef enum {
	mc_26_3_polished_blackstone_brick_wall_east_V_NONE,
	mc_26_3_polished_blackstone_brick_wall_east_V_LOW,
	mc_26_3_polished_blackstone_brick_wall_east_V_TALL,
} mc_26_3_polished_blackstone_brick_wall_east;

typedef enum {
	mc_26_3_polished_blackstone_brick_wall_north_V_NONE,
	mc_26_3_polished_blackstone_brick_wall_north_V_LOW,
	mc_26_3_polished_blackstone_brick_wall_north_V_TALL,
} mc_26_3_polished_blackstone_brick_wall_north;

typedef enum {
	mc_26_3_polished_blackstone_brick_wall_south_V_NONE,
	mc_26_3_polished_blackstone_brick_wall_south_V_LOW,
	mc_26_3_polished_blackstone_brick_wall_south_V_TALL,
} mc_26_3_polished_blackstone_brick_wall_south;

typedef enum {
	mc_26_3_polished_blackstone_brick_wall_west_V_NONE,
	mc_26_3_polished_blackstone_brick_wall_west_V_LOW,
	mc_26_3_polished_blackstone_brick_wall_west_V_TALL,
} mc_26_3_polished_blackstone_brick_wall_west;

typedef struct {
	mc_26_3_polished_blackstone_brick_wall_east east;
	mc_26_3_polished_blackstone_brick_wall_north north;
	mc_26_3_polished_blackstone_brick_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_polished_blackstone_brick_wall_west west;
} mc_26_3_polished_blackstone_brick_wall_properties;

typedef enum {
	mc_26_3_polished_blackstone_button_face_V_FLOOR,
	mc_26_3_polished_blackstone_button_face_V_WALL,
	mc_26_3_polished_blackstone_button_face_V_CEILING,
} mc_26_3_polished_blackstone_button_face;

typedef enum {
	mc_26_3_polished_blackstone_button_facing_V_NORTH,
	mc_26_3_polished_blackstone_button_facing_V_SOUTH,
	mc_26_3_polished_blackstone_button_facing_V_WEST,
	mc_26_3_polished_blackstone_button_facing_V_EAST,
} mc_26_3_polished_blackstone_button_facing;

typedef struct {
	mc_26_3_polished_blackstone_button_face face;
	mc_26_3_polished_blackstone_button_facing facing;
	b8 powered;
} mc_26_3_polished_blackstone_button_properties;

typedef struct {
	b8 powered;
} mc_26_3_polished_blackstone_pressure_plate_properties;

typedef enum {
	mc_26_3_polished_blackstone_slab_type_V_TOP,
	mc_26_3_polished_blackstone_slab_type_V_BOTTOM,
	mc_26_3_polished_blackstone_slab_type_V_DOUBLE,
} mc_26_3_polished_blackstone_slab_type;

typedef struct {
	mc_26_3_polished_blackstone_slab_type type;
	b8 waterlogged;
} mc_26_3_polished_blackstone_slab_properties;

typedef enum {
	mc_26_3_polished_blackstone_stairs_facing_V_NORTH,
	mc_26_3_polished_blackstone_stairs_facing_V_SOUTH,
	mc_26_3_polished_blackstone_stairs_facing_V_WEST,
	mc_26_3_polished_blackstone_stairs_facing_V_EAST,
} mc_26_3_polished_blackstone_stairs_facing;

typedef enum {
	mc_26_3_polished_blackstone_stairs_half_V_TOP,
	mc_26_3_polished_blackstone_stairs_half_V_BOTTOM,
} mc_26_3_polished_blackstone_stairs_half;

typedef enum {
	mc_26_3_polished_blackstone_stairs_shape_V_STRAIGHT,
	mc_26_3_polished_blackstone_stairs_shape_V_INNER_LEFT,
	mc_26_3_polished_blackstone_stairs_shape_V_INNER_RIGHT,
	mc_26_3_polished_blackstone_stairs_shape_V_OUTER_LEFT,
	mc_26_3_polished_blackstone_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_polished_blackstone_stairs_shape;

typedef struct {
	mc_26_3_polished_blackstone_stairs_facing facing;
	mc_26_3_polished_blackstone_stairs_half half;
	mc_26_3_polished_blackstone_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_polished_blackstone_stairs_properties;

typedef enum {
	mc_26_3_polished_blackstone_wall_east_V_NONE,
	mc_26_3_polished_blackstone_wall_east_V_LOW,
	mc_26_3_polished_blackstone_wall_east_V_TALL,
} mc_26_3_polished_blackstone_wall_east;

typedef enum {
	mc_26_3_polished_blackstone_wall_north_V_NONE,
	mc_26_3_polished_blackstone_wall_north_V_LOW,
	mc_26_3_polished_blackstone_wall_north_V_TALL,
} mc_26_3_polished_blackstone_wall_north;

typedef enum {
	mc_26_3_polished_blackstone_wall_south_V_NONE,
	mc_26_3_polished_blackstone_wall_south_V_LOW,
	mc_26_3_polished_blackstone_wall_south_V_TALL,
} mc_26_3_polished_blackstone_wall_south;

typedef enum {
	mc_26_3_polished_blackstone_wall_west_V_NONE,
	mc_26_3_polished_blackstone_wall_west_V_LOW,
	mc_26_3_polished_blackstone_wall_west_V_TALL,
} mc_26_3_polished_blackstone_wall_west;

typedef struct {
	mc_26_3_polished_blackstone_wall_east east;
	mc_26_3_polished_blackstone_wall_north north;
	mc_26_3_polished_blackstone_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_polished_blackstone_wall_west west;
} mc_26_3_polished_blackstone_wall_properties;

typedef enum {
	mc_26_3_polished_cinnabar_slab_type_V_TOP,
	mc_26_3_polished_cinnabar_slab_type_V_BOTTOM,
	mc_26_3_polished_cinnabar_slab_type_V_DOUBLE,
} mc_26_3_polished_cinnabar_slab_type;

typedef struct {
	mc_26_3_polished_cinnabar_slab_type type;
	b8 waterlogged;
} mc_26_3_polished_cinnabar_slab_properties;

typedef enum {
	mc_26_3_polished_cinnabar_stairs_facing_V_NORTH,
	mc_26_3_polished_cinnabar_stairs_facing_V_SOUTH,
	mc_26_3_polished_cinnabar_stairs_facing_V_WEST,
	mc_26_3_polished_cinnabar_stairs_facing_V_EAST,
} mc_26_3_polished_cinnabar_stairs_facing;

typedef enum {
	mc_26_3_polished_cinnabar_stairs_half_V_TOP,
	mc_26_3_polished_cinnabar_stairs_half_V_BOTTOM,
} mc_26_3_polished_cinnabar_stairs_half;

typedef enum {
	mc_26_3_polished_cinnabar_stairs_shape_V_STRAIGHT,
	mc_26_3_polished_cinnabar_stairs_shape_V_INNER_LEFT,
	mc_26_3_polished_cinnabar_stairs_shape_V_INNER_RIGHT,
	mc_26_3_polished_cinnabar_stairs_shape_V_OUTER_LEFT,
	mc_26_3_polished_cinnabar_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_polished_cinnabar_stairs_shape;

typedef struct {
	mc_26_3_polished_cinnabar_stairs_facing facing;
	mc_26_3_polished_cinnabar_stairs_half half;
	mc_26_3_polished_cinnabar_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_polished_cinnabar_stairs_properties;

typedef enum {
	mc_26_3_polished_cinnabar_wall_east_V_NONE,
	mc_26_3_polished_cinnabar_wall_east_V_LOW,
	mc_26_3_polished_cinnabar_wall_east_V_TALL,
} mc_26_3_polished_cinnabar_wall_east;

typedef enum {
	mc_26_3_polished_cinnabar_wall_north_V_NONE,
	mc_26_3_polished_cinnabar_wall_north_V_LOW,
	mc_26_3_polished_cinnabar_wall_north_V_TALL,
} mc_26_3_polished_cinnabar_wall_north;

typedef enum {
	mc_26_3_polished_cinnabar_wall_south_V_NONE,
	mc_26_3_polished_cinnabar_wall_south_V_LOW,
	mc_26_3_polished_cinnabar_wall_south_V_TALL,
} mc_26_3_polished_cinnabar_wall_south;

typedef enum {
	mc_26_3_polished_cinnabar_wall_west_V_NONE,
	mc_26_3_polished_cinnabar_wall_west_V_LOW,
	mc_26_3_polished_cinnabar_wall_west_V_TALL,
} mc_26_3_polished_cinnabar_wall_west;

typedef struct {
	mc_26_3_polished_cinnabar_wall_east east;
	mc_26_3_polished_cinnabar_wall_north north;
	mc_26_3_polished_cinnabar_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_polished_cinnabar_wall_west west;
} mc_26_3_polished_cinnabar_wall_properties;

typedef enum {
	mc_26_3_polished_deepslate_slab_type_V_TOP,
	mc_26_3_polished_deepslate_slab_type_V_BOTTOM,
	mc_26_3_polished_deepslate_slab_type_V_DOUBLE,
} mc_26_3_polished_deepslate_slab_type;

typedef struct {
	mc_26_3_polished_deepslate_slab_type type;
	b8 waterlogged;
} mc_26_3_polished_deepslate_slab_properties;

typedef enum {
	mc_26_3_polished_deepslate_stairs_facing_V_NORTH,
	mc_26_3_polished_deepslate_stairs_facing_V_SOUTH,
	mc_26_3_polished_deepslate_stairs_facing_V_WEST,
	mc_26_3_polished_deepslate_stairs_facing_V_EAST,
} mc_26_3_polished_deepslate_stairs_facing;

typedef enum {
	mc_26_3_polished_deepslate_stairs_half_V_TOP,
	mc_26_3_polished_deepslate_stairs_half_V_BOTTOM,
} mc_26_3_polished_deepslate_stairs_half;

typedef enum {
	mc_26_3_polished_deepslate_stairs_shape_V_STRAIGHT,
	mc_26_3_polished_deepslate_stairs_shape_V_INNER_LEFT,
	mc_26_3_polished_deepslate_stairs_shape_V_INNER_RIGHT,
	mc_26_3_polished_deepslate_stairs_shape_V_OUTER_LEFT,
	mc_26_3_polished_deepslate_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_polished_deepslate_stairs_shape;

typedef struct {
	mc_26_3_polished_deepslate_stairs_facing facing;
	mc_26_3_polished_deepslate_stairs_half half;
	mc_26_3_polished_deepslate_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_polished_deepslate_stairs_properties;

typedef enum {
	mc_26_3_polished_deepslate_wall_east_V_NONE,
	mc_26_3_polished_deepslate_wall_east_V_LOW,
	mc_26_3_polished_deepslate_wall_east_V_TALL,
} mc_26_3_polished_deepslate_wall_east;

typedef enum {
	mc_26_3_polished_deepslate_wall_north_V_NONE,
	mc_26_3_polished_deepslate_wall_north_V_LOW,
	mc_26_3_polished_deepslate_wall_north_V_TALL,
} mc_26_3_polished_deepslate_wall_north;

typedef enum {
	mc_26_3_polished_deepslate_wall_south_V_NONE,
	mc_26_3_polished_deepslate_wall_south_V_LOW,
	mc_26_3_polished_deepslate_wall_south_V_TALL,
} mc_26_3_polished_deepslate_wall_south;

typedef enum {
	mc_26_3_polished_deepslate_wall_west_V_NONE,
	mc_26_3_polished_deepslate_wall_west_V_LOW,
	mc_26_3_polished_deepslate_wall_west_V_TALL,
} mc_26_3_polished_deepslate_wall_west;

typedef struct {
	mc_26_3_polished_deepslate_wall_east east;
	mc_26_3_polished_deepslate_wall_north north;
	mc_26_3_polished_deepslate_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_polished_deepslate_wall_west west;
} mc_26_3_polished_deepslate_wall_properties;

typedef enum {
	mc_26_3_polished_diorite_slab_type_V_TOP,
	mc_26_3_polished_diorite_slab_type_V_BOTTOM,
	mc_26_3_polished_diorite_slab_type_V_DOUBLE,
} mc_26_3_polished_diorite_slab_type;

typedef struct {
	mc_26_3_polished_diorite_slab_type type;
	b8 waterlogged;
} mc_26_3_polished_diorite_slab_properties;

typedef enum {
	mc_26_3_polished_diorite_stairs_facing_V_NORTH,
	mc_26_3_polished_diorite_stairs_facing_V_SOUTH,
	mc_26_3_polished_diorite_stairs_facing_V_WEST,
	mc_26_3_polished_diorite_stairs_facing_V_EAST,
} mc_26_3_polished_diorite_stairs_facing;

typedef enum {
	mc_26_3_polished_diorite_stairs_half_V_TOP,
	mc_26_3_polished_diorite_stairs_half_V_BOTTOM,
} mc_26_3_polished_diorite_stairs_half;

typedef enum {
	mc_26_3_polished_diorite_stairs_shape_V_STRAIGHT,
	mc_26_3_polished_diorite_stairs_shape_V_INNER_LEFT,
	mc_26_3_polished_diorite_stairs_shape_V_INNER_RIGHT,
	mc_26_3_polished_diorite_stairs_shape_V_OUTER_LEFT,
	mc_26_3_polished_diorite_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_polished_diorite_stairs_shape;

typedef struct {
	mc_26_3_polished_diorite_stairs_facing facing;
	mc_26_3_polished_diorite_stairs_half half;
	mc_26_3_polished_diorite_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_polished_diorite_stairs_properties;

typedef enum {
	mc_26_3_polished_granite_slab_type_V_TOP,
	mc_26_3_polished_granite_slab_type_V_BOTTOM,
	mc_26_3_polished_granite_slab_type_V_DOUBLE,
} mc_26_3_polished_granite_slab_type;

typedef struct {
	mc_26_3_polished_granite_slab_type type;
	b8 waterlogged;
} mc_26_3_polished_granite_slab_properties;

typedef enum {
	mc_26_3_polished_granite_stairs_facing_V_NORTH,
	mc_26_3_polished_granite_stairs_facing_V_SOUTH,
	mc_26_3_polished_granite_stairs_facing_V_WEST,
	mc_26_3_polished_granite_stairs_facing_V_EAST,
} mc_26_3_polished_granite_stairs_facing;

typedef enum {
	mc_26_3_polished_granite_stairs_half_V_TOP,
	mc_26_3_polished_granite_stairs_half_V_BOTTOM,
} mc_26_3_polished_granite_stairs_half;

typedef enum {
	mc_26_3_polished_granite_stairs_shape_V_STRAIGHT,
	mc_26_3_polished_granite_stairs_shape_V_INNER_LEFT,
	mc_26_3_polished_granite_stairs_shape_V_INNER_RIGHT,
	mc_26_3_polished_granite_stairs_shape_V_OUTER_LEFT,
	mc_26_3_polished_granite_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_polished_granite_stairs_shape;

typedef struct {
	mc_26_3_polished_granite_stairs_facing facing;
	mc_26_3_polished_granite_stairs_half half;
	mc_26_3_polished_granite_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_polished_granite_stairs_properties;

typedef enum {
	mc_26_3_polished_sulfur_slab_type_V_TOP,
	mc_26_3_polished_sulfur_slab_type_V_BOTTOM,
	mc_26_3_polished_sulfur_slab_type_V_DOUBLE,
} mc_26_3_polished_sulfur_slab_type;

typedef struct {
	mc_26_3_polished_sulfur_slab_type type;
	b8 waterlogged;
} mc_26_3_polished_sulfur_slab_properties;

typedef enum {
	mc_26_3_polished_sulfur_stairs_facing_V_NORTH,
	mc_26_3_polished_sulfur_stairs_facing_V_SOUTH,
	mc_26_3_polished_sulfur_stairs_facing_V_WEST,
	mc_26_3_polished_sulfur_stairs_facing_V_EAST,
} mc_26_3_polished_sulfur_stairs_facing;

typedef enum {
	mc_26_3_polished_sulfur_stairs_half_V_TOP,
	mc_26_3_polished_sulfur_stairs_half_V_BOTTOM,
} mc_26_3_polished_sulfur_stairs_half;

typedef enum {
	mc_26_3_polished_sulfur_stairs_shape_V_STRAIGHT,
	mc_26_3_polished_sulfur_stairs_shape_V_INNER_LEFT,
	mc_26_3_polished_sulfur_stairs_shape_V_INNER_RIGHT,
	mc_26_3_polished_sulfur_stairs_shape_V_OUTER_LEFT,
	mc_26_3_polished_sulfur_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_polished_sulfur_stairs_shape;

typedef struct {
	mc_26_3_polished_sulfur_stairs_facing facing;
	mc_26_3_polished_sulfur_stairs_half half;
	mc_26_3_polished_sulfur_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_polished_sulfur_stairs_properties;

typedef enum {
	mc_26_3_polished_sulfur_wall_east_V_NONE,
	mc_26_3_polished_sulfur_wall_east_V_LOW,
	mc_26_3_polished_sulfur_wall_east_V_TALL,
} mc_26_3_polished_sulfur_wall_east;

typedef enum {
	mc_26_3_polished_sulfur_wall_north_V_NONE,
	mc_26_3_polished_sulfur_wall_north_V_LOW,
	mc_26_3_polished_sulfur_wall_north_V_TALL,
} mc_26_3_polished_sulfur_wall_north;

typedef enum {
	mc_26_3_polished_sulfur_wall_south_V_NONE,
	mc_26_3_polished_sulfur_wall_south_V_LOW,
	mc_26_3_polished_sulfur_wall_south_V_TALL,
} mc_26_3_polished_sulfur_wall_south;

typedef enum {
	mc_26_3_polished_sulfur_wall_west_V_NONE,
	mc_26_3_polished_sulfur_wall_west_V_LOW,
	mc_26_3_polished_sulfur_wall_west_V_TALL,
} mc_26_3_polished_sulfur_wall_west;

typedef struct {
	mc_26_3_polished_sulfur_wall_east east;
	mc_26_3_polished_sulfur_wall_north north;
	mc_26_3_polished_sulfur_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_polished_sulfur_wall_west west;
} mc_26_3_polished_sulfur_wall_properties;

typedef enum {
	mc_26_3_polished_tuff_slab_type_V_TOP,
	mc_26_3_polished_tuff_slab_type_V_BOTTOM,
	mc_26_3_polished_tuff_slab_type_V_DOUBLE,
} mc_26_3_polished_tuff_slab_type;

typedef struct {
	mc_26_3_polished_tuff_slab_type type;
	b8 waterlogged;
} mc_26_3_polished_tuff_slab_properties;

typedef enum {
	mc_26_3_polished_tuff_stairs_facing_V_NORTH,
	mc_26_3_polished_tuff_stairs_facing_V_SOUTH,
	mc_26_3_polished_tuff_stairs_facing_V_WEST,
	mc_26_3_polished_tuff_stairs_facing_V_EAST,
} mc_26_3_polished_tuff_stairs_facing;

typedef enum {
	mc_26_3_polished_tuff_stairs_half_V_TOP,
	mc_26_3_polished_tuff_stairs_half_V_BOTTOM,
} mc_26_3_polished_tuff_stairs_half;

typedef enum {
	mc_26_3_polished_tuff_stairs_shape_V_STRAIGHT,
	mc_26_3_polished_tuff_stairs_shape_V_INNER_LEFT,
	mc_26_3_polished_tuff_stairs_shape_V_INNER_RIGHT,
	mc_26_3_polished_tuff_stairs_shape_V_OUTER_LEFT,
	mc_26_3_polished_tuff_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_polished_tuff_stairs_shape;

typedef struct {
	mc_26_3_polished_tuff_stairs_facing facing;
	mc_26_3_polished_tuff_stairs_half half;
	mc_26_3_polished_tuff_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_polished_tuff_stairs_properties;

typedef enum {
	mc_26_3_polished_tuff_wall_east_V_NONE,
	mc_26_3_polished_tuff_wall_east_V_LOW,
	mc_26_3_polished_tuff_wall_east_V_TALL,
} mc_26_3_polished_tuff_wall_east;

typedef enum {
	mc_26_3_polished_tuff_wall_north_V_NONE,
	mc_26_3_polished_tuff_wall_north_V_LOW,
	mc_26_3_polished_tuff_wall_north_V_TALL,
} mc_26_3_polished_tuff_wall_north;

typedef enum {
	mc_26_3_polished_tuff_wall_south_V_NONE,
	mc_26_3_polished_tuff_wall_south_V_LOW,
	mc_26_3_polished_tuff_wall_south_V_TALL,
} mc_26_3_polished_tuff_wall_south;

typedef enum {
	mc_26_3_polished_tuff_wall_west_V_NONE,
	mc_26_3_polished_tuff_wall_west_V_LOW,
	mc_26_3_polished_tuff_wall_west_V_TALL,
} mc_26_3_polished_tuff_wall_west;

typedef struct {
	mc_26_3_polished_tuff_wall_east east;
	mc_26_3_polished_tuff_wall_north north;
	mc_26_3_polished_tuff_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_polished_tuff_wall_west west;
} mc_26_3_polished_tuff_wall_properties;

typedef enum {
	mc_26_3_poplar_button_face_V_FLOOR,
	mc_26_3_poplar_button_face_V_WALL,
	mc_26_3_poplar_button_face_V_CEILING,
} mc_26_3_poplar_button_face;

typedef enum {
	mc_26_3_poplar_button_facing_V_NORTH,
	mc_26_3_poplar_button_facing_V_SOUTH,
	mc_26_3_poplar_button_facing_V_WEST,
	mc_26_3_poplar_button_facing_V_EAST,
} mc_26_3_poplar_button_facing;

typedef struct {
	mc_26_3_poplar_button_face face;
	mc_26_3_poplar_button_facing facing;
	b8 powered;
} mc_26_3_poplar_button_properties;

typedef enum {
	mc_26_3_poplar_door_facing_V_NORTH,
	mc_26_3_poplar_door_facing_V_SOUTH,
	mc_26_3_poplar_door_facing_V_WEST,
	mc_26_3_poplar_door_facing_V_EAST,
} mc_26_3_poplar_door_facing;

typedef enum {
	mc_26_3_poplar_door_half_V_UPPER,
	mc_26_3_poplar_door_half_V_LOWER,
} mc_26_3_poplar_door_half;

typedef enum {
	mc_26_3_poplar_door_hinge_V_LEFT,
	mc_26_3_poplar_door_hinge_V_RIGHT,
} mc_26_3_poplar_door_hinge;

typedef struct {
	mc_26_3_poplar_door_facing facing;
	mc_26_3_poplar_door_half half;
	mc_26_3_poplar_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_poplar_door_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_poplar_fence_properties;

typedef enum {
	mc_26_3_poplar_fence_gate_facing_V_NORTH,
	mc_26_3_poplar_fence_gate_facing_V_SOUTH,
	mc_26_3_poplar_fence_gate_facing_V_WEST,
	mc_26_3_poplar_fence_gate_facing_V_EAST,
} mc_26_3_poplar_fence_gate_facing;

typedef struct {
	mc_26_3_poplar_fence_gate_facing facing;
	b8 in_wall;
	b8 open;
	b8 powered;
} mc_26_3_poplar_fence_gate_properties;

typedef enum {
	mc_26_3_poplar_hanging_sign_rotation_V_V_0,
	mc_26_3_poplar_hanging_sign_rotation_V_V_1,
	mc_26_3_poplar_hanging_sign_rotation_V_V_2,
	mc_26_3_poplar_hanging_sign_rotation_V_V_3,
	mc_26_3_poplar_hanging_sign_rotation_V_V_4,
	mc_26_3_poplar_hanging_sign_rotation_V_V_5,
	mc_26_3_poplar_hanging_sign_rotation_V_V_6,
	mc_26_3_poplar_hanging_sign_rotation_V_V_7,
	mc_26_3_poplar_hanging_sign_rotation_V_V_8,
	mc_26_3_poplar_hanging_sign_rotation_V_V_9,
	mc_26_3_poplar_hanging_sign_rotation_V_V_10,
	mc_26_3_poplar_hanging_sign_rotation_V_V_11,
	mc_26_3_poplar_hanging_sign_rotation_V_V_12,
	mc_26_3_poplar_hanging_sign_rotation_V_V_13,
	mc_26_3_poplar_hanging_sign_rotation_V_V_14,
	mc_26_3_poplar_hanging_sign_rotation_V_V_15,
} mc_26_3_poplar_hanging_sign_rotation;

typedef struct {
	b8 attached;
	mc_26_3_poplar_hanging_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_poplar_hanging_sign_properties;

typedef enum {
	mc_26_3_poplar_log_axis_V_X,
	mc_26_3_poplar_log_axis_V_Y,
	mc_26_3_poplar_log_axis_V_Z,
} mc_26_3_poplar_log_axis;

typedef struct {
	mc_26_3_poplar_log_axis axis;
} mc_26_3_poplar_log_properties;

typedef struct {
	b8 powered;
} mc_26_3_poplar_pressure_plate_properties;

typedef enum {
	mc_26_3_poplar_sapling_stage_V_V_0,
	mc_26_3_poplar_sapling_stage_V_V_1,
} mc_26_3_poplar_sapling_stage;

typedef struct {
	mc_26_3_poplar_sapling_stage stage;
} mc_26_3_poplar_sapling_properties;

typedef enum {
	mc_26_3_poplar_shelf_facing_V_NORTH,
	mc_26_3_poplar_shelf_facing_V_SOUTH,
	mc_26_3_poplar_shelf_facing_V_WEST,
	mc_26_3_poplar_shelf_facing_V_EAST,
} mc_26_3_poplar_shelf_facing;

typedef enum {
	mc_26_3_poplar_shelf_side_chain_V_UNCONNECTED,
	mc_26_3_poplar_shelf_side_chain_V_RIGHT,
	mc_26_3_poplar_shelf_side_chain_V_CENTER,
	mc_26_3_poplar_shelf_side_chain_V_LEFT,
} mc_26_3_poplar_shelf_side_chain;

typedef struct {
	mc_26_3_poplar_shelf_facing facing;
	b8 powered;
	mc_26_3_poplar_shelf_side_chain side_chain;
	b8 waterlogged;
} mc_26_3_poplar_shelf_properties;

typedef enum {
	mc_26_3_poplar_sign_rotation_V_V_0,
	mc_26_3_poplar_sign_rotation_V_V_1,
	mc_26_3_poplar_sign_rotation_V_V_2,
	mc_26_3_poplar_sign_rotation_V_V_3,
	mc_26_3_poplar_sign_rotation_V_V_4,
	mc_26_3_poplar_sign_rotation_V_V_5,
	mc_26_3_poplar_sign_rotation_V_V_6,
	mc_26_3_poplar_sign_rotation_V_V_7,
	mc_26_3_poplar_sign_rotation_V_V_8,
	mc_26_3_poplar_sign_rotation_V_V_9,
	mc_26_3_poplar_sign_rotation_V_V_10,
	mc_26_3_poplar_sign_rotation_V_V_11,
	mc_26_3_poplar_sign_rotation_V_V_12,
	mc_26_3_poplar_sign_rotation_V_V_13,
	mc_26_3_poplar_sign_rotation_V_V_14,
	mc_26_3_poplar_sign_rotation_V_V_15,
} mc_26_3_poplar_sign_rotation;

typedef struct {
	mc_26_3_poplar_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_poplar_sign_properties;

typedef enum {
	mc_26_3_poplar_slab_type_V_TOP,
	mc_26_3_poplar_slab_type_V_BOTTOM,
	mc_26_3_poplar_slab_type_V_DOUBLE,
} mc_26_3_poplar_slab_type;

typedef struct {
	mc_26_3_poplar_slab_type type;
	b8 waterlogged;
} mc_26_3_poplar_slab_properties;

typedef enum {
	mc_26_3_poplar_stairs_facing_V_NORTH,
	mc_26_3_poplar_stairs_facing_V_SOUTH,
	mc_26_3_poplar_stairs_facing_V_WEST,
	mc_26_3_poplar_stairs_facing_V_EAST,
} mc_26_3_poplar_stairs_facing;

typedef enum {
	mc_26_3_poplar_stairs_half_V_TOP,
	mc_26_3_poplar_stairs_half_V_BOTTOM,
} mc_26_3_poplar_stairs_half;

typedef enum {
	mc_26_3_poplar_stairs_shape_V_STRAIGHT,
	mc_26_3_poplar_stairs_shape_V_INNER_LEFT,
	mc_26_3_poplar_stairs_shape_V_INNER_RIGHT,
	mc_26_3_poplar_stairs_shape_V_OUTER_LEFT,
	mc_26_3_poplar_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_poplar_stairs_shape;

typedef struct {
	mc_26_3_poplar_stairs_facing facing;
	mc_26_3_poplar_stairs_half half;
	mc_26_3_poplar_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_poplar_stairs_properties;

typedef enum {
	mc_26_3_poplar_trapdoor_facing_V_NORTH,
	mc_26_3_poplar_trapdoor_facing_V_SOUTH,
	mc_26_3_poplar_trapdoor_facing_V_WEST,
	mc_26_3_poplar_trapdoor_facing_V_EAST,
} mc_26_3_poplar_trapdoor_facing;

typedef enum {
	mc_26_3_poplar_trapdoor_half_V_TOP,
	mc_26_3_poplar_trapdoor_half_V_BOTTOM,
} mc_26_3_poplar_trapdoor_half;

typedef struct {
	mc_26_3_poplar_trapdoor_facing facing;
	mc_26_3_poplar_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_poplar_trapdoor_properties;

typedef enum {
	mc_26_3_poplar_wall_hanging_sign_facing_V_NORTH,
	mc_26_3_poplar_wall_hanging_sign_facing_V_SOUTH,
	mc_26_3_poplar_wall_hanging_sign_facing_V_WEST,
	mc_26_3_poplar_wall_hanging_sign_facing_V_EAST,
} mc_26_3_poplar_wall_hanging_sign_facing;

typedef struct {
	mc_26_3_poplar_wall_hanging_sign_facing facing;
	b8 waterlogged;
} mc_26_3_poplar_wall_hanging_sign_properties;

typedef enum {
	mc_26_3_poplar_wall_sign_facing_V_NORTH,
	mc_26_3_poplar_wall_sign_facing_V_SOUTH,
	mc_26_3_poplar_wall_sign_facing_V_WEST,
	mc_26_3_poplar_wall_sign_facing_V_EAST,
} mc_26_3_poplar_wall_sign_facing;

typedef struct {
	mc_26_3_poplar_wall_sign_facing facing;
	b8 waterlogged;
} mc_26_3_poplar_wall_sign_properties;

typedef enum {
	mc_26_3_poplar_wood_axis_V_X,
	mc_26_3_poplar_wood_axis_V_Y,
	mc_26_3_poplar_wood_axis_V_Z,
} mc_26_3_poplar_wood_axis;

typedef struct {
	mc_26_3_poplar_wood_axis axis;
} mc_26_3_poplar_wood_properties;

typedef enum {
	mc_26_3_potatoes_age_V_V_0,
	mc_26_3_potatoes_age_V_V_1,
	mc_26_3_potatoes_age_V_V_2,
	mc_26_3_potatoes_age_V_V_3,
	mc_26_3_potatoes_age_V_V_4,
	mc_26_3_potatoes_age_V_V_5,
	mc_26_3_potatoes_age_V_V_6,
	mc_26_3_potatoes_age_V_V_7,
} mc_26_3_potatoes_age;

typedef struct {
	mc_26_3_potatoes_age age;
} mc_26_3_potatoes_properties;

typedef enum {
	mc_26_3_potent_sulfur_potent_sulfur_state_V_DRY,
	mc_26_3_potent_sulfur_potent_sulfur_state_V_WET,
	mc_26_3_potent_sulfur_potent_sulfur_state_V_DORMANT,
	mc_26_3_potent_sulfur_potent_sulfur_state_V_ERUPTING,
	mc_26_3_potent_sulfur_potent_sulfur_state_V_CONTINUOUS,
} mc_26_3_potent_sulfur_potent_sulfur_state;

typedef struct {
	mc_26_3_potent_sulfur_potent_sulfur_state potent_sulfur_state;
} mc_26_3_potent_sulfur_properties;

typedef enum {
	mc_26_3_powder_snow_cauldron_level_V_V_1,
	mc_26_3_powder_snow_cauldron_level_V_V_2,
	mc_26_3_powder_snow_cauldron_level_V_V_3,
} mc_26_3_powder_snow_cauldron_level;

typedef struct {
	mc_26_3_powder_snow_cauldron_level level;
} mc_26_3_powder_snow_cauldron_properties;

typedef enum {
	mc_26_3_powered_rail_shape_V_NORTH_SOUTH,
	mc_26_3_powered_rail_shape_V_EAST_WEST,
	mc_26_3_powered_rail_shape_V_ASCENDING_EAST,
	mc_26_3_powered_rail_shape_V_ASCENDING_WEST,
	mc_26_3_powered_rail_shape_V_ASCENDING_NORTH,
	mc_26_3_powered_rail_shape_V_ASCENDING_SOUTH,
} mc_26_3_powered_rail_shape;

typedef struct {
	b8 powered;
	mc_26_3_powered_rail_shape shape;
	b8 waterlogged;
} mc_26_3_powered_rail_properties;

typedef enum {
	mc_26_3_prismarine_brick_slab_type_V_TOP,
	mc_26_3_prismarine_brick_slab_type_V_BOTTOM,
	mc_26_3_prismarine_brick_slab_type_V_DOUBLE,
} mc_26_3_prismarine_brick_slab_type;

typedef struct {
	mc_26_3_prismarine_brick_slab_type type;
	b8 waterlogged;
} mc_26_3_prismarine_brick_slab_properties;

typedef enum {
	mc_26_3_prismarine_brick_stairs_facing_V_NORTH,
	mc_26_3_prismarine_brick_stairs_facing_V_SOUTH,
	mc_26_3_prismarine_brick_stairs_facing_V_WEST,
	mc_26_3_prismarine_brick_stairs_facing_V_EAST,
} mc_26_3_prismarine_brick_stairs_facing;

typedef enum {
	mc_26_3_prismarine_brick_stairs_half_V_TOP,
	mc_26_3_prismarine_brick_stairs_half_V_BOTTOM,
} mc_26_3_prismarine_brick_stairs_half;

typedef enum {
	mc_26_3_prismarine_brick_stairs_shape_V_STRAIGHT,
	mc_26_3_prismarine_brick_stairs_shape_V_INNER_LEFT,
	mc_26_3_prismarine_brick_stairs_shape_V_INNER_RIGHT,
	mc_26_3_prismarine_brick_stairs_shape_V_OUTER_LEFT,
	mc_26_3_prismarine_brick_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_prismarine_brick_stairs_shape;

typedef struct {
	mc_26_3_prismarine_brick_stairs_facing facing;
	mc_26_3_prismarine_brick_stairs_half half;
	mc_26_3_prismarine_brick_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_prismarine_brick_stairs_properties;

typedef enum {
	mc_26_3_prismarine_slab_type_V_TOP,
	mc_26_3_prismarine_slab_type_V_BOTTOM,
	mc_26_3_prismarine_slab_type_V_DOUBLE,
} mc_26_3_prismarine_slab_type;

typedef struct {
	mc_26_3_prismarine_slab_type type;
	b8 waterlogged;
} mc_26_3_prismarine_slab_properties;

typedef enum {
	mc_26_3_prismarine_stairs_facing_V_NORTH,
	mc_26_3_prismarine_stairs_facing_V_SOUTH,
	mc_26_3_prismarine_stairs_facing_V_WEST,
	mc_26_3_prismarine_stairs_facing_V_EAST,
} mc_26_3_prismarine_stairs_facing;

typedef enum {
	mc_26_3_prismarine_stairs_half_V_TOP,
	mc_26_3_prismarine_stairs_half_V_BOTTOM,
} mc_26_3_prismarine_stairs_half;

typedef enum {
	mc_26_3_prismarine_stairs_shape_V_STRAIGHT,
	mc_26_3_prismarine_stairs_shape_V_INNER_LEFT,
	mc_26_3_prismarine_stairs_shape_V_INNER_RIGHT,
	mc_26_3_prismarine_stairs_shape_V_OUTER_LEFT,
	mc_26_3_prismarine_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_prismarine_stairs_shape;

typedef struct {
	mc_26_3_prismarine_stairs_facing facing;
	mc_26_3_prismarine_stairs_half half;
	mc_26_3_prismarine_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_prismarine_stairs_properties;

typedef enum {
	mc_26_3_prismarine_wall_east_V_NONE,
	mc_26_3_prismarine_wall_east_V_LOW,
	mc_26_3_prismarine_wall_east_V_TALL,
} mc_26_3_prismarine_wall_east;

typedef enum {
	mc_26_3_prismarine_wall_north_V_NONE,
	mc_26_3_prismarine_wall_north_V_LOW,
	mc_26_3_prismarine_wall_north_V_TALL,
} mc_26_3_prismarine_wall_north;

typedef enum {
	mc_26_3_prismarine_wall_south_V_NONE,
	mc_26_3_prismarine_wall_south_V_LOW,
	mc_26_3_prismarine_wall_south_V_TALL,
} mc_26_3_prismarine_wall_south;

typedef enum {
	mc_26_3_prismarine_wall_west_V_NONE,
	mc_26_3_prismarine_wall_west_V_LOW,
	mc_26_3_prismarine_wall_west_V_TALL,
} mc_26_3_prismarine_wall_west;

typedef struct {
	mc_26_3_prismarine_wall_east east;
	mc_26_3_prismarine_wall_north north;
	mc_26_3_prismarine_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_prismarine_wall_west west;
} mc_26_3_prismarine_wall_properties;

typedef enum {
	mc_26_3_pumpkin_stem_age_V_V_0,
	mc_26_3_pumpkin_stem_age_V_V_1,
	mc_26_3_pumpkin_stem_age_V_V_2,
	mc_26_3_pumpkin_stem_age_V_V_3,
	mc_26_3_pumpkin_stem_age_V_V_4,
	mc_26_3_pumpkin_stem_age_V_V_5,
	mc_26_3_pumpkin_stem_age_V_V_6,
	mc_26_3_pumpkin_stem_age_V_V_7,
} mc_26_3_pumpkin_stem_age;

typedef struct {
	mc_26_3_pumpkin_stem_age age;
} mc_26_3_pumpkin_stem_properties;

typedef enum {
	mc_26_3_purple_banner_rotation_V_V_0,
	mc_26_3_purple_banner_rotation_V_V_1,
	mc_26_3_purple_banner_rotation_V_V_2,
	mc_26_3_purple_banner_rotation_V_V_3,
	mc_26_3_purple_banner_rotation_V_V_4,
	mc_26_3_purple_banner_rotation_V_V_5,
	mc_26_3_purple_banner_rotation_V_V_6,
	mc_26_3_purple_banner_rotation_V_V_7,
	mc_26_3_purple_banner_rotation_V_V_8,
	mc_26_3_purple_banner_rotation_V_V_9,
	mc_26_3_purple_banner_rotation_V_V_10,
	mc_26_3_purple_banner_rotation_V_V_11,
	mc_26_3_purple_banner_rotation_V_V_12,
	mc_26_3_purple_banner_rotation_V_V_13,
	mc_26_3_purple_banner_rotation_V_V_14,
	mc_26_3_purple_banner_rotation_V_V_15,
} mc_26_3_purple_banner_rotation;

typedef struct {
	mc_26_3_purple_banner_rotation rotation;
} mc_26_3_purple_banner_properties;

typedef enum {
	mc_26_3_purple_bed_facing_V_NORTH,
	mc_26_3_purple_bed_facing_V_SOUTH,
	mc_26_3_purple_bed_facing_V_WEST,
	mc_26_3_purple_bed_facing_V_EAST,
} mc_26_3_purple_bed_facing;

typedef enum {
	mc_26_3_purple_bed_part_V_HEAD,
	mc_26_3_purple_bed_part_V_FOOT,
} mc_26_3_purple_bed_part;

typedef struct {
	mc_26_3_purple_bed_facing facing;
	b8 occupied;
	mc_26_3_purple_bed_part part;
} mc_26_3_purple_bed_properties;

typedef enum {
	mc_26_3_purple_candle_candles_V_V_1,
	mc_26_3_purple_candle_candles_V_V_2,
	mc_26_3_purple_candle_candles_V_V_3,
	mc_26_3_purple_candle_candles_V_V_4,
} mc_26_3_purple_candle_candles;

typedef struct {
	mc_26_3_purple_candle_candles candles;
	b8 lit;
	b8 waterlogged;
} mc_26_3_purple_candle_properties;

typedef struct {
	b8 lit;
} mc_26_3_purple_candle_cake_properties;

typedef enum {
	mc_26_3_purple_concrete_slab_type_V_TOP,
	mc_26_3_purple_concrete_slab_type_V_BOTTOM,
	mc_26_3_purple_concrete_slab_type_V_DOUBLE,
} mc_26_3_purple_concrete_slab_type;

typedef struct {
	mc_26_3_purple_concrete_slab_type type;
	b8 waterlogged;
} mc_26_3_purple_concrete_slab_properties;

typedef enum {
	mc_26_3_purple_concrete_stairs_facing_V_NORTH,
	mc_26_3_purple_concrete_stairs_facing_V_SOUTH,
	mc_26_3_purple_concrete_stairs_facing_V_WEST,
	mc_26_3_purple_concrete_stairs_facing_V_EAST,
} mc_26_3_purple_concrete_stairs_facing;

typedef enum {
	mc_26_3_purple_concrete_stairs_half_V_TOP,
	mc_26_3_purple_concrete_stairs_half_V_BOTTOM,
} mc_26_3_purple_concrete_stairs_half;

typedef enum {
	mc_26_3_purple_concrete_stairs_shape_V_STRAIGHT,
	mc_26_3_purple_concrete_stairs_shape_V_INNER_LEFT,
	mc_26_3_purple_concrete_stairs_shape_V_INNER_RIGHT,
	mc_26_3_purple_concrete_stairs_shape_V_OUTER_LEFT,
	mc_26_3_purple_concrete_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_purple_concrete_stairs_shape;

typedef struct {
	mc_26_3_purple_concrete_stairs_facing facing;
	mc_26_3_purple_concrete_stairs_half half;
	mc_26_3_purple_concrete_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_purple_concrete_stairs_properties;

typedef enum {
	mc_26_3_purple_glazed_terracotta_facing_V_NORTH,
	mc_26_3_purple_glazed_terracotta_facing_V_SOUTH,
	mc_26_3_purple_glazed_terracotta_facing_V_WEST,
	mc_26_3_purple_glazed_terracotta_facing_V_EAST,
} mc_26_3_purple_glazed_terracotta_facing;

typedef struct {
	mc_26_3_purple_glazed_terracotta_facing facing;
} mc_26_3_purple_glazed_terracotta_properties;

typedef enum {
	mc_26_3_purple_shulker_box_facing_V_NORTH,
	mc_26_3_purple_shulker_box_facing_V_EAST,
	mc_26_3_purple_shulker_box_facing_V_SOUTH,
	mc_26_3_purple_shulker_box_facing_V_WEST,
	mc_26_3_purple_shulker_box_facing_V_UP,
	mc_26_3_purple_shulker_box_facing_V_DOWN,
} mc_26_3_purple_shulker_box_facing;

typedef struct {
	mc_26_3_purple_shulker_box_facing facing;
} mc_26_3_purple_shulker_box_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_purple_stained_glass_pane_properties;

typedef enum {
	mc_26_3_purple_wall_banner_facing_V_NORTH,
	mc_26_3_purple_wall_banner_facing_V_SOUTH,
	mc_26_3_purple_wall_banner_facing_V_WEST,
	mc_26_3_purple_wall_banner_facing_V_EAST,
} mc_26_3_purple_wall_banner_facing;

typedef struct {
	mc_26_3_purple_wall_banner_facing facing;
} mc_26_3_purple_wall_banner_properties;

typedef enum {
	mc_26_3_purple_wool_slab_type_V_TOP,
	mc_26_3_purple_wool_slab_type_V_BOTTOM,
	mc_26_3_purple_wool_slab_type_V_DOUBLE,
} mc_26_3_purple_wool_slab_type;

typedef struct {
	mc_26_3_purple_wool_slab_type type;
	b8 waterlogged;
} mc_26_3_purple_wool_slab_properties;

typedef enum {
	mc_26_3_purple_wool_stairs_facing_V_NORTH,
	mc_26_3_purple_wool_stairs_facing_V_SOUTH,
	mc_26_3_purple_wool_stairs_facing_V_WEST,
	mc_26_3_purple_wool_stairs_facing_V_EAST,
} mc_26_3_purple_wool_stairs_facing;

typedef enum {
	mc_26_3_purple_wool_stairs_half_V_TOP,
	mc_26_3_purple_wool_stairs_half_V_BOTTOM,
} mc_26_3_purple_wool_stairs_half;

typedef enum {
	mc_26_3_purple_wool_stairs_shape_V_STRAIGHT,
	mc_26_3_purple_wool_stairs_shape_V_INNER_LEFT,
	mc_26_3_purple_wool_stairs_shape_V_INNER_RIGHT,
	mc_26_3_purple_wool_stairs_shape_V_OUTER_LEFT,
	mc_26_3_purple_wool_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_purple_wool_stairs_shape;

typedef struct {
	mc_26_3_purple_wool_stairs_facing facing;
	mc_26_3_purple_wool_stairs_half half;
	mc_26_3_purple_wool_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_purple_wool_stairs_properties;

typedef enum {
	mc_26_3_purpur_pillar_axis_V_X,
	mc_26_3_purpur_pillar_axis_V_Y,
	mc_26_3_purpur_pillar_axis_V_Z,
} mc_26_3_purpur_pillar_axis;

typedef struct {
	mc_26_3_purpur_pillar_axis axis;
} mc_26_3_purpur_pillar_properties;

typedef enum {
	mc_26_3_purpur_slab_type_V_TOP,
	mc_26_3_purpur_slab_type_V_BOTTOM,
	mc_26_3_purpur_slab_type_V_DOUBLE,
} mc_26_3_purpur_slab_type;

typedef struct {
	mc_26_3_purpur_slab_type type;
	b8 waterlogged;
} mc_26_3_purpur_slab_properties;

typedef enum {
	mc_26_3_purpur_stairs_facing_V_NORTH,
	mc_26_3_purpur_stairs_facing_V_SOUTH,
	mc_26_3_purpur_stairs_facing_V_WEST,
	mc_26_3_purpur_stairs_facing_V_EAST,
} mc_26_3_purpur_stairs_facing;

typedef enum {
	mc_26_3_purpur_stairs_half_V_TOP,
	mc_26_3_purpur_stairs_half_V_BOTTOM,
} mc_26_3_purpur_stairs_half;

typedef enum {
	mc_26_3_purpur_stairs_shape_V_STRAIGHT,
	mc_26_3_purpur_stairs_shape_V_INNER_LEFT,
	mc_26_3_purpur_stairs_shape_V_INNER_RIGHT,
	mc_26_3_purpur_stairs_shape_V_OUTER_LEFT,
	mc_26_3_purpur_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_purpur_stairs_shape;

typedef struct {
	mc_26_3_purpur_stairs_facing facing;
	mc_26_3_purpur_stairs_half half;
	mc_26_3_purpur_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_purpur_stairs_properties;

typedef enum {
	mc_26_3_quartz_pillar_axis_V_X,
	mc_26_3_quartz_pillar_axis_V_Y,
	mc_26_3_quartz_pillar_axis_V_Z,
} mc_26_3_quartz_pillar_axis;

typedef struct {
	mc_26_3_quartz_pillar_axis axis;
} mc_26_3_quartz_pillar_properties;

typedef enum {
	mc_26_3_quartz_slab_type_V_TOP,
	mc_26_3_quartz_slab_type_V_BOTTOM,
	mc_26_3_quartz_slab_type_V_DOUBLE,
} mc_26_3_quartz_slab_type;

typedef struct {
	mc_26_3_quartz_slab_type type;
	b8 waterlogged;
} mc_26_3_quartz_slab_properties;

typedef enum {
	mc_26_3_quartz_stairs_facing_V_NORTH,
	mc_26_3_quartz_stairs_facing_V_SOUTH,
	mc_26_3_quartz_stairs_facing_V_WEST,
	mc_26_3_quartz_stairs_facing_V_EAST,
} mc_26_3_quartz_stairs_facing;

typedef enum {
	mc_26_3_quartz_stairs_half_V_TOP,
	mc_26_3_quartz_stairs_half_V_BOTTOM,
} mc_26_3_quartz_stairs_half;

typedef enum {
	mc_26_3_quartz_stairs_shape_V_STRAIGHT,
	mc_26_3_quartz_stairs_shape_V_INNER_LEFT,
	mc_26_3_quartz_stairs_shape_V_INNER_RIGHT,
	mc_26_3_quartz_stairs_shape_V_OUTER_LEFT,
	mc_26_3_quartz_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_quartz_stairs_shape;

typedef struct {
	mc_26_3_quartz_stairs_facing facing;
	mc_26_3_quartz_stairs_half half;
	mc_26_3_quartz_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_quartz_stairs_properties;

typedef enum {
	mc_26_3_rail_shape_V_NORTH_SOUTH,
	mc_26_3_rail_shape_V_EAST_WEST,
	mc_26_3_rail_shape_V_ASCENDING_EAST,
	mc_26_3_rail_shape_V_ASCENDING_WEST,
	mc_26_3_rail_shape_V_ASCENDING_NORTH,
	mc_26_3_rail_shape_V_ASCENDING_SOUTH,
	mc_26_3_rail_shape_V_SOUTH_EAST,
	mc_26_3_rail_shape_V_SOUTH_WEST,
	mc_26_3_rail_shape_V_NORTH_WEST,
	mc_26_3_rail_shape_V_NORTH_EAST,
} mc_26_3_rail_shape;

typedef struct {
	mc_26_3_rail_shape shape;
	b8 waterlogged;
} mc_26_3_rail_properties;

typedef enum {
	mc_26_3_red_banner_rotation_V_V_0,
	mc_26_3_red_banner_rotation_V_V_1,
	mc_26_3_red_banner_rotation_V_V_2,
	mc_26_3_red_banner_rotation_V_V_3,
	mc_26_3_red_banner_rotation_V_V_4,
	mc_26_3_red_banner_rotation_V_V_5,
	mc_26_3_red_banner_rotation_V_V_6,
	mc_26_3_red_banner_rotation_V_V_7,
	mc_26_3_red_banner_rotation_V_V_8,
	mc_26_3_red_banner_rotation_V_V_9,
	mc_26_3_red_banner_rotation_V_V_10,
	mc_26_3_red_banner_rotation_V_V_11,
	mc_26_3_red_banner_rotation_V_V_12,
	mc_26_3_red_banner_rotation_V_V_13,
	mc_26_3_red_banner_rotation_V_V_14,
	mc_26_3_red_banner_rotation_V_V_15,
} mc_26_3_red_banner_rotation;

typedef struct {
	mc_26_3_red_banner_rotation rotation;
} mc_26_3_red_banner_properties;

typedef enum {
	mc_26_3_red_bed_facing_V_NORTH,
	mc_26_3_red_bed_facing_V_SOUTH,
	mc_26_3_red_bed_facing_V_WEST,
	mc_26_3_red_bed_facing_V_EAST,
} mc_26_3_red_bed_facing;

typedef enum {
	mc_26_3_red_bed_part_V_HEAD,
	mc_26_3_red_bed_part_V_FOOT,
} mc_26_3_red_bed_part;

typedef struct {
	mc_26_3_red_bed_facing facing;
	b8 occupied;
	mc_26_3_red_bed_part part;
} mc_26_3_red_bed_properties;

typedef enum {
	mc_26_3_red_candle_candles_V_V_1,
	mc_26_3_red_candle_candles_V_V_2,
	mc_26_3_red_candle_candles_V_V_3,
	mc_26_3_red_candle_candles_V_V_4,
} mc_26_3_red_candle_candles;

typedef struct {
	mc_26_3_red_candle_candles candles;
	b8 lit;
	b8 waterlogged;
} mc_26_3_red_candle_properties;

typedef struct {
	b8 lit;
} mc_26_3_red_candle_cake_properties;

typedef enum {
	mc_26_3_red_concrete_slab_type_V_TOP,
	mc_26_3_red_concrete_slab_type_V_BOTTOM,
	mc_26_3_red_concrete_slab_type_V_DOUBLE,
} mc_26_3_red_concrete_slab_type;

typedef struct {
	mc_26_3_red_concrete_slab_type type;
	b8 waterlogged;
} mc_26_3_red_concrete_slab_properties;

typedef enum {
	mc_26_3_red_concrete_stairs_facing_V_NORTH,
	mc_26_3_red_concrete_stairs_facing_V_SOUTH,
	mc_26_3_red_concrete_stairs_facing_V_WEST,
	mc_26_3_red_concrete_stairs_facing_V_EAST,
} mc_26_3_red_concrete_stairs_facing;

typedef enum {
	mc_26_3_red_concrete_stairs_half_V_TOP,
	mc_26_3_red_concrete_stairs_half_V_BOTTOM,
} mc_26_3_red_concrete_stairs_half;

typedef enum {
	mc_26_3_red_concrete_stairs_shape_V_STRAIGHT,
	mc_26_3_red_concrete_stairs_shape_V_INNER_LEFT,
	mc_26_3_red_concrete_stairs_shape_V_INNER_RIGHT,
	mc_26_3_red_concrete_stairs_shape_V_OUTER_LEFT,
	mc_26_3_red_concrete_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_red_concrete_stairs_shape;

typedef struct {
	mc_26_3_red_concrete_stairs_facing facing;
	mc_26_3_red_concrete_stairs_half half;
	mc_26_3_red_concrete_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_red_concrete_stairs_properties;

typedef enum {
	mc_26_3_red_glazed_terracotta_facing_V_NORTH,
	mc_26_3_red_glazed_terracotta_facing_V_SOUTH,
	mc_26_3_red_glazed_terracotta_facing_V_WEST,
	mc_26_3_red_glazed_terracotta_facing_V_EAST,
} mc_26_3_red_glazed_terracotta_facing;

typedef struct {
	mc_26_3_red_glazed_terracotta_facing facing;
} mc_26_3_red_glazed_terracotta_properties;

typedef struct {
	b8 down;
	b8 east;
	b8 north;
	b8 south;
	b8 up;
	b8 west;
} mc_26_3_red_mushroom_block_properties;

typedef enum {
	mc_26_3_red_nether_brick_slab_type_V_TOP,
	mc_26_3_red_nether_brick_slab_type_V_BOTTOM,
	mc_26_3_red_nether_brick_slab_type_V_DOUBLE,
} mc_26_3_red_nether_brick_slab_type;

typedef struct {
	mc_26_3_red_nether_brick_slab_type type;
	b8 waterlogged;
} mc_26_3_red_nether_brick_slab_properties;

typedef enum {
	mc_26_3_red_nether_brick_stairs_facing_V_NORTH,
	mc_26_3_red_nether_brick_stairs_facing_V_SOUTH,
	mc_26_3_red_nether_brick_stairs_facing_V_WEST,
	mc_26_3_red_nether_brick_stairs_facing_V_EAST,
} mc_26_3_red_nether_brick_stairs_facing;

typedef enum {
	mc_26_3_red_nether_brick_stairs_half_V_TOP,
	mc_26_3_red_nether_brick_stairs_half_V_BOTTOM,
} mc_26_3_red_nether_brick_stairs_half;

typedef enum {
	mc_26_3_red_nether_brick_stairs_shape_V_STRAIGHT,
	mc_26_3_red_nether_brick_stairs_shape_V_INNER_LEFT,
	mc_26_3_red_nether_brick_stairs_shape_V_INNER_RIGHT,
	mc_26_3_red_nether_brick_stairs_shape_V_OUTER_LEFT,
	mc_26_3_red_nether_brick_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_red_nether_brick_stairs_shape;

typedef struct {
	mc_26_3_red_nether_brick_stairs_facing facing;
	mc_26_3_red_nether_brick_stairs_half half;
	mc_26_3_red_nether_brick_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_red_nether_brick_stairs_properties;

typedef enum {
	mc_26_3_red_nether_brick_wall_east_V_NONE,
	mc_26_3_red_nether_brick_wall_east_V_LOW,
	mc_26_3_red_nether_brick_wall_east_V_TALL,
} mc_26_3_red_nether_brick_wall_east;

typedef enum {
	mc_26_3_red_nether_brick_wall_north_V_NONE,
	mc_26_3_red_nether_brick_wall_north_V_LOW,
	mc_26_3_red_nether_brick_wall_north_V_TALL,
} mc_26_3_red_nether_brick_wall_north;

typedef enum {
	mc_26_3_red_nether_brick_wall_south_V_NONE,
	mc_26_3_red_nether_brick_wall_south_V_LOW,
	mc_26_3_red_nether_brick_wall_south_V_TALL,
} mc_26_3_red_nether_brick_wall_south;

typedef enum {
	mc_26_3_red_nether_brick_wall_west_V_NONE,
	mc_26_3_red_nether_brick_wall_west_V_LOW,
	mc_26_3_red_nether_brick_wall_west_V_TALL,
} mc_26_3_red_nether_brick_wall_west;

typedef struct {
	mc_26_3_red_nether_brick_wall_east east;
	mc_26_3_red_nether_brick_wall_north north;
	mc_26_3_red_nether_brick_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_red_nether_brick_wall_west west;
} mc_26_3_red_nether_brick_wall_properties;

typedef enum {
	mc_26_3_red_poplar_leaves_distance_V_V_1,
	mc_26_3_red_poplar_leaves_distance_V_V_2,
	mc_26_3_red_poplar_leaves_distance_V_V_3,
	mc_26_3_red_poplar_leaves_distance_V_V_4,
	mc_26_3_red_poplar_leaves_distance_V_V_5,
	mc_26_3_red_poplar_leaves_distance_V_V_6,
	mc_26_3_red_poplar_leaves_distance_V_V_7,
} mc_26_3_red_poplar_leaves_distance;

typedef struct {
	mc_26_3_red_poplar_leaves_distance distance;
	b8 persistent;
	b8 waterlogged;
} mc_26_3_red_poplar_leaves_properties;

typedef enum {
	mc_26_3_red_sandstone_slab_type_V_TOP,
	mc_26_3_red_sandstone_slab_type_V_BOTTOM,
	mc_26_3_red_sandstone_slab_type_V_DOUBLE,
} mc_26_3_red_sandstone_slab_type;

typedef struct {
	mc_26_3_red_sandstone_slab_type type;
	b8 waterlogged;
} mc_26_3_red_sandstone_slab_properties;

typedef enum {
	mc_26_3_red_sandstone_stairs_facing_V_NORTH,
	mc_26_3_red_sandstone_stairs_facing_V_SOUTH,
	mc_26_3_red_sandstone_stairs_facing_V_WEST,
	mc_26_3_red_sandstone_stairs_facing_V_EAST,
} mc_26_3_red_sandstone_stairs_facing;

typedef enum {
	mc_26_3_red_sandstone_stairs_half_V_TOP,
	mc_26_3_red_sandstone_stairs_half_V_BOTTOM,
} mc_26_3_red_sandstone_stairs_half;

typedef enum {
	mc_26_3_red_sandstone_stairs_shape_V_STRAIGHT,
	mc_26_3_red_sandstone_stairs_shape_V_INNER_LEFT,
	mc_26_3_red_sandstone_stairs_shape_V_INNER_RIGHT,
	mc_26_3_red_sandstone_stairs_shape_V_OUTER_LEFT,
	mc_26_3_red_sandstone_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_red_sandstone_stairs_shape;

typedef struct {
	mc_26_3_red_sandstone_stairs_facing facing;
	mc_26_3_red_sandstone_stairs_half half;
	mc_26_3_red_sandstone_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_red_sandstone_stairs_properties;

typedef enum {
	mc_26_3_red_sandstone_wall_east_V_NONE,
	mc_26_3_red_sandstone_wall_east_V_LOW,
	mc_26_3_red_sandstone_wall_east_V_TALL,
} mc_26_3_red_sandstone_wall_east;

typedef enum {
	mc_26_3_red_sandstone_wall_north_V_NONE,
	mc_26_3_red_sandstone_wall_north_V_LOW,
	mc_26_3_red_sandstone_wall_north_V_TALL,
} mc_26_3_red_sandstone_wall_north;

typedef enum {
	mc_26_3_red_sandstone_wall_south_V_NONE,
	mc_26_3_red_sandstone_wall_south_V_LOW,
	mc_26_3_red_sandstone_wall_south_V_TALL,
} mc_26_3_red_sandstone_wall_south;

typedef enum {
	mc_26_3_red_sandstone_wall_west_V_NONE,
	mc_26_3_red_sandstone_wall_west_V_LOW,
	mc_26_3_red_sandstone_wall_west_V_TALL,
} mc_26_3_red_sandstone_wall_west;

typedef struct {
	mc_26_3_red_sandstone_wall_east east;
	mc_26_3_red_sandstone_wall_north north;
	mc_26_3_red_sandstone_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_red_sandstone_wall_west west;
} mc_26_3_red_sandstone_wall_properties;

typedef enum {
	mc_26_3_red_shulker_box_facing_V_NORTH,
	mc_26_3_red_shulker_box_facing_V_EAST,
	mc_26_3_red_shulker_box_facing_V_SOUTH,
	mc_26_3_red_shulker_box_facing_V_WEST,
	mc_26_3_red_shulker_box_facing_V_UP,
	mc_26_3_red_shulker_box_facing_V_DOWN,
} mc_26_3_red_shulker_box_facing;

typedef struct {
	mc_26_3_red_shulker_box_facing facing;
} mc_26_3_red_shulker_box_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_red_stained_glass_pane_properties;

typedef enum {
	mc_26_3_red_wall_banner_facing_V_NORTH,
	mc_26_3_red_wall_banner_facing_V_SOUTH,
	mc_26_3_red_wall_banner_facing_V_WEST,
	mc_26_3_red_wall_banner_facing_V_EAST,
} mc_26_3_red_wall_banner_facing;

typedef struct {
	mc_26_3_red_wall_banner_facing facing;
} mc_26_3_red_wall_banner_properties;

typedef enum {
	mc_26_3_red_wool_slab_type_V_TOP,
	mc_26_3_red_wool_slab_type_V_BOTTOM,
	mc_26_3_red_wool_slab_type_V_DOUBLE,
} mc_26_3_red_wool_slab_type;

typedef struct {
	mc_26_3_red_wool_slab_type type;
	b8 waterlogged;
} mc_26_3_red_wool_slab_properties;

typedef enum {
	mc_26_3_red_wool_stairs_facing_V_NORTH,
	mc_26_3_red_wool_stairs_facing_V_SOUTH,
	mc_26_3_red_wool_stairs_facing_V_WEST,
	mc_26_3_red_wool_stairs_facing_V_EAST,
} mc_26_3_red_wool_stairs_facing;

typedef enum {
	mc_26_3_red_wool_stairs_half_V_TOP,
	mc_26_3_red_wool_stairs_half_V_BOTTOM,
} mc_26_3_red_wool_stairs_half;

typedef enum {
	mc_26_3_red_wool_stairs_shape_V_STRAIGHT,
	mc_26_3_red_wool_stairs_shape_V_INNER_LEFT,
	mc_26_3_red_wool_stairs_shape_V_INNER_RIGHT,
	mc_26_3_red_wool_stairs_shape_V_OUTER_LEFT,
	mc_26_3_red_wool_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_red_wool_stairs_shape;

typedef struct {
	mc_26_3_red_wool_stairs_facing facing;
	mc_26_3_red_wool_stairs_half half;
	mc_26_3_red_wool_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_red_wool_stairs_properties;

typedef struct {
	b8 lit;
} mc_26_3_redstone_lamp_properties;

typedef struct {
	b8 lit;
} mc_26_3_redstone_ore_properties;

typedef struct {
	b8 lit;
} mc_26_3_redstone_torch_properties;

typedef enum {
	mc_26_3_redstone_wall_torch_facing_V_NORTH,
	mc_26_3_redstone_wall_torch_facing_V_SOUTH,
	mc_26_3_redstone_wall_torch_facing_V_WEST,
	mc_26_3_redstone_wall_torch_facing_V_EAST,
} mc_26_3_redstone_wall_torch_facing;

typedef struct {
	mc_26_3_redstone_wall_torch_facing facing;
	b8 lit;
} mc_26_3_redstone_wall_torch_properties;

typedef enum {
	mc_26_3_redstone_wire_east_V_UP,
	mc_26_3_redstone_wire_east_V_SIDE,
	mc_26_3_redstone_wire_east_V_NONE,
} mc_26_3_redstone_wire_east;

typedef enum {
	mc_26_3_redstone_wire_north_V_UP,
	mc_26_3_redstone_wire_north_V_SIDE,
	mc_26_3_redstone_wire_north_V_NONE,
} mc_26_3_redstone_wire_north;

typedef enum {
	mc_26_3_redstone_wire_power_V_V_0,
	mc_26_3_redstone_wire_power_V_V_1,
	mc_26_3_redstone_wire_power_V_V_2,
	mc_26_3_redstone_wire_power_V_V_3,
	mc_26_3_redstone_wire_power_V_V_4,
	mc_26_3_redstone_wire_power_V_V_5,
	mc_26_3_redstone_wire_power_V_V_6,
	mc_26_3_redstone_wire_power_V_V_7,
	mc_26_3_redstone_wire_power_V_V_8,
	mc_26_3_redstone_wire_power_V_V_9,
	mc_26_3_redstone_wire_power_V_V_10,
	mc_26_3_redstone_wire_power_V_V_11,
	mc_26_3_redstone_wire_power_V_V_12,
	mc_26_3_redstone_wire_power_V_V_13,
	mc_26_3_redstone_wire_power_V_V_14,
	mc_26_3_redstone_wire_power_V_V_15,
} mc_26_3_redstone_wire_power;

typedef enum {
	mc_26_3_redstone_wire_south_V_UP,
	mc_26_3_redstone_wire_south_V_SIDE,
	mc_26_3_redstone_wire_south_V_NONE,
} mc_26_3_redstone_wire_south;

typedef enum {
	mc_26_3_redstone_wire_west_V_UP,
	mc_26_3_redstone_wire_west_V_SIDE,
	mc_26_3_redstone_wire_west_V_NONE,
} mc_26_3_redstone_wire_west;

typedef struct {
	mc_26_3_redstone_wire_east east;
	mc_26_3_redstone_wire_north north;
	mc_26_3_redstone_wire_power power;
	mc_26_3_redstone_wire_south south;
	mc_26_3_redstone_wire_west west;
} mc_26_3_redstone_wire_properties;

typedef enum {
	mc_26_3_repeater_delay_V_V_1,
	mc_26_3_repeater_delay_V_V_2,
	mc_26_3_repeater_delay_V_V_3,
	mc_26_3_repeater_delay_V_V_4,
} mc_26_3_repeater_delay;

typedef enum {
	mc_26_3_repeater_facing_V_NORTH,
	mc_26_3_repeater_facing_V_SOUTH,
	mc_26_3_repeater_facing_V_WEST,
	mc_26_3_repeater_facing_V_EAST,
} mc_26_3_repeater_facing;

typedef struct {
	mc_26_3_repeater_delay delay;
	mc_26_3_repeater_facing facing;
	b8 locked;
	b8 powered;
} mc_26_3_repeater_properties;

typedef enum {
	mc_26_3_repeating_command_block_facing_V_NORTH,
	mc_26_3_repeating_command_block_facing_V_EAST,
	mc_26_3_repeating_command_block_facing_V_SOUTH,
	mc_26_3_repeating_command_block_facing_V_WEST,
	mc_26_3_repeating_command_block_facing_V_UP,
	mc_26_3_repeating_command_block_facing_V_DOWN,
} mc_26_3_repeating_command_block_facing;

typedef struct {
	b8 conditional;
	mc_26_3_repeating_command_block_facing facing;
} mc_26_3_repeating_command_block_properties;

typedef enum {
	mc_26_3_resin_brick_slab_type_V_TOP,
	mc_26_3_resin_brick_slab_type_V_BOTTOM,
	mc_26_3_resin_brick_slab_type_V_DOUBLE,
} mc_26_3_resin_brick_slab_type;

typedef struct {
	mc_26_3_resin_brick_slab_type type;
	b8 waterlogged;
} mc_26_3_resin_brick_slab_properties;

typedef enum {
	mc_26_3_resin_brick_stairs_facing_V_NORTH,
	mc_26_3_resin_brick_stairs_facing_V_SOUTH,
	mc_26_3_resin_brick_stairs_facing_V_WEST,
	mc_26_3_resin_brick_stairs_facing_V_EAST,
} mc_26_3_resin_brick_stairs_facing;

typedef enum {
	mc_26_3_resin_brick_stairs_half_V_TOP,
	mc_26_3_resin_brick_stairs_half_V_BOTTOM,
} mc_26_3_resin_brick_stairs_half;

typedef enum {
	mc_26_3_resin_brick_stairs_shape_V_STRAIGHT,
	mc_26_3_resin_brick_stairs_shape_V_INNER_LEFT,
	mc_26_3_resin_brick_stairs_shape_V_INNER_RIGHT,
	mc_26_3_resin_brick_stairs_shape_V_OUTER_LEFT,
	mc_26_3_resin_brick_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_resin_brick_stairs_shape;

typedef struct {
	mc_26_3_resin_brick_stairs_facing facing;
	mc_26_3_resin_brick_stairs_half half;
	mc_26_3_resin_brick_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_resin_brick_stairs_properties;

typedef enum {
	mc_26_3_resin_brick_wall_east_V_NONE,
	mc_26_3_resin_brick_wall_east_V_LOW,
	mc_26_3_resin_brick_wall_east_V_TALL,
} mc_26_3_resin_brick_wall_east;

typedef enum {
	mc_26_3_resin_brick_wall_north_V_NONE,
	mc_26_3_resin_brick_wall_north_V_LOW,
	mc_26_3_resin_brick_wall_north_V_TALL,
} mc_26_3_resin_brick_wall_north;

typedef enum {
	mc_26_3_resin_brick_wall_south_V_NONE,
	mc_26_3_resin_brick_wall_south_V_LOW,
	mc_26_3_resin_brick_wall_south_V_TALL,
} mc_26_3_resin_brick_wall_south;

typedef enum {
	mc_26_3_resin_brick_wall_west_V_NONE,
	mc_26_3_resin_brick_wall_west_V_LOW,
	mc_26_3_resin_brick_wall_west_V_TALL,
} mc_26_3_resin_brick_wall_west;

typedef struct {
	mc_26_3_resin_brick_wall_east east;
	mc_26_3_resin_brick_wall_north north;
	mc_26_3_resin_brick_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_resin_brick_wall_west west;
} mc_26_3_resin_brick_wall_properties;

typedef struct {
	b8 down;
	b8 east;
	b8 north;
	b8 south;
	b8 up;
	b8 waterlogged;
	b8 west;
} mc_26_3_resin_clump_properties;

typedef enum {
	mc_26_3_respawn_anchor_charges_V_V_0,
	mc_26_3_respawn_anchor_charges_V_V_1,
	mc_26_3_respawn_anchor_charges_V_V_2,
	mc_26_3_respawn_anchor_charges_V_V_3,
	mc_26_3_respawn_anchor_charges_V_V_4,
} mc_26_3_respawn_anchor_charges;

typedef struct {
	mc_26_3_respawn_anchor_charges charges;
} mc_26_3_respawn_anchor_properties;

typedef enum {
	mc_26_3_rose_bush_half_V_UPPER,
	mc_26_3_rose_bush_half_V_LOWER,
} mc_26_3_rose_bush_half;

typedef struct {
	mc_26_3_rose_bush_half half;
} mc_26_3_rose_bush_properties;

typedef enum {
	mc_26_3_sandstone_slab_type_V_TOP,
	mc_26_3_sandstone_slab_type_V_BOTTOM,
	mc_26_3_sandstone_slab_type_V_DOUBLE,
} mc_26_3_sandstone_slab_type;

typedef struct {
	mc_26_3_sandstone_slab_type type;
	b8 waterlogged;
} mc_26_3_sandstone_slab_properties;

typedef enum {
	mc_26_3_sandstone_stairs_facing_V_NORTH,
	mc_26_3_sandstone_stairs_facing_V_SOUTH,
	mc_26_3_sandstone_stairs_facing_V_WEST,
	mc_26_3_sandstone_stairs_facing_V_EAST,
} mc_26_3_sandstone_stairs_facing;

typedef enum {
	mc_26_3_sandstone_stairs_half_V_TOP,
	mc_26_3_sandstone_stairs_half_V_BOTTOM,
} mc_26_3_sandstone_stairs_half;

typedef enum {
	mc_26_3_sandstone_stairs_shape_V_STRAIGHT,
	mc_26_3_sandstone_stairs_shape_V_INNER_LEFT,
	mc_26_3_sandstone_stairs_shape_V_INNER_RIGHT,
	mc_26_3_sandstone_stairs_shape_V_OUTER_LEFT,
	mc_26_3_sandstone_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_sandstone_stairs_shape;

typedef struct {
	mc_26_3_sandstone_stairs_facing facing;
	mc_26_3_sandstone_stairs_half half;
	mc_26_3_sandstone_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_sandstone_stairs_properties;

typedef enum {
	mc_26_3_sandstone_wall_east_V_NONE,
	mc_26_3_sandstone_wall_east_V_LOW,
	mc_26_3_sandstone_wall_east_V_TALL,
} mc_26_3_sandstone_wall_east;

typedef enum {
	mc_26_3_sandstone_wall_north_V_NONE,
	mc_26_3_sandstone_wall_north_V_LOW,
	mc_26_3_sandstone_wall_north_V_TALL,
} mc_26_3_sandstone_wall_north;

typedef enum {
	mc_26_3_sandstone_wall_south_V_NONE,
	mc_26_3_sandstone_wall_south_V_LOW,
	mc_26_3_sandstone_wall_south_V_TALL,
} mc_26_3_sandstone_wall_south;

typedef enum {
	mc_26_3_sandstone_wall_west_V_NONE,
	mc_26_3_sandstone_wall_west_V_LOW,
	mc_26_3_sandstone_wall_west_V_TALL,
} mc_26_3_sandstone_wall_west;

typedef struct {
	mc_26_3_sandstone_wall_east east;
	mc_26_3_sandstone_wall_north north;
	mc_26_3_sandstone_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_sandstone_wall_west west;
} mc_26_3_sandstone_wall_properties;

typedef enum {
	mc_26_3_scaffolding_distance_V_V_0,
	mc_26_3_scaffolding_distance_V_V_1,
	mc_26_3_scaffolding_distance_V_V_2,
	mc_26_3_scaffolding_distance_V_V_3,
	mc_26_3_scaffolding_distance_V_V_4,
	mc_26_3_scaffolding_distance_V_V_5,
	mc_26_3_scaffolding_distance_V_V_6,
	mc_26_3_scaffolding_distance_V_V_7,
} mc_26_3_scaffolding_distance;

typedef struct {
	b8 bottom;
	mc_26_3_scaffolding_distance distance;
	b8 waterlogged;
} mc_26_3_scaffolding_properties;

typedef struct {
	b8 bloom;
} mc_26_3_sculk_catalyst_properties;

typedef enum {
	mc_26_3_sculk_sensor_power_V_V_0,
	mc_26_3_sculk_sensor_power_V_V_1,
	mc_26_3_sculk_sensor_power_V_V_2,
	mc_26_3_sculk_sensor_power_V_V_3,
	mc_26_3_sculk_sensor_power_V_V_4,
	mc_26_3_sculk_sensor_power_V_V_5,
	mc_26_3_sculk_sensor_power_V_V_6,
	mc_26_3_sculk_sensor_power_V_V_7,
	mc_26_3_sculk_sensor_power_V_V_8,
	mc_26_3_sculk_sensor_power_V_V_9,
	mc_26_3_sculk_sensor_power_V_V_10,
	mc_26_3_sculk_sensor_power_V_V_11,
	mc_26_3_sculk_sensor_power_V_V_12,
	mc_26_3_sculk_sensor_power_V_V_13,
	mc_26_3_sculk_sensor_power_V_V_14,
	mc_26_3_sculk_sensor_power_V_V_15,
} mc_26_3_sculk_sensor_power;

typedef enum {
	mc_26_3_sculk_sensor_sculk_sensor_phase_V_INACTIVE,
	mc_26_3_sculk_sensor_sculk_sensor_phase_V_ACTIVE,
	mc_26_3_sculk_sensor_sculk_sensor_phase_V_COOLDOWN,
} mc_26_3_sculk_sensor_sculk_sensor_phase;

typedef struct {
	mc_26_3_sculk_sensor_power power;
	mc_26_3_sculk_sensor_sculk_sensor_phase sculk_sensor_phase;
	b8 waterlogged;
} mc_26_3_sculk_sensor_properties;

typedef struct {
	b8 can_summon;
	b8 shrieking;
	b8 waterlogged;
} mc_26_3_sculk_shrieker_properties;

typedef struct {
	b8 down;
	b8 east;
	b8 north;
	b8 south;
	b8 up;
	b8 waterlogged;
	b8 west;
} mc_26_3_sculk_vein_properties;

typedef enum {
	mc_26_3_sea_pickle_pickles_V_V_1,
	mc_26_3_sea_pickle_pickles_V_V_2,
	mc_26_3_sea_pickle_pickles_V_V_3,
	mc_26_3_sea_pickle_pickles_V_V_4,
} mc_26_3_sea_pickle_pickles;

typedef struct {
	mc_26_3_sea_pickle_pickles pickles;
	b8 waterlogged;
} mc_26_3_sea_pickle_properties;

typedef enum {
	mc_26_3_shelf_mushroom_age_V_V_0,
	mc_26_3_shelf_mushroom_age_V_V_1,
} mc_26_3_shelf_mushroom_age;

typedef enum {
	mc_26_3_shelf_mushroom_facing_V_NORTH,
	mc_26_3_shelf_mushroom_facing_V_SOUTH,
	mc_26_3_shelf_mushroom_facing_V_WEST,
	mc_26_3_shelf_mushroom_facing_V_EAST,
} mc_26_3_shelf_mushroom_facing;

typedef struct {
	mc_26_3_shelf_mushroom_age age;
	mc_26_3_shelf_mushroom_facing facing;
} mc_26_3_shelf_mushroom_properties;

typedef enum {
	mc_26_3_shulker_box_facing_V_NORTH,
	mc_26_3_shulker_box_facing_V_EAST,
	mc_26_3_shulker_box_facing_V_SOUTH,
	mc_26_3_shulker_box_facing_V_WEST,
	mc_26_3_shulker_box_facing_V_UP,
	mc_26_3_shulker_box_facing_V_DOWN,
} mc_26_3_shulker_box_facing;

typedef struct {
	mc_26_3_shulker_box_facing facing;
} mc_26_3_shulker_box_properties;

typedef enum {
	mc_26_3_skeleton_skull_rotation_V_V_0,
	mc_26_3_skeleton_skull_rotation_V_V_1,
	mc_26_3_skeleton_skull_rotation_V_V_2,
	mc_26_3_skeleton_skull_rotation_V_V_3,
	mc_26_3_skeleton_skull_rotation_V_V_4,
	mc_26_3_skeleton_skull_rotation_V_V_5,
	mc_26_3_skeleton_skull_rotation_V_V_6,
	mc_26_3_skeleton_skull_rotation_V_V_7,
	mc_26_3_skeleton_skull_rotation_V_V_8,
	mc_26_3_skeleton_skull_rotation_V_V_9,
	mc_26_3_skeleton_skull_rotation_V_V_10,
	mc_26_3_skeleton_skull_rotation_V_V_11,
	mc_26_3_skeleton_skull_rotation_V_V_12,
	mc_26_3_skeleton_skull_rotation_V_V_13,
	mc_26_3_skeleton_skull_rotation_V_V_14,
	mc_26_3_skeleton_skull_rotation_V_V_15,
} mc_26_3_skeleton_skull_rotation;

typedef struct {
	b8 powered;
	mc_26_3_skeleton_skull_rotation rotation;
} mc_26_3_skeleton_skull_properties;

typedef enum {
	mc_26_3_skeleton_wall_skull_facing_V_NORTH,
	mc_26_3_skeleton_wall_skull_facing_V_SOUTH,
	mc_26_3_skeleton_wall_skull_facing_V_WEST,
	mc_26_3_skeleton_wall_skull_facing_V_EAST,
} mc_26_3_skeleton_wall_skull_facing;

typedef struct {
	mc_26_3_skeleton_wall_skull_facing facing;
	b8 powered;
} mc_26_3_skeleton_wall_skull_properties;

typedef enum {
	mc_26_3_small_amethyst_bud_facing_V_NORTH,
	mc_26_3_small_amethyst_bud_facing_V_EAST,
	mc_26_3_small_amethyst_bud_facing_V_SOUTH,
	mc_26_3_small_amethyst_bud_facing_V_WEST,
	mc_26_3_small_amethyst_bud_facing_V_UP,
	mc_26_3_small_amethyst_bud_facing_V_DOWN,
} mc_26_3_small_amethyst_bud_facing;

typedef struct {
	mc_26_3_small_amethyst_bud_facing facing;
	b8 waterlogged;
} mc_26_3_small_amethyst_bud_properties;

typedef enum {
	mc_26_3_small_dripleaf_facing_V_NORTH,
	mc_26_3_small_dripleaf_facing_V_SOUTH,
	mc_26_3_small_dripleaf_facing_V_WEST,
	mc_26_3_small_dripleaf_facing_V_EAST,
} mc_26_3_small_dripleaf_facing;

typedef enum {
	mc_26_3_small_dripleaf_half_V_UPPER,
	mc_26_3_small_dripleaf_half_V_LOWER,
} mc_26_3_small_dripleaf_half;

typedef struct {
	mc_26_3_small_dripleaf_facing facing;
	mc_26_3_small_dripleaf_half half;
	b8 waterlogged;
} mc_26_3_small_dripleaf_properties;

typedef enum {
	mc_26_3_smoker_facing_V_NORTH,
	mc_26_3_smoker_facing_V_SOUTH,
	mc_26_3_smoker_facing_V_WEST,
	mc_26_3_smoker_facing_V_EAST,
} mc_26_3_smoker_facing;

typedef struct {
	mc_26_3_smoker_facing facing;
	b8 lit;
} mc_26_3_smoker_properties;

typedef enum {
	mc_26_3_smooth_quartz_slab_type_V_TOP,
	mc_26_3_smooth_quartz_slab_type_V_BOTTOM,
	mc_26_3_smooth_quartz_slab_type_V_DOUBLE,
} mc_26_3_smooth_quartz_slab_type;

typedef struct {
	mc_26_3_smooth_quartz_slab_type type;
	b8 waterlogged;
} mc_26_3_smooth_quartz_slab_properties;

typedef enum {
	mc_26_3_smooth_quartz_stairs_facing_V_NORTH,
	mc_26_3_smooth_quartz_stairs_facing_V_SOUTH,
	mc_26_3_smooth_quartz_stairs_facing_V_WEST,
	mc_26_3_smooth_quartz_stairs_facing_V_EAST,
} mc_26_3_smooth_quartz_stairs_facing;

typedef enum {
	mc_26_3_smooth_quartz_stairs_half_V_TOP,
	mc_26_3_smooth_quartz_stairs_half_V_BOTTOM,
} mc_26_3_smooth_quartz_stairs_half;

typedef enum {
	mc_26_3_smooth_quartz_stairs_shape_V_STRAIGHT,
	mc_26_3_smooth_quartz_stairs_shape_V_INNER_LEFT,
	mc_26_3_smooth_quartz_stairs_shape_V_INNER_RIGHT,
	mc_26_3_smooth_quartz_stairs_shape_V_OUTER_LEFT,
	mc_26_3_smooth_quartz_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_smooth_quartz_stairs_shape;

typedef struct {
	mc_26_3_smooth_quartz_stairs_facing facing;
	mc_26_3_smooth_quartz_stairs_half half;
	mc_26_3_smooth_quartz_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_smooth_quartz_stairs_properties;

typedef enum {
	mc_26_3_smooth_red_sandstone_slab_type_V_TOP,
	mc_26_3_smooth_red_sandstone_slab_type_V_BOTTOM,
	mc_26_3_smooth_red_sandstone_slab_type_V_DOUBLE,
} mc_26_3_smooth_red_sandstone_slab_type;

typedef struct {
	mc_26_3_smooth_red_sandstone_slab_type type;
	b8 waterlogged;
} mc_26_3_smooth_red_sandstone_slab_properties;

typedef enum {
	mc_26_3_smooth_red_sandstone_stairs_facing_V_NORTH,
	mc_26_3_smooth_red_sandstone_stairs_facing_V_SOUTH,
	mc_26_3_smooth_red_sandstone_stairs_facing_V_WEST,
	mc_26_3_smooth_red_sandstone_stairs_facing_V_EAST,
} mc_26_3_smooth_red_sandstone_stairs_facing;

typedef enum {
	mc_26_3_smooth_red_sandstone_stairs_half_V_TOP,
	mc_26_3_smooth_red_sandstone_stairs_half_V_BOTTOM,
} mc_26_3_smooth_red_sandstone_stairs_half;

typedef enum {
	mc_26_3_smooth_red_sandstone_stairs_shape_V_STRAIGHT,
	mc_26_3_smooth_red_sandstone_stairs_shape_V_INNER_LEFT,
	mc_26_3_smooth_red_sandstone_stairs_shape_V_INNER_RIGHT,
	mc_26_3_smooth_red_sandstone_stairs_shape_V_OUTER_LEFT,
	mc_26_3_smooth_red_sandstone_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_smooth_red_sandstone_stairs_shape;

typedef struct {
	mc_26_3_smooth_red_sandstone_stairs_facing facing;
	mc_26_3_smooth_red_sandstone_stairs_half half;
	mc_26_3_smooth_red_sandstone_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_smooth_red_sandstone_stairs_properties;

typedef enum {
	mc_26_3_smooth_sandstone_slab_type_V_TOP,
	mc_26_3_smooth_sandstone_slab_type_V_BOTTOM,
	mc_26_3_smooth_sandstone_slab_type_V_DOUBLE,
} mc_26_3_smooth_sandstone_slab_type;

typedef struct {
	mc_26_3_smooth_sandstone_slab_type type;
	b8 waterlogged;
} mc_26_3_smooth_sandstone_slab_properties;

typedef enum {
	mc_26_3_smooth_sandstone_stairs_facing_V_NORTH,
	mc_26_3_smooth_sandstone_stairs_facing_V_SOUTH,
	mc_26_3_smooth_sandstone_stairs_facing_V_WEST,
	mc_26_3_smooth_sandstone_stairs_facing_V_EAST,
} mc_26_3_smooth_sandstone_stairs_facing;

typedef enum {
	mc_26_3_smooth_sandstone_stairs_half_V_TOP,
	mc_26_3_smooth_sandstone_stairs_half_V_BOTTOM,
} mc_26_3_smooth_sandstone_stairs_half;

typedef enum {
	mc_26_3_smooth_sandstone_stairs_shape_V_STRAIGHT,
	mc_26_3_smooth_sandstone_stairs_shape_V_INNER_LEFT,
	mc_26_3_smooth_sandstone_stairs_shape_V_INNER_RIGHT,
	mc_26_3_smooth_sandstone_stairs_shape_V_OUTER_LEFT,
	mc_26_3_smooth_sandstone_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_smooth_sandstone_stairs_shape;

typedef struct {
	mc_26_3_smooth_sandstone_stairs_facing facing;
	mc_26_3_smooth_sandstone_stairs_half half;
	mc_26_3_smooth_sandstone_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_smooth_sandstone_stairs_properties;

typedef enum {
	mc_26_3_smooth_stone_slab_type_V_TOP,
	mc_26_3_smooth_stone_slab_type_V_BOTTOM,
	mc_26_3_smooth_stone_slab_type_V_DOUBLE,
} mc_26_3_smooth_stone_slab_type;

typedef struct {
	mc_26_3_smooth_stone_slab_type type;
	b8 waterlogged;
} mc_26_3_smooth_stone_slab_properties;

typedef enum {
	mc_26_3_sniffer_egg_hatch_V_V_0,
	mc_26_3_sniffer_egg_hatch_V_V_1,
	mc_26_3_sniffer_egg_hatch_V_V_2,
} mc_26_3_sniffer_egg_hatch;

typedef struct {
	mc_26_3_sniffer_egg_hatch hatch;
} mc_26_3_sniffer_egg_properties;

typedef enum {
	mc_26_3_snow_layers_V_V_1,
	mc_26_3_snow_layers_V_V_2,
	mc_26_3_snow_layers_V_V_3,
	mc_26_3_snow_layers_V_V_4,
	mc_26_3_snow_layers_V_V_5,
	mc_26_3_snow_layers_V_V_6,
	mc_26_3_snow_layers_V_V_7,
	mc_26_3_snow_layers_V_V_8,
} mc_26_3_snow_layers;

typedef struct {
	mc_26_3_snow_layers layers;
} mc_26_3_snow_properties;

typedef enum {
	mc_26_3_soul_campfire_facing_V_NORTH,
	mc_26_3_soul_campfire_facing_V_SOUTH,
	mc_26_3_soul_campfire_facing_V_WEST,
	mc_26_3_soul_campfire_facing_V_EAST,
} mc_26_3_soul_campfire_facing;

typedef struct {
	mc_26_3_soul_campfire_facing facing;
	b8 lit;
	b8 signal_fire;
	b8 waterlogged;
} mc_26_3_soul_campfire_properties;

typedef struct {
	b8 hanging;
	b8 waterlogged;
} mc_26_3_soul_lantern_properties;

typedef enum {
	mc_26_3_soul_wall_torch_facing_V_NORTH,
	mc_26_3_soul_wall_torch_facing_V_SOUTH,
	mc_26_3_soul_wall_torch_facing_V_WEST,
	mc_26_3_soul_wall_torch_facing_V_EAST,
} mc_26_3_soul_wall_torch_facing;

typedef struct {
	mc_26_3_soul_wall_torch_facing facing;
} mc_26_3_soul_wall_torch_properties;

typedef enum {
	mc_26_3_spruce_button_face_V_FLOOR,
	mc_26_3_spruce_button_face_V_WALL,
	mc_26_3_spruce_button_face_V_CEILING,
} mc_26_3_spruce_button_face;

typedef enum {
	mc_26_3_spruce_button_facing_V_NORTH,
	mc_26_3_spruce_button_facing_V_SOUTH,
	mc_26_3_spruce_button_facing_V_WEST,
	mc_26_3_spruce_button_facing_V_EAST,
} mc_26_3_spruce_button_facing;

typedef struct {
	mc_26_3_spruce_button_face face;
	mc_26_3_spruce_button_facing facing;
	b8 powered;
} mc_26_3_spruce_button_properties;

typedef enum {
	mc_26_3_spruce_door_facing_V_NORTH,
	mc_26_3_spruce_door_facing_V_SOUTH,
	mc_26_3_spruce_door_facing_V_WEST,
	mc_26_3_spruce_door_facing_V_EAST,
} mc_26_3_spruce_door_facing;

typedef enum {
	mc_26_3_spruce_door_half_V_UPPER,
	mc_26_3_spruce_door_half_V_LOWER,
} mc_26_3_spruce_door_half;

typedef enum {
	mc_26_3_spruce_door_hinge_V_LEFT,
	mc_26_3_spruce_door_hinge_V_RIGHT,
} mc_26_3_spruce_door_hinge;

typedef struct {
	mc_26_3_spruce_door_facing facing;
	mc_26_3_spruce_door_half half;
	mc_26_3_spruce_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_spruce_door_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_spruce_fence_properties;

typedef enum {
	mc_26_3_spruce_fence_gate_facing_V_NORTH,
	mc_26_3_spruce_fence_gate_facing_V_SOUTH,
	mc_26_3_spruce_fence_gate_facing_V_WEST,
	mc_26_3_spruce_fence_gate_facing_V_EAST,
} mc_26_3_spruce_fence_gate_facing;

typedef struct {
	mc_26_3_spruce_fence_gate_facing facing;
	b8 in_wall;
	b8 open;
	b8 powered;
} mc_26_3_spruce_fence_gate_properties;

typedef enum {
	mc_26_3_spruce_hanging_sign_rotation_V_V_0,
	mc_26_3_spruce_hanging_sign_rotation_V_V_1,
	mc_26_3_spruce_hanging_sign_rotation_V_V_2,
	mc_26_3_spruce_hanging_sign_rotation_V_V_3,
	mc_26_3_spruce_hanging_sign_rotation_V_V_4,
	mc_26_3_spruce_hanging_sign_rotation_V_V_5,
	mc_26_3_spruce_hanging_sign_rotation_V_V_6,
	mc_26_3_spruce_hanging_sign_rotation_V_V_7,
	mc_26_3_spruce_hanging_sign_rotation_V_V_8,
	mc_26_3_spruce_hanging_sign_rotation_V_V_9,
	mc_26_3_spruce_hanging_sign_rotation_V_V_10,
	mc_26_3_spruce_hanging_sign_rotation_V_V_11,
	mc_26_3_spruce_hanging_sign_rotation_V_V_12,
	mc_26_3_spruce_hanging_sign_rotation_V_V_13,
	mc_26_3_spruce_hanging_sign_rotation_V_V_14,
	mc_26_3_spruce_hanging_sign_rotation_V_V_15,
} mc_26_3_spruce_hanging_sign_rotation;

typedef struct {
	b8 attached;
	mc_26_3_spruce_hanging_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_spruce_hanging_sign_properties;

typedef enum {
	mc_26_3_spruce_leaves_distance_V_V_1,
	mc_26_3_spruce_leaves_distance_V_V_2,
	mc_26_3_spruce_leaves_distance_V_V_3,
	mc_26_3_spruce_leaves_distance_V_V_4,
	mc_26_3_spruce_leaves_distance_V_V_5,
	mc_26_3_spruce_leaves_distance_V_V_6,
	mc_26_3_spruce_leaves_distance_V_V_7,
} mc_26_3_spruce_leaves_distance;

typedef struct {
	mc_26_3_spruce_leaves_distance distance;
	b8 persistent;
	b8 waterlogged;
} mc_26_3_spruce_leaves_properties;

typedef enum {
	mc_26_3_spruce_log_axis_V_X,
	mc_26_3_spruce_log_axis_V_Y,
	mc_26_3_spruce_log_axis_V_Z,
} mc_26_3_spruce_log_axis;

typedef struct {
	mc_26_3_spruce_log_axis axis;
} mc_26_3_spruce_log_properties;

typedef struct {
	b8 powered;
} mc_26_3_spruce_pressure_plate_properties;

typedef enum {
	mc_26_3_spruce_sapling_stage_V_V_0,
	mc_26_3_spruce_sapling_stage_V_V_1,
} mc_26_3_spruce_sapling_stage;

typedef struct {
	mc_26_3_spruce_sapling_stage stage;
} mc_26_3_spruce_sapling_properties;

typedef enum {
	mc_26_3_spruce_shelf_facing_V_NORTH,
	mc_26_3_spruce_shelf_facing_V_SOUTH,
	mc_26_3_spruce_shelf_facing_V_WEST,
	mc_26_3_spruce_shelf_facing_V_EAST,
} mc_26_3_spruce_shelf_facing;

typedef enum {
	mc_26_3_spruce_shelf_side_chain_V_UNCONNECTED,
	mc_26_3_spruce_shelf_side_chain_V_RIGHT,
	mc_26_3_spruce_shelf_side_chain_V_CENTER,
	mc_26_3_spruce_shelf_side_chain_V_LEFT,
} mc_26_3_spruce_shelf_side_chain;

typedef struct {
	mc_26_3_spruce_shelf_facing facing;
	b8 powered;
	mc_26_3_spruce_shelf_side_chain side_chain;
	b8 waterlogged;
} mc_26_3_spruce_shelf_properties;

typedef enum {
	mc_26_3_spruce_sign_rotation_V_V_0,
	mc_26_3_spruce_sign_rotation_V_V_1,
	mc_26_3_spruce_sign_rotation_V_V_2,
	mc_26_3_spruce_sign_rotation_V_V_3,
	mc_26_3_spruce_sign_rotation_V_V_4,
	mc_26_3_spruce_sign_rotation_V_V_5,
	mc_26_3_spruce_sign_rotation_V_V_6,
	mc_26_3_spruce_sign_rotation_V_V_7,
	mc_26_3_spruce_sign_rotation_V_V_8,
	mc_26_3_spruce_sign_rotation_V_V_9,
	mc_26_3_spruce_sign_rotation_V_V_10,
	mc_26_3_spruce_sign_rotation_V_V_11,
	mc_26_3_spruce_sign_rotation_V_V_12,
	mc_26_3_spruce_sign_rotation_V_V_13,
	mc_26_3_spruce_sign_rotation_V_V_14,
	mc_26_3_spruce_sign_rotation_V_V_15,
} mc_26_3_spruce_sign_rotation;

typedef struct {
	mc_26_3_spruce_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_spruce_sign_properties;

typedef enum {
	mc_26_3_spruce_slab_type_V_TOP,
	mc_26_3_spruce_slab_type_V_BOTTOM,
	mc_26_3_spruce_slab_type_V_DOUBLE,
} mc_26_3_spruce_slab_type;

typedef struct {
	mc_26_3_spruce_slab_type type;
	b8 waterlogged;
} mc_26_3_spruce_slab_properties;

typedef enum {
	mc_26_3_spruce_stairs_facing_V_NORTH,
	mc_26_3_spruce_stairs_facing_V_SOUTH,
	mc_26_3_spruce_stairs_facing_V_WEST,
	mc_26_3_spruce_stairs_facing_V_EAST,
} mc_26_3_spruce_stairs_facing;

typedef enum {
	mc_26_3_spruce_stairs_half_V_TOP,
	mc_26_3_spruce_stairs_half_V_BOTTOM,
} mc_26_3_spruce_stairs_half;

typedef enum {
	mc_26_3_spruce_stairs_shape_V_STRAIGHT,
	mc_26_3_spruce_stairs_shape_V_INNER_LEFT,
	mc_26_3_spruce_stairs_shape_V_INNER_RIGHT,
	mc_26_3_spruce_stairs_shape_V_OUTER_LEFT,
	mc_26_3_spruce_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_spruce_stairs_shape;

typedef struct {
	mc_26_3_spruce_stairs_facing facing;
	mc_26_3_spruce_stairs_half half;
	mc_26_3_spruce_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_spruce_stairs_properties;

typedef enum {
	mc_26_3_spruce_trapdoor_facing_V_NORTH,
	mc_26_3_spruce_trapdoor_facing_V_SOUTH,
	mc_26_3_spruce_trapdoor_facing_V_WEST,
	mc_26_3_spruce_trapdoor_facing_V_EAST,
} mc_26_3_spruce_trapdoor_facing;

typedef enum {
	mc_26_3_spruce_trapdoor_half_V_TOP,
	mc_26_3_spruce_trapdoor_half_V_BOTTOM,
} mc_26_3_spruce_trapdoor_half;

typedef struct {
	mc_26_3_spruce_trapdoor_facing facing;
	mc_26_3_spruce_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_spruce_trapdoor_properties;

typedef enum {
	mc_26_3_spruce_wall_hanging_sign_facing_V_NORTH,
	mc_26_3_spruce_wall_hanging_sign_facing_V_SOUTH,
	mc_26_3_spruce_wall_hanging_sign_facing_V_WEST,
	mc_26_3_spruce_wall_hanging_sign_facing_V_EAST,
} mc_26_3_spruce_wall_hanging_sign_facing;

typedef struct {
	mc_26_3_spruce_wall_hanging_sign_facing facing;
	b8 waterlogged;
} mc_26_3_spruce_wall_hanging_sign_properties;

typedef enum {
	mc_26_3_spruce_wall_sign_facing_V_NORTH,
	mc_26_3_spruce_wall_sign_facing_V_SOUTH,
	mc_26_3_spruce_wall_sign_facing_V_WEST,
	mc_26_3_spruce_wall_sign_facing_V_EAST,
} mc_26_3_spruce_wall_sign_facing;

typedef struct {
	mc_26_3_spruce_wall_sign_facing facing;
	b8 waterlogged;
} mc_26_3_spruce_wall_sign_properties;

typedef enum {
	mc_26_3_spruce_wood_axis_V_X,
	mc_26_3_spruce_wood_axis_V_Y,
	mc_26_3_spruce_wood_axis_V_Z,
} mc_26_3_spruce_wood_axis;

typedef struct {
	mc_26_3_spruce_wood_axis axis;
} mc_26_3_spruce_wood_properties;

typedef enum {
	mc_26_3_sticky_piston_facing_V_NORTH,
	mc_26_3_sticky_piston_facing_V_EAST,
	mc_26_3_sticky_piston_facing_V_SOUTH,
	mc_26_3_sticky_piston_facing_V_WEST,
	mc_26_3_sticky_piston_facing_V_UP,
	mc_26_3_sticky_piston_facing_V_DOWN,
} mc_26_3_sticky_piston_facing;

typedef struct {
	b8 extended;
	mc_26_3_sticky_piston_facing facing;
} mc_26_3_sticky_piston_properties;

typedef enum {
	mc_26_3_stone_brick_slab_type_V_TOP,
	mc_26_3_stone_brick_slab_type_V_BOTTOM,
	mc_26_3_stone_brick_slab_type_V_DOUBLE,
} mc_26_3_stone_brick_slab_type;

typedef struct {
	mc_26_3_stone_brick_slab_type type;
	b8 waterlogged;
} mc_26_3_stone_brick_slab_properties;

typedef enum {
	mc_26_3_stone_brick_stairs_facing_V_NORTH,
	mc_26_3_stone_brick_stairs_facing_V_SOUTH,
	mc_26_3_stone_brick_stairs_facing_V_WEST,
	mc_26_3_stone_brick_stairs_facing_V_EAST,
} mc_26_3_stone_brick_stairs_facing;

typedef enum {
	mc_26_3_stone_brick_stairs_half_V_TOP,
	mc_26_3_stone_brick_stairs_half_V_BOTTOM,
} mc_26_3_stone_brick_stairs_half;

typedef enum {
	mc_26_3_stone_brick_stairs_shape_V_STRAIGHT,
	mc_26_3_stone_brick_stairs_shape_V_INNER_LEFT,
	mc_26_3_stone_brick_stairs_shape_V_INNER_RIGHT,
	mc_26_3_stone_brick_stairs_shape_V_OUTER_LEFT,
	mc_26_3_stone_brick_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_stone_brick_stairs_shape;

typedef struct {
	mc_26_3_stone_brick_stairs_facing facing;
	mc_26_3_stone_brick_stairs_half half;
	mc_26_3_stone_brick_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_stone_brick_stairs_properties;

typedef enum {
	mc_26_3_stone_brick_wall_east_V_NONE,
	mc_26_3_stone_brick_wall_east_V_LOW,
	mc_26_3_stone_brick_wall_east_V_TALL,
} mc_26_3_stone_brick_wall_east;

typedef enum {
	mc_26_3_stone_brick_wall_north_V_NONE,
	mc_26_3_stone_brick_wall_north_V_LOW,
	mc_26_3_stone_brick_wall_north_V_TALL,
} mc_26_3_stone_brick_wall_north;

typedef enum {
	mc_26_3_stone_brick_wall_south_V_NONE,
	mc_26_3_stone_brick_wall_south_V_LOW,
	mc_26_3_stone_brick_wall_south_V_TALL,
} mc_26_3_stone_brick_wall_south;

typedef enum {
	mc_26_3_stone_brick_wall_west_V_NONE,
	mc_26_3_stone_brick_wall_west_V_LOW,
	mc_26_3_stone_brick_wall_west_V_TALL,
} mc_26_3_stone_brick_wall_west;

typedef struct {
	mc_26_3_stone_brick_wall_east east;
	mc_26_3_stone_brick_wall_north north;
	mc_26_3_stone_brick_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_stone_brick_wall_west west;
} mc_26_3_stone_brick_wall_properties;

typedef enum {
	mc_26_3_stone_button_face_V_FLOOR,
	mc_26_3_stone_button_face_V_WALL,
	mc_26_3_stone_button_face_V_CEILING,
} mc_26_3_stone_button_face;

typedef enum {
	mc_26_3_stone_button_facing_V_NORTH,
	mc_26_3_stone_button_facing_V_SOUTH,
	mc_26_3_stone_button_facing_V_WEST,
	mc_26_3_stone_button_facing_V_EAST,
} mc_26_3_stone_button_facing;

typedef struct {
	mc_26_3_stone_button_face face;
	mc_26_3_stone_button_facing facing;
	b8 powered;
} mc_26_3_stone_button_properties;

typedef struct {
	b8 powered;
} mc_26_3_stone_pressure_plate_properties;

typedef enum {
	mc_26_3_stone_slab_type_V_TOP,
	mc_26_3_stone_slab_type_V_BOTTOM,
	mc_26_3_stone_slab_type_V_DOUBLE,
} mc_26_3_stone_slab_type;

typedef struct {
	mc_26_3_stone_slab_type type;
	b8 waterlogged;
} mc_26_3_stone_slab_properties;

typedef enum {
	mc_26_3_stone_stairs_facing_V_NORTH,
	mc_26_3_stone_stairs_facing_V_SOUTH,
	mc_26_3_stone_stairs_facing_V_WEST,
	mc_26_3_stone_stairs_facing_V_EAST,
} mc_26_3_stone_stairs_facing;

typedef enum {
	mc_26_3_stone_stairs_half_V_TOP,
	mc_26_3_stone_stairs_half_V_BOTTOM,
} mc_26_3_stone_stairs_half;

typedef enum {
	mc_26_3_stone_stairs_shape_V_STRAIGHT,
	mc_26_3_stone_stairs_shape_V_INNER_LEFT,
	mc_26_3_stone_stairs_shape_V_INNER_RIGHT,
	mc_26_3_stone_stairs_shape_V_OUTER_LEFT,
	mc_26_3_stone_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_stone_stairs_shape;

typedef struct {
	mc_26_3_stone_stairs_facing facing;
	mc_26_3_stone_stairs_half half;
	mc_26_3_stone_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_stone_stairs_properties;

typedef enum {
	mc_26_3_stonecutter_facing_V_NORTH,
	mc_26_3_stonecutter_facing_V_SOUTH,
	mc_26_3_stonecutter_facing_V_WEST,
	mc_26_3_stonecutter_facing_V_EAST,
} mc_26_3_stonecutter_facing;

typedef struct {
	mc_26_3_stonecutter_facing facing;
} mc_26_3_stonecutter_properties;

typedef enum {
	mc_26_3_straw_bed_facing_V_NORTH,
	mc_26_3_straw_bed_facing_V_SOUTH,
	mc_26_3_straw_bed_facing_V_WEST,
	mc_26_3_straw_bed_facing_V_EAST,
} mc_26_3_straw_bed_facing;

typedef enum {
	mc_26_3_straw_bed_part_V_HEAD,
	mc_26_3_straw_bed_part_V_FOOT,
} mc_26_3_straw_bed_part;

typedef struct {
	mc_26_3_straw_bed_facing facing;
	b8 occupied;
	mc_26_3_straw_bed_part part;
} mc_26_3_straw_bed_properties;

typedef enum {
	mc_26_3_stripped_acacia_log_axis_V_X,
	mc_26_3_stripped_acacia_log_axis_V_Y,
	mc_26_3_stripped_acacia_log_axis_V_Z,
} mc_26_3_stripped_acacia_log_axis;

typedef struct {
	mc_26_3_stripped_acacia_log_axis axis;
} mc_26_3_stripped_acacia_log_properties;

typedef enum {
	mc_26_3_stripped_acacia_wood_axis_V_X,
	mc_26_3_stripped_acacia_wood_axis_V_Y,
	mc_26_3_stripped_acacia_wood_axis_V_Z,
} mc_26_3_stripped_acacia_wood_axis;

typedef struct {
	mc_26_3_stripped_acacia_wood_axis axis;
} mc_26_3_stripped_acacia_wood_properties;

typedef enum {
	mc_26_3_stripped_bamboo_block_axis_V_X,
	mc_26_3_stripped_bamboo_block_axis_V_Y,
	mc_26_3_stripped_bamboo_block_axis_V_Z,
} mc_26_3_stripped_bamboo_block_axis;

typedef struct {
	mc_26_3_stripped_bamboo_block_axis axis;
} mc_26_3_stripped_bamboo_block_properties;

typedef enum {
	mc_26_3_stripped_birch_log_axis_V_X,
	mc_26_3_stripped_birch_log_axis_V_Y,
	mc_26_3_stripped_birch_log_axis_V_Z,
} mc_26_3_stripped_birch_log_axis;

typedef struct {
	mc_26_3_stripped_birch_log_axis axis;
} mc_26_3_stripped_birch_log_properties;

typedef enum {
	mc_26_3_stripped_birch_wood_axis_V_X,
	mc_26_3_stripped_birch_wood_axis_V_Y,
	mc_26_3_stripped_birch_wood_axis_V_Z,
} mc_26_3_stripped_birch_wood_axis;

typedef struct {
	mc_26_3_stripped_birch_wood_axis axis;
} mc_26_3_stripped_birch_wood_properties;

typedef enum {
	mc_26_3_stripped_cherry_log_axis_V_X,
	mc_26_3_stripped_cherry_log_axis_V_Y,
	mc_26_3_stripped_cherry_log_axis_V_Z,
} mc_26_3_stripped_cherry_log_axis;

typedef struct {
	mc_26_3_stripped_cherry_log_axis axis;
} mc_26_3_stripped_cherry_log_properties;

typedef enum {
	mc_26_3_stripped_cherry_wood_axis_V_X,
	mc_26_3_stripped_cherry_wood_axis_V_Y,
	mc_26_3_stripped_cherry_wood_axis_V_Z,
} mc_26_3_stripped_cherry_wood_axis;

typedef struct {
	mc_26_3_stripped_cherry_wood_axis axis;
} mc_26_3_stripped_cherry_wood_properties;

typedef enum {
	mc_26_3_stripped_crimson_hyphae_axis_V_X,
	mc_26_3_stripped_crimson_hyphae_axis_V_Y,
	mc_26_3_stripped_crimson_hyphae_axis_V_Z,
} mc_26_3_stripped_crimson_hyphae_axis;

typedef struct {
	mc_26_3_stripped_crimson_hyphae_axis axis;
} mc_26_3_stripped_crimson_hyphae_properties;

typedef enum {
	mc_26_3_stripped_crimson_stem_axis_V_X,
	mc_26_3_stripped_crimson_stem_axis_V_Y,
	mc_26_3_stripped_crimson_stem_axis_V_Z,
} mc_26_3_stripped_crimson_stem_axis;

typedef struct {
	mc_26_3_stripped_crimson_stem_axis axis;
} mc_26_3_stripped_crimson_stem_properties;

typedef enum {
	mc_26_3_stripped_dark_oak_log_axis_V_X,
	mc_26_3_stripped_dark_oak_log_axis_V_Y,
	mc_26_3_stripped_dark_oak_log_axis_V_Z,
} mc_26_3_stripped_dark_oak_log_axis;

typedef struct {
	mc_26_3_stripped_dark_oak_log_axis axis;
} mc_26_3_stripped_dark_oak_log_properties;

typedef enum {
	mc_26_3_stripped_dark_oak_wood_axis_V_X,
	mc_26_3_stripped_dark_oak_wood_axis_V_Y,
	mc_26_3_stripped_dark_oak_wood_axis_V_Z,
} mc_26_3_stripped_dark_oak_wood_axis;

typedef struct {
	mc_26_3_stripped_dark_oak_wood_axis axis;
} mc_26_3_stripped_dark_oak_wood_properties;

typedef enum {
	mc_26_3_stripped_jungle_log_axis_V_X,
	mc_26_3_stripped_jungle_log_axis_V_Y,
	mc_26_3_stripped_jungle_log_axis_V_Z,
} mc_26_3_stripped_jungle_log_axis;

typedef struct {
	mc_26_3_stripped_jungle_log_axis axis;
} mc_26_3_stripped_jungle_log_properties;

typedef enum {
	mc_26_3_stripped_jungle_wood_axis_V_X,
	mc_26_3_stripped_jungle_wood_axis_V_Y,
	mc_26_3_stripped_jungle_wood_axis_V_Z,
} mc_26_3_stripped_jungle_wood_axis;

typedef struct {
	mc_26_3_stripped_jungle_wood_axis axis;
} mc_26_3_stripped_jungle_wood_properties;

typedef enum {
	mc_26_3_stripped_mangrove_log_axis_V_X,
	mc_26_3_stripped_mangrove_log_axis_V_Y,
	mc_26_3_stripped_mangrove_log_axis_V_Z,
} mc_26_3_stripped_mangrove_log_axis;

typedef struct {
	mc_26_3_stripped_mangrove_log_axis axis;
} mc_26_3_stripped_mangrove_log_properties;

typedef enum {
	mc_26_3_stripped_mangrove_wood_axis_V_X,
	mc_26_3_stripped_mangrove_wood_axis_V_Y,
	mc_26_3_stripped_mangrove_wood_axis_V_Z,
} mc_26_3_stripped_mangrove_wood_axis;

typedef struct {
	mc_26_3_stripped_mangrove_wood_axis axis;
} mc_26_3_stripped_mangrove_wood_properties;

typedef enum {
	mc_26_3_stripped_oak_log_axis_V_X,
	mc_26_3_stripped_oak_log_axis_V_Y,
	mc_26_3_stripped_oak_log_axis_V_Z,
} mc_26_3_stripped_oak_log_axis;

typedef struct {
	mc_26_3_stripped_oak_log_axis axis;
} mc_26_3_stripped_oak_log_properties;

typedef enum {
	mc_26_3_stripped_oak_wood_axis_V_X,
	mc_26_3_stripped_oak_wood_axis_V_Y,
	mc_26_3_stripped_oak_wood_axis_V_Z,
} mc_26_3_stripped_oak_wood_axis;

typedef struct {
	mc_26_3_stripped_oak_wood_axis axis;
} mc_26_3_stripped_oak_wood_properties;

typedef enum {
	mc_26_3_stripped_pale_oak_log_axis_V_X,
	mc_26_3_stripped_pale_oak_log_axis_V_Y,
	mc_26_3_stripped_pale_oak_log_axis_V_Z,
} mc_26_3_stripped_pale_oak_log_axis;

typedef struct {
	mc_26_3_stripped_pale_oak_log_axis axis;
} mc_26_3_stripped_pale_oak_log_properties;

typedef enum {
	mc_26_3_stripped_pale_oak_wood_axis_V_X,
	mc_26_3_stripped_pale_oak_wood_axis_V_Y,
	mc_26_3_stripped_pale_oak_wood_axis_V_Z,
} mc_26_3_stripped_pale_oak_wood_axis;

typedef struct {
	mc_26_3_stripped_pale_oak_wood_axis axis;
} mc_26_3_stripped_pale_oak_wood_properties;

typedef enum {
	mc_26_3_stripped_poplar_log_axis_V_X,
	mc_26_3_stripped_poplar_log_axis_V_Y,
	mc_26_3_stripped_poplar_log_axis_V_Z,
} mc_26_3_stripped_poplar_log_axis;

typedef struct {
	mc_26_3_stripped_poplar_log_axis axis;
} mc_26_3_stripped_poplar_log_properties;

typedef enum {
	mc_26_3_stripped_poplar_wood_axis_V_X,
	mc_26_3_stripped_poplar_wood_axis_V_Y,
	mc_26_3_stripped_poplar_wood_axis_V_Z,
} mc_26_3_stripped_poplar_wood_axis;

typedef struct {
	mc_26_3_stripped_poplar_wood_axis axis;
} mc_26_3_stripped_poplar_wood_properties;

typedef enum {
	mc_26_3_stripped_spruce_log_axis_V_X,
	mc_26_3_stripped_spruce_log_axis_V_Y,
	mc_26_3_stripped_spruce_log_axis_V_Z,
} mc_26_3_stripped_spruce_log_axis;

typedef struct {
	mc_26_3_stripped_spruce_log_axis axis;
} mc_26_3_stripped_spruce_log_properties;

typedef enum {
	mc_26_3_stripped_spruce_wood_axis_V_X,
	mc_26_3_stripped_spruce_wood_axis_V_Y,
	mc_26_3_stripped_spruce_wood_axis_V_Z,
} mc_26_3_stripped_spruce_wood_axis;

typedef struct {
	mc_26_3_stripped_spruce_wood_axis axis;
} mc_26_3_stripped_spruce_wood_properties;

typedef enum {
	mc_26_3_stripped_warped_hyphae_axis_V_X,
	mc_26_3_stripped_warped_hyphae_axis_V_Y,
	mc_26_3_stripped_warped_hyphae_axis_V_Z,
} mc_26_3_stripped_warped_hyphae_axis;

typedef struct {
	mc_26_3_stripped_warped_hyphae_axis axis;
} mc_26_3_stripped_warped_hyphae_properties;

typedef enum {
	mc_26_3_stripped_warped_stem_axis_V_X,
	mc_26_3_stripped_warped_stem_axis_V_Y,
	mc_26_3_stripped_warped_stem_axis_V_Z,
} mc_26_3_stripped_warped_stem_axis;

typedef struct {
	mc_26_3_stripped_warped_stem_axis axis;
} mc_26_3_stripped_warped_stem_properties;

typedef enum {
	mc_26_3_structure_block_mode_V_SAVE,
	mc_26_3_structure_block_mode_V_LOAD,
	mc_26_3_structure_block_mode_V_CORNER,
	mc_26_3_structure_block_mode_V_DATA,
} mc_26_3_structure_block_mode;

typedef struct {
	mc_26_3_structure_block_mode mode;
} mc_26_3_structure_block_properties;

typedef enum {
	mc_26_3_sugar_cane_age_V_V_0,
	mc_26_3_sugar_cane_age_V_V_1,
	mc_26_3_sugar_cane_age_V_V_2,
	mc_26_3_sugar_cane_age_V_V_3,
	mc_26_3_sugar_cane_age_V_V_4,
	mc_26_3_sugar_cane_age_V_V_5,
	mc_26_3_sugar_cane_age_V_V_6,
	mc_26_3_sugar_cane_age_V_V_7,
	mc_26_3_sugar_cane_age_V_V_8,
	mc_26_3_sugar_cane_age_V_V_9,
	mc_26_3_sugar_cane_age_V_V_10,
	mc_26_3_sugar_cane_age_V_V_11,
	mc_26_3_sugar_cane_age_V_V_12,
	mc_26_3_sugar_cane_age_V_V_13,
	mc_26_3_sugar_cane_age_V_V_14,
	mc_26_3_sugar_cane_age_V_V_15,
} mc_26_3_sugar_cane_age;

typedef struct {
	mc_26_3_sugar_cane_age age;
} mc_26_3_sugar_cane_properties;

typedef enum {
	mc_26_3_sulfur_brick_slab_type_V_TOP,
	mc_26_3_sulfur_brick_slab_type_V_BOTTOM,
	mc_26_3_sulfur_brick_slab_type_V_DOUBLE,
} mc_26_3_sulfur_brick_slab_type;

typedef struct {
	mc_26_3_sulfur_brick_slab_type type;
	b8 waterlogged;
} mc_26_3_sulfur_brick_slab_properties;

typedef enum {
	mc_26_3_sulfur_brick_stairs_facing_V_NORTH,
	mc_26_3_sulfur_brick_stairs_facing_V_SOUTH,
	mc_26_3_sulfur_brick_stairs_facing_V_WEST,
	mc_26_3_sulfur_brick_stairs_facing_V_EAST,
} mc_26_3_sulfur_brick_stairs_facing;

typedef enum {
	mc_26_3_sulfur_brick_stairs_half_V_TOP,
	mc_26_3_sulfur_brick_stairs_half_V_BOTTOM,
} mc_26_3_sulfur_brick_stairs_half;

typedef enum {
	mc_26_3_sulfur_brick_stairs_shape_V_STRAIGHT,
	mc_26_3_sulfur_brick_stairs_shape_V_INNER_LEFT,
	mc_26_3_sulfur_brick_stairs_shape_V_INNER_RIGHT,
	mc_26_3_sulfur_brick_stairs_shape_V_OUTER_LEFT,
	mc_26_3_sulfur_brick_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_sulfur_brick_stairs_shape;

typedef struct {
	mc_26_3_sulfur_brick_stairs_facing facing;
	mc_26_3_sulfur_brick_stairs_half half;
	mc_26_3_sulfur_brick_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_sulfur_brick_stairs_properties;

typedef enum {
	mc_26_3_sulfur_brick_wall_east_V_NONE,
	mc_26_3_sulfur_brick_wall_east_V_LOW,
	mc_26_3_sulfur_brick_wall_east_V_TALL,
} mc_26_3_sulfur_brick_wall_east;

typedef enum {
	mc_26_3_sulfur_brick_wall_north_V_NONE,
	mc_26_3_sulfur_brick_wall_north_V_LOW,
	mc_26_3_sulfur_brick_wall_north_V_TALL,
} mc_26_3_sulfur_brick_wall_north;

typedef enum {
	mc_26_3_sulfur_brick_wall_south_V_NONE,
	mc_26_3_sulfur_brick_wall_south_V_LOW,
	mc_26_3_sulfur_brick_wall_south_V_TALL,
} mc_26_3_sulfur_brick_wall_south;

typedef enum {
	mc_26_3_sulfur_brick_wall_west_V_NONE,
	mc_26_3_sulfur_brick_wall_west_V_LOW,
	mc_26_3_sulfur_brick_wall_west_V_TALL,
} mc_26_3_sulfur_brick_wall_west;

typedef struct {
	mc_26_3_sulfur_brick_wall_east east;
	mc_26_3_sulfur_brick_wall_north north;
	mc_26_3_sulfur_brick_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_sulfur_brick_wall_west west;
} mc_26_3_sulfur_brick_wall_properties;

typedef enum {
	mc_26_3_sulfur_slab_type_V_TOP,
	mc_26_3_sulfur_slab_type_V_BOTTOM,
	mc_26_3_sulfur_slab_type_V_DOUBLE,
} mc_26_3_sulfur_slab_type;

typedef struct {
	mc_26_3_sulfur_slab_type type;
	b8 waterlogged;
} mc_26_3_sulfur_slab_properties;

typedef enum {
	mc_26_3_sulfur_spike_thickness_V_TIP_MERGE,
	mc_26_3_sulfur_spike_thickness_V_TIP,
	mc_26_3_sulfur_spike_thickness_V_FRUSTUM,
	mc_26_3_sulfur_spike_thickness_V_MIDDLE,
	mc_26_3_sulfur_spike_thickness_V_BASE,
} mc_26_3_sulfur_spike_thickness;

typedef enum {
	mc_26_3_sulfur_spike_vertical_direction_V_UP,
	mc_26_3_sulfur_spike_vertical_direction_V_DOWN,
} mc_26_3_sulfur_spike_vertical_direction;

typedef struct {
	mc_26_3_sulfur_spike_thickness thickness;
	mc_26_3_sulfur_spike_vertical_direction vertical_direction;
	b8 waterlogged;
} mc_26_3_sulfur_spike_properties;

typedef enum {
	mc_26_3_sulfur_stairs_facing_V_NORTH,
	mc_26_3_sulfur_stairs_facing_V_SOUTH,
	mc_26_3_sulfur_stairs_facing_V_WEST,
	mc_26_3_sulfur_stairs_facing_V_EAST,
} mc_26_3_sulfur_stairs_facing;

typedef enum {
	mc_26_3_sulfur_stairs_half_V_TOP,
	mc_26_3_sulfur_stairs_half_V_BOTTOM,
} mc_26_3_sulfur_stairs_half;

typedef enum {
	mc_26_3_sulfur_stairs_shape_V_STRAIGHT,
	mc_26_3_sulfur_stairs_shape_V_INNER_LEFT,
	mc_26_3_sulfur_stairs_shape_V_INNER_RIGHT,
	mc_26_3_sulfur_stairs_shape_V_OUTER_LEFT,
	mc_26_3_sulfur_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_sulfur_stairs_shape;

typedef struct {
	mc_26_3_sulfur_stairs_facing facing;
	mc_26_3_sulfur_stairs_half half;
	mc_26_3_sulfur_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_sulfur_stairs_properties;

typedef enum {
	mc_26_3_sulfur_wall_east_V_NONE,
	mc_26_3_sulfur_wall_east_V_LOW,
	mc_26_3_sulfur_wall_east_V_TALL,
} mc_26_3_sulfur_wall_east;

typedef enum {
	mc_26_3_sulfur_wall_north_V_NONE,
	mc_26_3_sulfur_wall_north_V_LOW,
	mc_26_3_sulfur_wall_north_V_TALL,
} mc_26_3_sulfur_wall_north;

typedef enum {
	mc_26_3_sulfur_wall_south_V_NONE,
	mc_26_3_sulfur_wall_south_V_LOW,
	mc_26_3_sulfur_wall_south_V_TALL,
} mc_26_3_sulfur_wall_south;

typedef enum {
	mc_26_3_sulfur_wall_west_V_NONE,
	mc_26_3_sulfur_wall_west_V_LOW,
	mc_26_3_sulfur_wall_west_V_TALL,
} mc_26_3_sulfur_wall_west;

typedef struct {
	mc_26_3_sulfur_wall_east east;
	mc_26_3_sulfur_wall_north north;
	mc_26_3_sulfur_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_sulfur_wall_west west;
} mc_26_3_sulfur_wall_properties;

typedef enum {
	mc_26_3_sunflower_half_V_UPPER,
	mc_26_3_sunflower_half_V_LOWER,
} mc_26_3_sunflower_half;

typedef struct {
	mc_26_3_sunflower_half half;
} mc_26_3_sunflower_properties;

typedef enum {
	mc_26_3_suspicious_gravel_dusted_V_V_0,
	mc_26_3_suspicious_gravel_dusted_V_V_1,
	mc_26_3_suspicious_gravel_dusted_V_V_2,
	mc_26_3_suspicious_gravel_dusted_V_V_3,
} mc_26_3_suspicious_gravel_dusted;

typedef struct {
	mc_26_3_suspicious_gravel_dusted dusted;
} mc_26_3_suspicious_gravel_properties;

typedef enum {
	mc_26_3_suspicious_sand_dusted_V_V_0,
	mc_26_3_suspicious_sand_dusted_V_V_1,
	mc_26_3_suspicious_sand_dusted_V_V_2,
	mc_26_3_suspicious_sand_dusted_V_V_3,
} mc_26_3_suspicious_sand_dusted;

typedef struct {
	mc_26_3_suspicious_sand_dusted dusted;
} mc_26_3_suspicious_sand_properties;

typedef enum {
	mc_26_3_sweet_berry_bush_age_V_V_0,
	mc_26_3_sweet_berry_bush_age_V_V_1,
	mc_26_3_sweet_berry_bush_age_V_V_2,
	mc_26_3_sweet_berry_bush_age_V_V_3,
} mc_26_3_sweet_berry_bush_age;

typedef struct {
	mc_26_3_sweet_berry_bush_age age;
} mc_26_3_sweet_berry_bush_properties;

typedef enum {
	mc_26_3_tall_grass_half_V_UPPER,
	mc_26_3_tall_grass_half_V_LOWER,
} mc_26_3_tall_grass_half;

typedef struct {
	mc_26_3_tall_grass_half half;
} mc_26_3_tall_grass_properties;

typedef enum {
	mc_26_3_tall_seagrass_half_V_UPPER,
	mc_26_3_tall_seagrass_half_V_LOWER,
} mc_26_3_tall_seagrass_half;

typedef struct {
	mc_26_3_tall_seagrass_half half;
} mc_26_3_tall_seagrass_properties;

typedef enum {
	mc_26_3_target_power_V_V_0,
	mc_26_3_target_power_V_V_1,
	mc_26_3_target_power_V_V_2,
	mc_26_3_target_power_V_V_3,
	mc_26_3_target_power_V_V_4,
	mc_26_3_target_power_V_V_5,
	mc_26_3_target_power_V_V_6,
	mc_26_3_target_power_V_V_7,
	mc_26_3_target_power_V_V_8,
	mc_26_3_target_power_V_V_9,
	mc_26_3_target_power_V_V_10,
	mc_26_3_target_power_V_V_11,
	mc_26_3_target_power_V_V_12,
	mc_26_3_target_power_V_V_13,
	mc_26_3_target_power_V_V_14,
	mc_26_3_target_power_V_V_15,
} mc_26_3_target_power;

typedef struct {
	mc_26_3_target_power power;
} mc_26_3_target_properties;

typedef enum {
	mc_26_3_test_block_mode_V_START,
	mc_26_3_test_block_mode_V_LOG,
	mc_26_3_test_block_mode_V_FAIL,
	mc_26_3_test_block_mode_V_ACCEPT,
} mc_26_3_test_block_mode;

typedef struct {
	mc_26_3_test_block_mode mode;
} mc_26_3_test_block_properties;

typedef struct {
	b8 unstable;
} mc_26_3_tnt_properties;

typedef enum {
	mc_26_3_torchflower_crop_age_V_V_0,
	mc_26_3_torchflower_crop_age_V_V_1,
} mc_26_3_torchflower_crop_age;

typedef struct {
	mc_26_3_torchflower_crop_age age;
} mc_26_3_torchflower_crop_properties;

typedef enum {
	mc_26_3_trapped_chest_type_V_SINGLE,
	mc_26_3_trapped_chest_type_V_LEFT,
	mc_26_3_trapped_chest_type_V_RIGHT,
} mc_26_3_trapped_chest_type;

typedef enum {
	mc_26_3_trapped_chest_facing_V_NORTH,
	mc_26_3_trapped_chest_facing_V_SOUTH,
	mc_26_3_trapped_chest_facing_V_WEST,
	mc_26_3_trapped_chest_facing_V_EAST,
} mc_26_3_trapped_chest_facing;

typedef struct {
	mc_26_3_trapped_chest_type type;
	mc_26_3_trapped_chest_facing facing;
	b8 waterlogged;
} mc_26_3_trapped_chest_properties;

typedef enum {
	mc_26_3_trial_spawner_trial_spawner_state_V_INACTIVE,
	mc_26_3_trial_spawner_trial_spawner_state_V_WAITING_FOR_PLAYERS,
	mc_26_3_trial_spawner_trial_spawner_state_V_ACTIVE,
	mc_26_3_trial_spawner_trial_spawner_state_V_WAITING_FOR_REWARD_EJECTION,
	mc_26_3_trial_spawner_trial_spawner_state_V_EJECTING_REWARD,
	mc_26_3_trial_spawner_trial_spawner_state_V_COOLDOWN,
} mc_26_3_trial_spawner_trial_spawner_state;

typedef struct {
	b8 ominous;
	mc_26_3_trial_spawner_trial_spawner_state trial_spawner_state;
} mc_26_3_trial_spawner_properties;

typedef struct {
	b8 attached;
	b8 disarmed;
	b8 east;
	b8 north;
	b8 powered;
	b8 south;
	b8 west;
} mc_26_3_tripwire_properties;

typedef enum {
	mc_26_3_tripwire_hook_facing_V_NORTH,
	mc_26_3_tripwire_hook_facing_V_SOUTH,
	mc_26_3_tripwire_hook_facing_V_WEST,
	mc_26_3_tripwire_hook_facing_V_EAST,
} mc_26_3_tripwire_hook_facing;

typedef struct {
	b8 attached;
	mc_26_3_tripwire_hook_facing facing;
	b8 powered;
} mc_26_3_tripwire_hook_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_tube_coral_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_tube_coral_fan_properties;

typedef enum {
	mc_26_3_tube_coral_wall_fan_facing_V_NORTH,
	mc_26_3_tube_coral_wall_fan_facing_V_SOUTH,
	mc_26_3_tube_coral_wall_fan_facing_V_WEST,
	mc_26_3_tube_coral_wall_fan_facing_V_EAST,
} mc_26_3_tube_coral_wall_fan_facing;

typedef struct {
	mc_26_3_tube_coral_wall_fan_facing facing;
	b8 waterlogged;
} mc_26_3_tube_coral_wall_fan_properties;

typedef enum {
	mc_26_3_tuff_brick_slab_type_V_TOP,
	mc_26_3_tuff_brick_slab_type_V_BOTTOM,
	mc_26_3_tuff_brick_slab_type_V_DOUBLE,
} mc_26_3_tuff_brick_slab_type;

typedef struct {
	mc_26_3_tuff_brick_slab_type type;
	b8 waterlogged;
} mc_26_3_tuff_brick_slab_properties;

typedef enum {
	mc_26_3_tuff_brick_stairs_facing_V_NORTH,
	mc_26_3_tuff_brick_stairs_facing_V_SOUTH,
	mc_26_3_tuff_brick_stairs_facing_V_WEST,
	mc_26_3_tuff_brick_stairs_facing_V_EAST,
} mc_26_3_tuff_brick_stairs_facing;

typedef enum {
	mc_26_3_tuff_brick_stairs_half_V_TOP,
	mc_26_3_tuff_brick_stairs_half_V_BOTTOM,
} mc_26_3_tuff_brick_stairs_half;

typedef enum {
	mc_26_3_tuff_brick_stairs_shape_V_STRAIGHT,
	mc_26_3_tuff_brick_stairs_shape_V_INNER_LEFT,
	mc_26_3_tuff_brick_stairs_shape_V_INNER_RIGHT,
	mc_26_3_tuff_brick_stairs_shape_V_OUTER_LEFT,
	mc_26_3_tuff_brick_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_tuff_brick_stairs_shape;

typedef struct {
	mc_26_3_tuff_brick_stairs_facing facing;
	mc_26_3_tuff_brick_stairs_half half;
	mc_26_3_tuff_brick_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_tuff_brick_stairs_properties;

typedef enum {
	mc_26_3_tuff_brick_wall_east_V_NONE,
	mc_26_3_tuff_brick_wall_east_V_LOW,
	mc_26_3_tuff_brick_wall_east_V_TALL,
} mc_26_3_tuff_brick_wall_east;

typedef enum {
	mc_26_3_tuff_brick_wall_north_V_NONE,
	mc_26_3_tuff_brick_wall_north_V_LOW,
	mc_26_3_tuff_brick_wall_north_V_TALL,
} mc_26_3_tuff_brick_wall_north;

typedef enum {
	mc_26_3_tuff_brick_wall_south_V_NONE,
	mc_26_3_tuff_brick_wall_south_V_LOW,
	mc_26_3_tuff_brick_wall_south_V_TALL,
} mc_26_3_tuff_brick_wall_south;

typedef enum {
	mc_26_3_tuff_brick_wall_west_V_NONE,
	mc_26_3_tuff_brick_wall_west_V_LOW,
	mc_26_3_tuff_brick_wall_west_V_TALL,
} mc_26_3_tuff_brick_wall_west;

typedef struct {
	mc_26_3_tuff_brick_wall_east east;
	mc_26_3_tuff_brick_wall_north north;
	mc_26_3_tuff_brick_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_tuff_brick_wall_west west;
} mc_26_3_tuff_brick_wall_properties;

typedef enum {
	mc_26_3_tuff_slab_type_V_TOP,
	mc_26_3_tuff_slab_type_V_BOTTOM,
	mc_26_3_tuff_slab_type_V_DOUBLE,
} mc_26_3_tuff_slab_type;

typedef struct {
	mc_26_3_tuff_slab_type type;
	b8 waterlogged;
} mc_26_3_tuff_slab_properties;

typedef enum {
	mc_26_3_tuff_stairs_facing_V_NORTH,
	mc_26_3_tuff_stairs_facing_V_SOUTH,
	mc_26_3_tuff_stairs_facing_V_WEST,
	mc_26_3_tuff_stairs_facing_V_EAST,
} mc_26_3_tuff_stairs_facing;

typedef enum {
	mc_26_3_tuff_stairs_half_V_TOP,
	mc_26_3_tuff_stairs_half_V_BOTTOM,
} mc_26_3_tuff_stairs_half;

typedef enum {
	mc_26_3_tuff_stairs_shape_V_STRAIGHT,
	mc_26_3_tuff_stairs_shape_V_INNER_LEFT,
	mc_26_3_tuff_stairs_shape_V_INNER_RIGHT,
	mc_26_3_tuff_stairs_shape_V_OUTER_LEFT,
	mc_26_3_tuff_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_tuff_stairs_shape;

typedef struct {
	mc_26_3_tuff_stairs_facing facing;
	mc_26_3_tuff_stairs_half half;
	mc_26_3_tuff_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_tuff_stairs_properties;

typedef enum {
	mc_26_3_tuff_wall_east_V_NONE,
	mc_26_3_tuff_wall_east_V_LOW,
	mc_26_3_tuff_wall_east_V_TALL,
} mc_26_3_tuff_wall_east;

typedef enum {
	mc_26_3_tuff_wall_north_V_NONE,
	mc_26_3_tuff_wall_north_V_LOW,
	mc_26_3_tuff_wall_north_V_TALL,
} mc_26_3_tuff_wall_north;

typedef enum {
	mc_26_3_tuff_wall_south_V_NONE,
	mc_26_3_tuff_wall_south_V_LOW,
	mc_26_3_tuff_wall_south_V_TALL,
} mc_26_3_tuff_wall_south;

typedef enum {
	mc_26_3_tuff_wall_west_V_NONE,
	mc_26_3_tuff_wall_west_V_LOW,
	mc_26_3_tuff_wall_west_V_TALL,
} mc_26_3_tuff_wall_west;

typedef struct {
	mc_26_3_tuff_wall_east east;
	mc_26_3_tuff_wall_north north;
	mc_26_3_tuff_wall_south south;
	b8 up;
	b8 waterlogged;
	mc_26_3_tuff_wall_west west;
} mc_26_3_tuff_wall_properties;

typedef enum {
	mc_26_3_turtle_egg_eggs_V_V_1,
	mc_26_3_turtle_egg_eggs_V_V_2,
	mc_26_3_turtle_egg_eggs_V_V_3,
	mc_26_3_turtle_egg_eggs_V_V_4,
} mc_26_3_turtle_egg_eggs;

typedef enum {
	mc_26_3_turtle_egg_hatch_V_V_0,
	mc_26_3_turtle_egg_hatch_V_V_1,
	mc_26_3_turtle_egg_hatch_V_V_2,
} mc_26_3_turtle_egg_hatch;

typedef struct {
	mc_26_3_turtle_egg_eggs eggs;
	mc_26_3_turtle_egg_hatch hatch;
} mc_26_3_turtle_egg_properties;

typedef enum {
	mc_26_3_twisting_vines_age_V_V_0,
	mc_26_3_twisting_vines_age_V_V_1,
	mc_26_3_twisting_vines_age_V_V_2,
	mc_26_3_twisting_vines_age_V_V_3,
	mc_26_3_twisting_vines_age_V_V_4,
	mc_26_3_twisting_vines_age_V_V_5,
	mc_26_3_twisting_vines_age_V_V_6,
	mc_26_3_twisting_vines_age_V_V_7,
	mc_26_3_twisting_vines_age_V_V_8,
	mc_26_3_twisting_vines_age_V_V_9,
	mc_26_3_twisting_vines_age_V_V_10,
	mc_26_3_twisting_vines_age_V_V_11,
	mc_26_3_twisting_vines_age_V_V_12,
	mc_26_3_twisting_vines_age_V_V_13,
	mc_26_3_twisting_vines_age_V_V_14,
	mc_26_3_twisting_vines_age_V_V_15,
	mc_26_3_twisting_vines_age_V_V_16,
	mc_26_3_twisting_vines_age_V_V_17,
	mc_26_3_twisting_vines_age_V_V_18,
	mc_26_3_twisting_vines_age_V_V_19,
	mc_26_3_twisting_vines_age_V_V_20,
	mc_26_3_twisting_vines_age_V_V_21,
	mc_26_3_twisting_vines_age_V_V_22,
	mc_26_3_twisting_vines_age_V_V_23,
	mc_26_3_twisting_vines_age_V_V_24,
	mc_26_3_twisting_vines_age_V_V_25,
} mc_26_3_twisting_vines_age;

typedef struct {
	mc_26_3_twisting_vines_age age;
} mc_26_3_twisting_vines_properties;

typedef enum {
	mc_26_3_vault_facing_V_NORTH,
	mc_26_3_vault_facing_V_SOUTH,
	mc_26_3_vault_facing_V_WEST,
	mc_26_3_vault_facing_V_EAST,
} mc_26_3_vault_facing;

typedef enum {
	mc_26_3_vault_vault_state_V_INACTIVE,
	mc_26_3_vault_vault_state_V_ACTIVE,
	mc_26_3_vault_vault_state_V_UNLOCKING,
	mc_26_3_vault_vault_state_V_EJECTING,
} mc_26_3_vault_vault_state;

typedef struct {
	mc_26_3_vault_facing facing;
	b8 ominous;
	mc_26_3_vault_vault_state vault_state;
} mc_26_3_vault_properties;

typedef enum {
	mc_26_3_verdant_froglight_axis_V_X,
	mc_26_3_verdant_froglight_axis_V_Y,
	mc_26_3_verdant_froglight_axis_V_Z,
} mc_26_3_verdant_froglight_axis;

typedef struct {
	mc_26_3_verdant_froglight_axis axis;
} mc_26_3_verdant_froglight_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 up;
	b8 west;
} mc_26_3_vine_properties;

typedef enum {
	mc_26_3_wall_torch_facing_V_NORTH,
	mc_26_3_wall_torch_facing_V_SOUTH,
	mc_26_3_wall_torch_facing_V_WEST,
	mc_26_3_wall_torch_facing_V_EAST,
} mc_26_3_wall_torch_facing;

typedef struct {
	mc_26_3_wall_torch_facing facing;
} mc_26_3_wall_torch_properties;

typedef enum {
	mc_26_3_warped_button_face_V_FLOOR,
	mc_26_3_warped_button_face_V_WALL,
	mc_26_3_warped_button_face_V_CEILING,
} mc_26_3_warped_button_face;

typedef enum {
	mc_26_3_warped_button_facing_V_NORTH,
	mc_26_3_warped_button_facing_V_SOUTH,
	mc_26_3_warped_button_facing_V_WEST,
	mc_26_3_warped_button_facing_V_EAST,
} mc_26_3_warped_button_facing;

typedef struct {
	mc_26_3_warped_button_face face;
	mc_26_3_warped_button_facing facing;
	b8 powered;
} mc_26_3_warped_button_properties;

typedef enum {
	mc_26_3_warped_door_facing_V_NORTH,
	mc_26_3_warped_door_facing_V_SOUTH,
	mc_26_3_warped_door_facing_V_WEST,
	mc_26_3_warped_door_facing_V_EAST,
} mc_26_3_warped_door_facing;

typedef enum {
	mc_26_3_warped_door_half_V_UPPER,
	mc_26_3_warped_door_half_V_LOWER,
} mc_26_3_warped_door_half;

typedef enum {
	mc_26_3_warped_door_hinge_V_LEFT,
	mc_26_3_warped_door_hinge_V_RIGHT,
} mc_26_3_warped_door_hinge;

typedef struct {
	mc_26_3_warped_door_facing facing;
	mc_26_3_warped_door_half half;
	mc_26_3_warped_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_warped_door_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_warped_fence_properties;

typedef enum {
	mc_26_3_warped_fence_gate_facing_V_NORTH,
	mc_26_3_warped_fence_gate_facing_V_SOUTH,
	mc_26_3_warped_fence_gate_facing_V_WEST,
	mc_26_3_warped_fence_gate_facing_V_EAST,
} mc_26_3_warped_fence_gate_facing;

typedef struct {
	mc_26_3_warped_fence_gate_facing facing;
	b8 in_wall;
	b8 open;
	b8 powered;
} mc_26_3_warped_fence_gate_properties;

typedef enum {
	mc_26_3_warped_hanging_sign_rotation_V_V_0,
	mc_26_3_warped_hanging_sign_rotation_V_V_1,
	mc_26_3_warped_hanging_sign_rotation_V_V_2,
	mc_26_3_warped_hanging_sign_rotation_V_V_3,
	mc_26_3_warped_hanging_sign_rotation_V_V_4,
	mc_26_3_warped_hanging_sign_rotation_V_V_5,
	mc_26_3_warped_hanging_sign_rotation_V_V_6,
	mc_26_3_warped_hanging_sign_rotation_V_V_7,
	mc_26_3_warped_hanging_sign_rotation_V_V_8,
	mc_26_3_warped_hanging_sign_rotation_V_V_9,
	mc_26_3_warped_hanging_sign_rotation_V_V_10,
	mc_26_3_warped_hanging_sign_rotation_V_V_11,
	mc_26_3_warped_hanging_sign_rotation_V_V_12,
	mc_26_3_warped_hanging_sign_rotation_V_V_13,
	mc_26_3_warped_hanging_sign_rotation_V_V_14,
	mc_26_3_warped_hanging_sign_rotation_V_V_15,
} mc_26_3_warped_hanging_sign_rotation;

typedef struct {
	b8 attached;
	mc_26_3_warped_hanging_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_warped_hanging_sign_properties;

typedef enum {
	mc_26_3_warped_hyphae_axis_V_X,
	mc_26_3_warped_hyphae_axis_V_Y,
	mc_26_3_warped_hyphae_axis_V_Z,
} mc_26_3_warped_hyphae_axis;

typedef struct {
	mc_26_3_warped_hyphae_axis axis;
} mc_26_3_warped_hyphae_properties;

typedef struct {
	b8 powered;
} mc_26_3_warped_pressure_plate_properties;

typedef enum {
	mc_26_3_warped_shelf_facing_V_NORTH,
	mc_26_3_warped_shelf_facing_V_SOUTH,
	mc_26_3_warped_shelf_facing_V_WEST,
	mc_26_3_warped_shelf_facing_V_EAST,
} mc_26_3_warped_shelf_facing;

typedef enum {
	mc_26_3_warped_shelf_side_chain_V_UNCONNECTED,
	mc_26_3_warped_shelf_side_chain_V_RIGHT,
	mc_26_3_warped_shelf_side_chain_V_CENTER,
	mc_26_3_warped_shelf_side_chain_V_LEFT,
} mc_26_3_warped_shelf_side_chain;

typedef struct {
	mc_26_3_warped_shelf_facing facing;
	b8 powered;
	mc_26_3_warped_shelf_side_chain side_chain;
	b8 waterlogged;
} mc_26_3_warped_shelf_properties;

typedef enum {
	mc_26_3_warped_sign_rotation_V_V_0,
	mc_26_3_warped_sign_rotation_V_V_1,
	mc_26_3_warped_sign_rotation_V_V_2,
	mc_26_3_warped_sign_rotation_V_V_3,
	mc_26_3_warped_sign_rotation_V_V_4,
	mc_26_3_warped_sign_rotation_V_V_5,
	mc_26_3_warped_sign_rotation_V_V_6,
	mc_26_3_warped_sign_rotation_V_V_7,
	mc_26_3_warped_sign_rotation_V_V_8,
	mc_26_3_warped_sign_rotation_V_V_9,
	mc_26_3_warped_sign_rotation_V_V_10,
	mc_26_3_warped_sign_rotation_V_V_11,
	mc_26_3_warped_sign_rotation_V_V_12,
	mc_26_3_warped_sign_rotation_V_V_13,
	mc_26_3_warped_sign_rotation_V_V_14,
	mc_26_3_warped_sign_rotation_V_V_15,
} mc_26_3_warped_sign_rotation;

typedef struct {
	mc_26_3_warped_sign_rotation rotation;
	b8 waterlogged;
} mc_26_3_warped_sign_properties;

typedef enum {
	mc_26_3_warped_slab_type_V_TOP,
	mc_26_3_warped_slab_type_V_BOTTOM,
	mc_26_3_warped_slab_type_V_DOUBLE,
} mc_26_3_warped_slab_type;

typedef struct {
	mc_26_3_warped_slab_type type;
	b8 waterlogged;
} mc_26_3_warped_slab_properties;

typedef enum {
	mc_26_3_warped_stairs_facing_V_NORTH,
	mc_26_3_warped_stairs_facing_V_SOUTH,
	mc_26_3_warped_stairs_facing_V_WEST,
	mc_26_3_warped_stairs_facing_V_EAST,
} mc_26_3_warped_stairs_facing;

typedef enum {
	mc_26_3_warped_stairs_half_V_TOP,
	mc_26_3_warped_stairs_half_V_BOTTOM,
} mc_26_3_warped_stairs_half;

typedef enum {
	mc_26_3_warped_stairs_shape_V_STRAIGHT,
	mc_26_3_warped_stairs_shape_V_INNER_LEFT,
	mc_26_3_warped_stairs_shape_V_INNER_RIGHT,
	mc_26_3_warped_stairs_shape_V_OUTER_LEFT,
	mc_26_3_warped_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_warped_stairs_shape;

typedef struct {
	mc_26_3_warped_stairs_facing facing;
	mc_26_3_warped_stairs_half half;
	mc_26_3_warped_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_warped_stairs_properties;

typedef enum {
	mc_26_3_warped_stem_axis_V_X,
	mc_26_3_warped_stem_axis_V_Y,
	mc_26_3_warped_stem_axis_V_Z,
} mc_26_3_warped_stem_axis;

typedef struct {
	mc_26_3_warped_stem_axis axis;
} mc_26_3_warped_stem_properties;

typedef enum {
	mc_26_3_warped_trapdoor_facing_V_NORTH,
	mc_26_3_warped_trapdoor_facing_V_SOUTH,
	mc_26_3_warped_trapdoor_facing_V_WEST,
	mc_26_3_warped_trapdoor_facing_V_EAST,
} mc_26_3_warped_trapdoor_facing;

typedef enum {
	mc_26_3_warped_trapdoor_half_V_TOP,
	mc_26_3_warped_trapdoor_half_V_BOTTOM,
} mc_26_3_warped_trapdoor_half;

typedef struct {
	mc_26_3_warped_trapdoor_facing facing;
	mc_26_3_warped_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_warped_trapdoor_properties;

typedef enum {
	mc_26_3_warped_wall_hanging_sign_facing_V_NORTH,
	mc_26_3_warped_wall_hanging_sign_facing_V_SOUTH,
	mc_26_3_warped_wall_hanging_sign_facing_V_WEST,
	mc_26_3_warped_wall_hanging_sign_facing_V_EAST,
} mc_26_3_warped_wall_hanging_sign_facing;

typedef struct {
	mc_26_3_warped_wall_hanging_sign_facing facing;
	b8 waterlogged;
} mc_26_3_warped_wall_hanging_sign_properties;

typedef enum {
	mc_26_3_warped_wall_sign_facing_V_NORTH,
	mc_26_3_warped_wall_sign_facing_V_SOUTH,
	mc_26_3_warped_wall_sign_facing_V_WEST,
	mc_26_3_warped_wall_sign_facing_V_EAST,
} mc_26_3_warped_wall_sign_facing;

typedef struct {
	mc_26_3_warped_wall_sign_facing facing;
	b8 waterlogged;
} mc_26_3_warped_wall_sign_properties;

typedef enum {
	mc_26_3_water_level_V_V_0,
	mc_26_3_water_level_V_V_1,
	mc_26_3_water_level_V_V_2,
	mc_26_3_water_level_V_V_3,
	mc_26_3_water_level_V_V_4,
	mc_26_3_water_level_V_V_5,
	mc_26_3_water_level_V_V_6,
	mc_26_3_water_level_V_V_7,
	mc_26_3_water_level_V_V_8,
	mc_26_3_water_level_V_V_9,
	mc_26_3_water_level_V_V_10,
	mc_26_3_water_level_V_V_11,
	mc_26_3_water_level_V_V_12,
	mc_26_3_water_level_V_V_13,
	mc_26_3_water_level_V_V_14,
	mc_26_3_water_level_V_V_15,
} mc_26_3_water_level;

typedef struct {
	mc_26_3_water_level level;
} mc_26_3_water_properties;

typedef enum {
	mc_26_3_water_cauldron_level_V_V_1,
	mc_26_3_water_cauldron_level_V_V_2,
	mc_26_3_water_cauldron_level_V_V_3,
} mc_26_3_water_cauldron_level;

typedef struct {
	mc_26_3_water_cauldron_level level;
} mc_26_3_water_cauldron_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_waxed_copper_bars_properties;

typedef struct {
	b8 lit;
	b8 powered;
} mc_26_3_waxed_copper_bulb_properties;

typedef enum {
	mc_26_3_waxed_copper_chain_axis_V_X,
	mc_26_3_waxed_copper_chain_axis_V_Y,
	mc_26_3_waxed_copper_chain_axis_V_Z,
} mc_26_3_waxed_copper_chain_axis;

typedef struct {
	mc_26_3_waxed_copper_chain_axis axis;
	b8 waterlogged;
} mc_26_3_waxed_copper_chain_properties;

typedef enum {
	mc_26_3_waxed_copper_chest_type_V_SINGLE,
	mc_26_3_waxed_copper_chest_type_V_LEFT,
	mc_26_3_waxed_copper_chest_type_V_RIGHT,
} mc_26_3_waxed_copper_chest_type;

typedef enum {
	mc_26_3_waxed_copper_chest_facing_V_NORTH,
	mc_26_3_waxed_copper_chest_facing_V_SOUTH,
	mc_26_3_waxed_copper_chest_facing_V_WEST,
	mc_26_3_waxed_copper_chest_facing_V_EAST,
} mc_26_3_waxed_copper_chest_facing;

typedef struct {
	mc_26_3_waxed_copper_chest_type type;
	mc_26_3_waxed_copper_chest_facing facing;
	b8 waterlogged;
} mc_26_3_waxed_copper_chest_properties;

typedef enum {
	mc_26_3_waxed_copper_door_facing_V_NORTH,
	mc_26_3_waxed_copper_door_facing_V_SOUTH,
	mc_26_3_waxed_copper_door_facing_V_WEST,
	mc_26_3_waxed_copper_door_facing_V_EAST,
} mc_26_3_waxed_copper_door_facing;

typedef enum {
	mc_26_3_waxed_copper_door_half_V_UPPER,
	mc_26_3_waxed_copper_door_half_V_LOWER,
} mc_26_3_waxed_copper_door_half;

typedef enum {
	mc_26_3_waxed_copper_door_hinge_V_LEFT,
	mc_26_3_waxed_copper_door_hinge_V_RIGHT,
} mc_26_3_waxed_copper_door_hinge;

typedef struct {
	mc_26_3_waxed_copper_door_facing facing;
	mc_26_3_waxed_copper_door_half half;
	mc_26_3_waxed_copper_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_waxed_copper_door_properties;

typedef enum {
	mc_26_3_waxed_copper_golem_statue_copper_golem_pose_V_STANDING,
	mc_26_3_waxed_copper_golem_statue_copper_golem_pose_V_SITTING,
	mc_26_3_waxed_copper_golem_statue_copper_golem_pose_V_RUNNING,
	mc_26_3_waxed_copper_golem_statue_copper_golem_pose_V_STAR,
} mc_26_3_waxed_copper_golem_statue_copper_golem_pose;

typedef enum {
	mc_26_3_waxed_copper_golem_statue_facing_V_NORTH,
	mc_26_3_waxed_copper_golem_statue_facing_V_SOUTH,
	mc_26_3_waxed_copper_golem_statue_facing_V_WEST,
	mc_26_3_waxed_copper_golem_statue_facing_V_EAST,
} mc_26_3_waxed_copper_golem_statue_facing;

typedef struct {
	mc_26_3_waxed_copper_golem_statue_copper_golem_pose copper_golem_pose;
	mc_26_3_waxed_copper_golem_statue_facing facing;
	b8 waterlogged;
} mc_26_3_waxed_copper_golem_statue_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_waxed_copper_grate_properties;

typedef struct {
	b8 hanging;
	b8 waterlogged;
} mc_26_3_waxed_copper_lantern_properties;

typedef enum {
	mc_26_3_waxed_copper_trapdoor_facing_V_NORTH,
	mc_26_3_waxed_copper_trapdoor_facing_V_SOUTH,
	mc_26_3_waxed_copper_trapdoor_facing_V_WEST,
	mc_26_3_waxed_copper_trapdoor_facing_V_EAST,
} mc_26_3_waxed_copper_trapdoor_facing;

typedef enum {
	mc_26_3_waxed_copper_trapdoor_half_V_TOP,
	mc_26_3_waxed_copper_trapdoor_half_V_BOTTOM,
} mc_26_3_waxed_copper_trapdoor_half;

typedef struct {
	mc_26_3_waxed_copper_trapdoor_facing facing;
	mc_26_3_waxed_copper_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_waxed_copper_trapdoor_properties;

typedef enum {
	mc_26_3_waxed_cut_copper_slab_type_V_TOP,
	mc_26_3_waxed_cut_copper_slab_type_V_BOTTOM,
	mc_26_3_waxed_cut_copper_slab_type_V_DOUBLE,
} mc_26_3_waxed_cut_copper_slab_type;

typedef struct {
	mc_26_3_waxed_cut_copper_slab_type type;
	b8 waterlogged;
} mc_26_3_waxed_cut_copper_slab_properties;

typedef enum {
	mc_26_3_waxed_cut_copper_stairs_facing_V_NORTH,
	mc_26_3_waxed_cut_copper_stairs_facing_V_SOUTH,
	mc_26_3_waxed_cut_copper_stairs_facing_V_WEST,
	mc_26_3_waxed_cut_copper_stairs_facing_V_EAST,
} mc_26_3_waxed_cut_copper_stairs_facing;

typedef enum {
	mc_26_3_waxed_cut_copper_stairs_half_V_TOP,
	mc_26_3_waxed_cut_copper_stairs_half_V_BOTTOM,
} mc_26_3_waxed_cut_copper_stairs_half;

typedef enum {
	mc_26_3_waxed_cut_copper_stairs_shape_V_STRAIGHT,
	mc_26_3_waxed_cut_copper_stairs_shape_V_INNER_LEFT,
	mc_26_3_waxed_cut_copper_stairs_shape_V_INNER_RIGHT,
	mc_26_3_waxed_cut_copper_stairs_shape_V_OUTER_LEFT,
	mc_26_3_waxed_cut_copper_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_waxed_cut_copper_stairs_shape;

typedef struct {
	mc_26_3_waxed_cut_copper_stairs_facing facing;
	mc_26_3_waxed_cut_copper_stairs_half half;
	mc_26_3_waxed_cut_copper_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_waxed_cut_copper_stairs_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_waxed_exposed_copper_bars_properties;

typedef struct {
	b8 lit;
	b8 powered;
} mc_26_3_waxed_exposed_copper_bulb_properties;

typedef enum {
	mc_26_3_waxed_exposed_copper_chain_axis_V_X,
	mc_26_3_waxed_exposed_copper_chain_axis_V_Y,
	mc_26_3_waxed_exposed_copper_chain_axis_V_Z,
} mc_26_3_waxed_exposed_copper_chain_axis;

typedef struct {
	mc_26_3_waxed_exposed_copper_chain_axis axis;
	b8 waterlogged;
} mc_26_3_waxed_exposed_copper_chain_properties;

typedef enum {
	mc_26_3_waxed_exposed_copper_chest_type_V_SINGLE,
	mc_26_3_waxed_exposed_copper_chest_type_V_LEFT,
	mc_26_3_waxed_exposed_copper_chest_type_V_RIGHT,
} mc_26_3_waxed_exposed_copper_chest_type;

typedef enum {
	mc_26_3_waxed_exposed_copper_chest_facing_V_NORTH,
	mc_26_3_waxed_exposed_copper_chest_facing_V_SOUTH,
	mc_26_3_waxed_exposed_copper_chest_facing_V_WEST,
	mc_26_3_waxed_exposed_copper_chest_facing_V_EAST,
} mc_26_3_waxed_exposed_copper_chest_facing;

typedef struct {
	mc_26_3_waxed_exposed_copper_chest_type type;
	mc_26_3_waxed_exposed_copper_chest_facing facing;
	b8 waterlogged;
} mc_26_3_waxed_exposed_copper_chest_properties;

typedef enum {
	mc_26_3_waxed_exposed_copper_door_facing_V_NORTH,
	mc_26_3_waxed_exposed_copper_door_facing_V_SOUTH,
	mc_26_3_waxed_exposed_copper_door_facing_V_WEST,
	mc_26_3_waxed_exposed_copper_door_facing_V_EAST,
} mc_26_3_waxed_exposed_copper_door_facing;

typedef enum {
	mc_26_3_waxed_exposed_copper_door_half_V_UPPER,
	mc_26_3_waxed_exposed_copper_door_half_V_LOWER,
} mc_26_3_waxed_exposed_copper_door_half;

typedef enum {
	mc_26_3_waxed_exposed_copper_door_hinge_V_LEFT,
	mc_26_3_waxed_exposed_copper_door_hinge_V_RIGHT,
} mc_26_3_waxed_exposed_copper_door_hinge;

typedef struct {
	mc_26_3_waxed_exposed_copper_door_facing facing;
	mc_26_3_waxed_exposed_copper_door_half half;
	mc_26_3_waxed_exposed_copper_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_waxed_exposed_copper_door_properties;

typedef enum {
	mc_26_3_waxed_exposed_copper_golem_statue_copper_golem_pose_V_STANDING,
	mc_26_3_waxed_exposed_copper_golem_statue_copper_golem_pose_V_SITTING,
	mc_26_3_waxed_exposed_copper_golem_statue_copper_golem_pose_V_RUNNING,
	mc_26_3_waxed_exposed_copper_golem_statue_copper_golem_pose_V_STAR,
} mc_26_3_waxed_exposed_copper_golem_statue_copper_golem_pose;

typedef enum {
	mc_26_3_waxed_exposed_copper_golem_statue_facing_V_NORTH,
	mc_26_3_waxed_exposed_copper_golem_statue_facing_V_SOUTH,
	mc_26_3_waxed_exposed_copper_golem_statue_facing_V_WEST,
	mc_26_3_waxed_exposed_copper_golem_statue_facing_V_EAST,
} mc_26_3_waxed_exposed_copper_golem_statue_facing;

typedef struct {
	mc_26_3_waxed_exposed_copper_golem_statue_copper_golem_pose copper_golem_pose;
	mc_26_3_waxed_exposed_copper_golem_statue_facing facing;
	b8 waterlogged;
} mc_26_3_waxed_exposed_copper_golem_statue_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_waxed_exposed_copper_grate_properties;

typedef struct {
	b8 hanging;
	b8 waterlogged;
} mc_26_3_waxed_exposed_copper_lantern_properties;

typedef enum {
	mc_26_3_waxed_exposed_copper_trapdoor_facing_V_NORTH,
	mc_26_3_waxed_exposed_copper_trapdoor_facing_V_SOUTH,
	mc_26_3_waxed_exposed_copper_trapdoor_facing_V_WEST,
	mc_26_3_waxed_exposed_copper_trapdoor_facing_V_EAST,
} mc_26_3_waxed_exposed_copper_trapdoor_facing;

typedef enum {
	mc_26_3_waxed_exposed_copper_trapdoor_half_V_TOP,
	mc_26_3_waxed_exposed_copper_trapdoor_half_V_BOTTOM,
} mc_26_3_waxed_exposed_copper_trapdoor_half;

typedef struct {
	mc_26_3_waxed_exposed_copper_trapdoor_facing facing;
	mc_26_3_waxed_exposed_copper_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_waxed_exposed_copper_trapdoor_properties;

typedef enum {
	mc_26_3_waxed_exposed_cut_copper_slab_type_V_TOP,
	mc_26_3_waxed_exposed_cut_copper_slab_type_V_BOTTOM,
	mc_26_3_waxed_exposed_cut_copper_slab_type_V_DOUBLE,
} mc_26_3_waxed_exposed_cut_copper_slab_type;

typedef struct {
	mc_26_3_waxed_exposed_cut_copper_slab_type type;
	b8 waterlogged;
} mc_26_3_waxed_exposed_cut_copper_slab_properties;

typedef enum {
	mc_26_3_waxed_exposed_cut_copper_stairs_facing_V_NORTH,
	mc_26_3_waxed_exposed_cut_copper_stairs_facing_V_SOUTH,
	mc_26_3_waxed_exposed_cut_copper_stairs_facing_V_WEST,
	mc_26_3_waxed_exposed_cut_copper_stairs_facing_V_EAST,
} mc_26_3_waxed_exposed_cut_copper_stairs_facing;

typedef enum {
	mc_26_3_waxed_exposed_cut_copper_stairs_half_V_TOP,
	mc_26_3_waxed_exposed_cut_copper_stairs_half_V_BOTTOM,
} mc_26_3_waxed_exposed_cut_copper_stairs_half;

typedef enum {
	mc_26_3_waxed_exposed_cut_copper_stairs_shape_V_STRAIGHT,
	mc_26_3_waxed_exposed_cut_copper_stairs_shape_V_INNER_LEFT,
	mc_26_3_waxed_exposed_cut_copper_stairs_shape_V_INNER_RIGHT,
	mc_26_3_waxed_exposed_cut_copper_stairs_shape_V_OUTER_LEFT,
	mc_26_3_waxed_exposed_cut_copper_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_waxed_exposed_cut_copper_stairs_shape;

typedef struct {
	mc_26_3_waxed_exposed_cut_copper_stairs_facing facing;
	mc_26_3_waxed_exposed_cut_copper_stairs_half half;
	mc_26_3_waxed_exposed_cut_copper_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_waxed_exposed_cut_copper_stairs_properties;

typedef enum {
	mc_26_3_waxed_exposed_lightning_rod_facing_V_NORTH,
	mc_26_3_waxed_exposed_lightning_rod_facing_V_EAST,
	mc_26_3_waxed_exposed_lightning_rod_facing_V_SOUTH,
	mc_26_3_waxed_exposed_lightning_rod_facing_V_WEST,
	mc_26_3_waxed_exposed_lightning_rod_facing_V_UP,
	mc_26_3_waxed_exposed_lightning_rod_facing_V_DOWN,
} mc_26_3_waxed_exposed_lightning_rod_facing;

typedef struct {
	mc_26_3_waxed_exposed_lightning_rod_facing facing;
	b8 powered;
	b8 waterlogged;
} mc_26_3_waxed_exposed_lightning_rod_properties;

typedef enum {
	mc_26_3_waxed_lightning_rod_facing_V_NORTH,
	mc_26_3_waxed_lightning_rod_facing_V_EAST,
	mc_26_3_waxed_lightning_rod_facing_V_SOUTH,
	mc_26_3_waxed_lightning_rod_facing_V_WEST,
	mc_26_3_waxed_lightning_rod_facing_V_UP,
	mc_26_3_waxed_lightning_rod_facing_V_DOWN,
} mc_26_3_waxed_lightning_rod_facing;

typedef struct {
	mc_26_3_waxed_lightning_rod_facing facing;
	b8 powered;
	b8 waterlogged;
} mc_26_3_waxed_lightning_rod_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_waxed_oxidized_copper_bars_properties;

typedef struct {
	b8 lit;
	b8 powered;
} mc_26_3_waxed_oxidized_copper_bulb_properties;

typedef enum {
	mc_26_3_waxed_oxidized_copper_chain_axis_V_X,
	mc_26_3_waxed_oxidized_copper_chain_axis_V_Y,
	mc_26_3_waxed_oxidized_copper_chain_axis_V_Z,
} mc_26_3_waxed_oxidized_copper_chain_axis;

typedef struct {
	mc_26_3_waxed_oxidized_copper_chain_axis axis;
	b8 waterlogged;
} mc_26_3_waxed_oxidized_copper_chain_properties;

typedef enum {
	mc_26_3_waxed_oxidized_copper_chest_type_V_SINGLE,
	mc_26_3_waxed_oxidized_copper_chest_type_V_LEFT,
	mc_26_3_waxed_oxidized_copper_chest_type_V_RIGHT,
} mc_26_3_waxed_oxidized_copper_chest_type;

typedef enum {
	mc_26_3_waxed_oxidized_copper_chest_facing_V_NORTH,
	mc_26_3_waxed_oxidized_copper_chest_facing_V_SOUTH,
	mc_26_3_waxed_oxidized_copper_chest_facing_V_WEST,
	mc_26_3_waxed_oxidized_copper_chest_facing_V_EAST,
} mc_26_3_waxed_oxidized_copper_chest_facing;

typedef struct {
	mc_26_3_waxed_oxidized_copper_chest_type type;
	mc_26_3_waxed_oxidized_copper_chest_facing facing;
	b8 waterlogged;
} mc_26_3_waxed_oxidized_copper_chest_properties;

typedef enum {
	mc_26_3_waxed_oxidized_copper_door_facing_V_NORTH,
	mc_26_3_waxed_oxidized_copper_door_facing_V_SOUTH,
	mc_26_3_waxed_oxidized_copper_door_facing_V_WEST,
	mc_26_3_waxed_oxidized_copper_door_facing_V_EAST,
} mc_26_3_waxed_oxidized_copper_door_facing;

typedef enum {
	mc_26_3_waxed_oxidized_copper_door_half_V_UPPER,
	mc_26_3_waxed_oxidized_copper_door_half_V_LOWER,
} mc_26_3_waxed_oxidized_copper_door_half;

typedef enum {
	mc_26_3_waxed_oxidized_copper_door_hinge_V_LEFT,
	mc_26_3_waxed_oxidized_copper_door_hinge_V_RIGHT,
} mc_26_3_waxed_oxidized_copper_door_hinge;

typedef struct {
	mc_26_3_waxed_oxidized_copper_door_facing facing;
	mc_26_3_waxed_oxidized_copper_door_half half;
	mc_26_3_waxed_oxidized_copper_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_waxed_oxidized_copper_door_properties;

typedef enum {
	mc_26_3_waxed_oxidized_copper_golem_statue_copper_golem_pose_V_STANDING,
	mc_26_3_waxed_oxidized_copper_golem_statue_copper_golem_pose_V_SITTING,
	mc_26_3_waxed_oxidized_copper_golem_statue_copper_golem_pose_V_RUNNING,
	mc_26_3_waxed_oxidized_copper_golem_statue_copper_golem_pose_V_STAR,
} mc_26_3_waxed_oxidized_copper_golem_statue_copper_golem_pose;

typedef enum {
	mc_26_3_waxed_oxidized_copper_golem_statue_facing_V_NORTH,
	mc_26_3_waxed_oxidized_copper_golem_statue_facing_V_SOUTH,
	mc_26_3_waxed_oxidized_copper_golem_statue_facing_V_WEST,
	mc_26_3_waxed_oxidized_copper_golem_statue_facing_V_EAST,
} mc_26_3_waxed_oxidized_copper_golem_statue_facing;

typedef struct {
	mc_26_3_waxed_oxidized_copper_golem_statue_copper_golem_pose copper_golem_pose;
	mc_26_3_waxed_oxidized_copper_golem_statue_facing facing;
	b8 waterlogged;
} mc_26_3_waxed_oxidized_copper_golem_statue_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_waxed_oxidized_copper_grate_properties;

typedef struct {
	b8 hanging;
	b8 waterlogged;
} mc_26_3_waxed_oxidized_copper_lantern_properties;

typedef enum {
	mc_26_3_waxed_oxidized_copper_trapdoor_facing_V_NORTH,
	mc_26_3_waxed_oxidized_copper_trapdoor_facing_V_SOUTH,
	mc_26_3_waxed_oxidized_copper_trapdoor_facing_V_WEST,
	mc_26_3_waxed_oxidized_copper_trapdoor_facing_V_EAST,
} mc_26_3_waxed_oxidized_copper_trapdoor_facing;

typedef enum {
	mc_26_3_waxed_oxidized_copper_trapdoor_half_V_TOP,
	mc_26_3_waxed_oxidized_copper_trapdoor_half_V_BOTTOM,
} mc_26_3_waxed_oxidized_copper_trapdoor_half;

typedef struct {
	mc_26_3_waxed_oxidized_copper_trapdoor_facing facing;
	mc_26_3_waxed_oxidized_copper_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_waxed_oxidized_copper_trapdoor_properties;

typedef enum {
	mc_26_3_waxed_oxidized_cut_copper_slab_type_V_TOP,
	mc_26_3_waxed_oxidized_cut_copper_slab_type_V_BOTTOM,
	mc_26_3_waxed_oxidized_cut_copper_slab_type_V_DOUBLE,
} mc_26_3_waxed_oxidized_cut_copper_slab_type;

typedef struct {
	mc_26_3_waxed_oxidized_cut_copper_slab_type type;
	b8 waterlogged;
} mc_26_3_waxed_oxidized_cut_copper_slab_properties;

typedef enum {
	mc_26_3_waxed_oxidized_cut_copper_stairs_facing_V_NORTH,
	mc_26_3_waxed_oxidized_cut_copper_stairs_facing_V_SOUTH,
	mc_26_3_waxed_oxidized_cut_copper_stairs_facing_V_WEST,
	mc_26_3_waxed_oxidized_cut_copper_stairs_facing_V_EAST,
} mc_26_3_waxed_oxidized_cut_copper_stairs_facing;

typedef enum {
	mc_26_3_waxed_oxidized_cut_copper_stairs_half_V_TOP,
	mc_26_3_waxed_oxidized_cut_copper_stairs_half_V_BOTTOM,
} mc_26_3_waxed_oxidized_cut_copper_stairs_half;

typedef enum {
	mc_26_3_waxed_oxidized_cut_copper_stairs_shape_V_STRAIGHT,
	mc_26_3_waxed_oxidized_cut_copper_stairs_shape_V_INNER_LEFT,
	mc_26_3_waxed_oxidized_cut_copper_stairs_shape_V_INNER_RIGHT,
	mc_26_3_waxed_oxidized_cut_copper_stairs_shape_V_OUTER_LEFT,
	mc_26_3_waxed_oxidized_cut_copper_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_waxed_oxidized_cut_copper_stairs_shape;

typedef struct {
	mc_26_3_waxed_oxidized_cut_copper_stairs_facing facing;
	mc_26_3_waxed_oxidized_cut_copper_stairs_half half;
	mc_26_3_waxed_oxidized_cut_copper_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_waxed_oxidized_cut_copper_stairs_properties;

typedef enum {
	mc_26_3_waxed_oxidized_lightning_rod_facing_V_NORTH,
	mc_26_3_waxed_oxidized_lightning_rod_facing_V_EAST,
	mc_26_3_waxed_oxidized_lightning_rod_facing_V_SOUTH,
	mc_26_3_waxed_oxidized_lightning_rod_facing_V_WEST,
	mc_26_3_waxed_oxidized_lightning_rod_facing_V_UP,
	mc_26_3_waxed_oxidized_lightning_rod_facing_V_DOWN,
} mc_26_3_waxed_oxidized_lightning_rod_facing;

typedef struct {
	mc_26_3_waxed_oxidized_lightning_rod_facing facing;
	b8 powered;
	b8 waterlogged;
} mc_26_3_waxed_oxidized_lightning_rod_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_waxed_weathered_copper_bars_properties;

typedef struct {
	b8 lit;
	b8 powered;
} mc_26_3_waxed_weathered_copper_bulb_properties;

typedef enum {
	mc_26_3_waxed_weathered_copper_chain_axis_V_X,
	mc_26_3_waxed_weathered_copper_chain_axis_V_Y,
	mc_26_3_waxed_weathered_copper_chain_axis_V_Z,
} mc_26_3_waxed_weathered_copper_chain_axis;

typedef struct {
	mc_26_3_waxed_weathered_copper_chain_axis axis;
	b8 waterlogged;
} mc_26_3_waxed_weathered_copper_chain_properties;

typedef enum {
	mc_26_3_waxed_weathered_copper_chest_type_V_SINGLE,
	mc_26_3_waxed_weathered_copper_chest_type_V_LEFT,
	mc_26_3_waxed_weathered_copper_chest_type_V_RIGHT,
} mc_26_3_waxed_weathered_copper_chest_type;

typedef enum {
	mc_26_3_waxed_weathered_copper_chest_facing_V_NORTH,
	mc_26_3_waxed_weathered_copper_chest_facing_V_SOUTH,
	mc_26_3_waxed_weathered_copper_chest_facing_V_WEST,
	mc_26_3_waxed_weathered_copper_chest_facing_V_EAST,
} mc_26_3_waxed_weathered_copper_chest_facing;

typedef struct {
	mc_26_3_waxed_weathered_copper_chest_type type;
	mc_26_3_waxed_weathered_copper_chest_facing facing;
	b8 waterlogged;
} mc_26_3_waxed_weathered_copper_chest_properties;

typedef enum {
	mc_26_3_waxed_weathered_copper_door_facing_V_NORTH,
	mc_26_3_waxed_weathered_copper_door_facing_V_SOUTH,
	mc_26_3_waxed_weathered_copper_door_facing_V_WEST,
	mc_26_3_waxed_weathered_copper_door_facing_V_EAST,
} mc_26_3_waxed_weathered_copper_door_facing;

typedef enum {
	mc_26_3_waxed_weathered_copper_door_half_V_UPPER,
	mc_26_3_waxed_weathered_copper_door_half_V_LOWER,
} mc_26_3_waxed_weathered_copper_door_half;

typedef enum {
	mc_26_3_waxed_weathered_copper_door_hinge_V_LEFT,
	mc_26_3_waxed_weathered_copper_door_hinge_V_RIGHT,
} mc_26_3_waxed_weathered_copper_door_hinge;

typedef struct {
	mc_26_3_waxed_weathered_copper_door_facing facing;
	mc_26_3_waxed_weathered_copper_door_half half;
	mc_26_3_waxed_weathered_copper_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_waxed_weathered_copper_door_properties;

typedef enum {
	mc_26_3_waxed_weathered_copper_golem_statue_copper_golem_pose_V_STANDING,
	mc_26_3_waxed_weathered_copper_golem_statue_copper_golem_pose_V_SITTING,
	mc_26_3_waxed_weathered_copper_golem_statue_copper_golem_pose_V_RUNNING,
	mc_26_3_waxed_weathered_copper_golem_statue_copper_golem_pose_V_STAR,
} mc_26_3_waxed_weathered_copper_golem_statue_copper_golem_pose;

typedef enum {
	mc_26_3_waxed_weathered_copper_golem_statue_facing_V_NORTH,
	mc_26_3_waxed_weathered_copper_golem_statue_facing_V_SOUTH,
	mc_26_3_waxed_weathered_copper_golem_statue_facing_V_WEST,
	mc_26_3_waxed_weathered_copper_golem_statue_facing_V_EAST,
} mc_26_3_waxed_weathered_copper_golem_statue_facing;

typedef struct {
	mc_26_3_waxed_weathered_copper_golem_statue_copper_golem_pose copper_golem_pose;
	mc_26_3_waxed_weathered_copper_golem_statue_facing facing;
	b8 waterlogged;
} mc_26_3_waxed_weathered_copper_golem_statue_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_waxed_weathered_copper_grate_properties;

typedef struct {
	b8 hanging;
	b8 waterlogged;
} mc_26_3_waxed_weathered_copper_lantern_properties;

typedef enum {
	mc_26_3_waxed_weathered_copper_trapdoor_facing_V_NORTH,
	mc_26_3_waxed_weathered_copper_trapdoor_facing_V_SOUTH,
	mc_26_3_waxed_weathered_copper_trapdoor_facing_V_WEST,
	mc_26_3_waxed_weathered_copper_trapdoor_facing_V_EAST,
} mc_26_3_waxed_weathered_copper_trapdoor_facing;

typedef enum {
	mc_26_3_waxed_weathered_copper_trapdoor_half_V_TOP,
	mc_26_3_waxed_weathered_copper_trapdoor_half_V_BOTTOM,
} mc_26_3_waxed_weathered_copper_trapdoor_half;

typedef struct {
	mc_26_3_waxed_weathered_copper_trapdoor_facing facing;
	mc_26_3_waxed_weathered_copper_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_waxed_weathered_copper_trapdoor_properties;

typedef enum {
	mc_26_3_waxed_weathered_cut_copper_slab_type_V_TOP,
	mc_26_3_waxed_weathered_cut_copper_slab_type_V_BOTTOM,
	mc_26_3_waxed_weathered_cut_copper_slab_type_V_DOUBLE,
} mc_26_3_waxed_weathered_cut_copper_slab_type;

typedef struct {
	mc_26_3_waxed_weathered_cut_copper_slab_type type;
	b8 waterlogged;
} mc_26_3_waxed_weathered_cut_copper_slab_properties;

typedef enum {
	mc_26_3_waxed_weathered_cut_copper_stairs_facing_V_NORTH,
	mc_26_3_waxed_weathered_cut_copper_stairs_facing_V_SOUTH,
	mc_26_3_waxed_weathered_cut_copper_stairs_facing_V_WEST,
	mc_26_3_waxed_weathered_cut_copper_stairs_facing_V_EAST,
} mc_26_3_waxed_weathered_cut_copper_stairs_facing;

typedef enum {
	mc_26_3_waxed_weathered_cut_copper_stairs_half_V_TOP,
	mc_26_3_waxed_weathered_cut_copper_stairs_half_V_BOTTOM,
} mc_26_3_waxed_weathered_cut_copper_stairs_half;

typedef enum {
	mc_26_3_waxed_weathered_cut_copper_stairs_shape_V_STRAIGHT,
	mc_26_3_waxed_weathered_cut_copper_stairs_shape_V_INNER_LEFT,
	mc_26_3_waxed_weathered_cut_copper_stairs_shape_V_INNER_RIGHT,
	mc_26_3_waxed_weathered_cut_copper_stairs_shape_V_OUTER_LEFT,
	mc_26_3_waxed_weathered_cut_copper_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_waxed_weathered_cut_copper_stairs_shape;

typedef struct {
	mc_26_3_waxed_weathered_cut_copper_stairs_facing facing;
	mc_26_3_waxed_weathered_cut_copper_stairs_half half;
	mc_26_3_waxed_weathered_cut_copper_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_waxed_weathered_cut_copper_stairs_properties;

typedef enum {
	mc_26_3_waxed_weathered_lightning_rod_facing_V_NORTH,
	mc_26_3_waxed_weathered_lightning_rod_facing_V_EAST,
	mc_26_3_waxed_weathered_lightning_rod_facing_V_SOUTH,
	mc_26_3_waxed_weathered_lightning_rod_facing_V_WEST,
	mc_26_3_waxed_weathered_lightning_rod_facing_V_UP,
	mc_26_3_waxed_weathered_lightning_rod_facing_V_DOWN,
} mc_26_3_waxed_weathered_lightning_rod_facing;

typedef struct {
	mc_26_3_waxed_weathered_lightning_rod_facing facing;
	b8 powered;
	b8 waterlogged;
} mc_26_3_waxed_weathered_lightning_rod_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_weathered_copper_bars_properties;

typedef struct {
	b8 lit;
	b8 powered;
} mc_26_3_weathered_copper_bulb_properties;

typedef enum {
	mc_26_3_weathered_copper_chain_axis_V_X,
	mc_26_3_weathered_copper_chain_axis_V_Y,
	mc_26_3_weathered_copper_chain_axis_V_Z,
} mc_26_3_weathered_copper_chain_axis;

typedef struct {
	mc_26_3_weathered_copper_chain_axis axis;
	b8 waterlogged;
} mc_26_3_weathered_copper_chain_properties;

typedef enum {
	mc_26_3_weathered_copper_chest_type_V_SINGLE,
	mc_26_3_weathered_copper_chest_type_V_LEFT,
	mc_26_3_weathered_copper_chest_type_V_RIGHT,
} mc_26_3_weathered_copper_chest_type;

typedef enum {
	mc_26_3_weathered_copper_chest_facing_V_NORTH,
	mc_26_3_weathered_copper_chest_facing_V_SOUTH,
	mc_26_3_weathered_copper_chest_facing_V_WEST,
	mc_26_3_weathered_copper_chest_facing_V_EAST,
} mc_26_3_weathered_copper_chest_facing;

typedef struct {
	mc_26_3_weathered_copper_chest_type type;
	mc_26_3_weathered_copper_chest_facing facing;
	b8 waterlogged;
} mc_26_3_weathered_copper_chest_properties;

typedef enum {
	mc_26_3_weathered_copper_door_facing_V_NORTH,
	mc_26_3_weathered_copper_door_facing_V_SOUTH,
	mc_26_3_weathered_copper_door_facing_V_WEST,
	mc_26_3_weathered_copper_door_facing_V_EAST,
} mc_26_3_weathered_copper_door_facing;

typedef enum {
	mc_26_3_weathered_copper_door_half_V_UPPER,
	mc_26_3_weathered_copper_door_half_V_LOWER,
} mc_26_3_weathered_copper_door_half;

typedef enum {
	mc_26_3_weathered_copper_door_hinge_V_LEFT,
	mc_26_3_weathered_copper_door_hinge_V_RIGHT,
} mc_26_3_weathered_copper_door_hinge;

typedef struct {
	mc_26_3_weathered_copper_door_facing facing;
	mc_26_3_weathered_copper_door_half half;
	mc_26_3_weathered_copper_door_hinge hinge;
	b8 open;
	b8 powered;
} mc_26_3_weathered_copper_door_properties;

typedef enum {
	mc_26_3_weathered_copper_golem_statue_copper_golem_pose_V_STANDING,
	mc_26_3_weathered_copper_golem_statue_copper_golem_pose_V_SITTING,
	mc_26_3_weathered_copper_golem_statue_copper_golem_pose_V_RUNNING,
	mc_26_3_weathered_copper_golem_statue_copper_golem_pose_V_STAR,
} mc_26_3_weathered_copper_golem_statue_copper_golem_pose;

typedef enum {
	mc_26_3_weathered_copper_golem_statue_facing_V_NORTH,
	mc_26_3_weathered_copper_golem_statue_facing_V_SOUTH,
	mc_26_3_weathered_copper_golem_statue_facing_V_WEST,
	mc_26_3_weathered_copper_golem_statue_facing_V_EAST,
} mc_26_3_weathered_copper_golem_statue_facing;

typedef struct {
	mc_26_3_weathered_copper_golem_statue_copper_golem_pose copper_golem_pose;
	mc_26_3_weathered_copper_golem_statue_facing facing;
	b8 waterlogged;
} mc_26_3_weathered_copper_golem_statue_properties;

typedef struct {
	b8 waterlogged;
} mc_26_3_weathered_copper_grate_properties;

typedef struct {
	b8 hanging;
	b8 waterlogged;
} mc_26_3_weathered_copper_lantern_properties;

typedef enum {
	mc_26_3_weathered_copper_trapdoor_facing_V_NORTH,
	mc_26_3_weathered_copper_trapdoor_facing_V_SOUTH,
	mc_26_3_weathered_copper_trapdoor_facing_V_WEST,
	mc_26_3_weathered_copper_trapdoor_facing_V_EAST,
} mc_26_3_weathered_copper_trapdoor_facing;

typedef enum {
	mc_26_3_weathered_copper_trapdoor_half_V_TOP,
	mc_26_3_weathered_copper_trapdoor_half_V_BOTTOM,
} mc_26_3_weathered_copper_trapdoor_half;

typedef struct {
	mc_26_3_weathered_copper_trapdoor_facing facing;
	mc_26_3_weathered_copper_trapdoor_half half;
	b8 open;
	b8 powered;
	b8 waterlogged;
} mc_26_3_weathered_copper_trapdoor_properties;

typedef enum {
	mc_26_3_weathered_cut_copper_slab_type_V_TOP,
	mc_26_3_weathered_cut_copper_slab_type_V_BOTTOM,
	mc_26_3_weathered_cut_copper_slab_type_V_DOUBLE,
} mc_26_3_weathered_cut_copper_slab_type;

typedef struct {
	mc_26_3_weathered_cut_copper_slab_type type;
	b8 waterlogged;
} mc_26_3_weathered_cut_copper_slab_properties;

typedef enum {
	mc_26_3_weathered_cut_copper_stairs_facing_V_NORTH,
	mc_26_3_weathered_cut_copper_stairs_facing_V_SOUTH,
	mc_26_3_weathered_cut_copper_stairs_facing_V_WEST,
	mc_26_3_weathered_cut_copper_stairs_facing_V_EAST,
} mc_26_3_weathered_cut_copper_stairs_facing;

typedef enum {
	mc_26_3_weathered_cut_copper_stairs_half_V_TOP,
	mc_26_3_weathered_cut_copper_stairs_half_V_BOTTOM,
} mc_26_3_weathered_cut_copper_stairs_half;

typedef enum {
	mc_26_3_weathered_cut_copper_stairs_shape_V_STRAIGHT,
	mc_26_3_weathered_cut_copper_stairs_shape_V_INNER_LEFT,
	mc_26_3_weathered_cut_copper_stairs_shape_V_INNER_RIGHT,
	mc_26_3_weathered_cut_copper_stairs_shape_V_OUTER_LEFT,
	mc_26_3_weathered_cut_copper_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_weathered_cut_copper_stairs_shape;

typedef struct {
	mc_26_3_weathered_cut_copper_stairs_facing facing;
	mc_26_3_weathered_cut_copper_stairs_half half;
	mc_26_3_weathered_cut_copper_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_weathered_cut_copper_stairs_properties;

typedef enum {
	mc_26_3_weathered_lightning_rod_facing_V_NORTH,
	mc_26_3_weathered_lightning_rod_facing_V_EAST,
	mc_26_3_weathered_lightning_rod_facing_V_SOUTH,
	mc_26_3_weathered_lightning_rod_facing_V_WEST,
	mc_26_3_weathered_lightning_rod_facing_V_UP,
	mc_26_3_weathered_lightning_rod_facing_V_DOWN,
} mc_26_3_weathered_lightning_rod_facing;

typedef struct {
	mc_26_3_weathered_lightning_rod_facing facing;
	b8 powered;
	b8 waterlogged;
} mc_26_3_weathered_lightning_rod_properties;

typedef enum {
	mc_26_3_weeping_vines_age_V_V_0,
	mc_26_3_weeping_vines_age_V_V_1,
	mc_26_3_weeping_vines_age_V_V_2,
	mc_26_3_weeping_vines_age_V_V_3,
	mc_26_3_weeping_vines_age_V_V_4,
	mc_26_3_weeping_vines_age_V_V_5,
	mc_26_3_weeping_vines_age_V_V_6,
	mc_26_3_weeping_vines_age_V_V_7,
	mc_26_3_weeping_vines_age_V_V_8,
	mc_26_3_weeping_vines_age_V_V_9,
	mc_26_3_weeping_vines_age_V_V_10,
	mc_26_3_weeping_vines_age_V_V_11,
	mc_26_3_weeping_vines_age_V_V_12,
	mc_26_3_weeping_vines_age_V_V_13,
	mc_26_3_weeping_vines_age_V_V_14,
	mc_26_3_weeping_vines_age_V_V_15,
	mc_26_3_weeping_vines_age_V_V_16,
	mc_26_3_weeping_vines_age_V_V_17,
	mc_26_3_weeping_vines_age_V_V_18,
	mc_26_3_weeping_vines_age_V_V_19,
	mc_26_3_weeping_vines_age_V_V_20,
	mc_26_3_weeping_vines_age_V_V_21,
	mc_26_3_weeping_vines_age_V_V_22,
	mc_26_3_weeping_vines_age_V_V_23,
	mc_26_3_weeping_vines_age_V_V_24,
	mc_26_3_weeping_vines_age_V_V_25,
} mc_26_3_weeping_vines_age;

typedef struct {
	mc_26_3_weeping_vines_age age;
} mc_26_3_weeping_vines_properties;

typedef enum {
	mc_26_3_wheat_age_V_V_0,
	mc_26_3_wheat_age_V_V_1,
	mc_26_3_wheat_age_V_V_2,
	mc_26_3_wheat_age_V_V_3,
	mc_26_3_wheat_age_V_V_4,
	mc_26_3_wheat_age_V_V_5,
	mc_26_3_wheat_age_V_V_6,
	mc_26_3_wheat_age_V_V_7,
} mc_26_3_wheat_age;

typedef struct {
	mc_26_3_wheat_age age;
} mc_26_3_wheat_properties;

typedef enum {
	mc_26_3_white_banner_rotation_V_V_0,
	mc_26_3_white_banner_rotation_V_V_1,
	mc_26_3_white_banner_rotation_V_V_2,
	mc_26_3_white_banner_rotation_V_V_3,
	mc_26_3_white_banner_rotation_V_V_4,
	mc_26_3_white_banner_rotation_V_V_5,
	mc_26_3_white_banner_rotation_V_V_6,
	mc_26_3_white_banner_rotation_V_V_7,
	mc_26_3_white_banner_rotation_V_V_8,
	mc_26_3_white_banner_rotation_V_V_9,
	mc_26_3_white_banner_rotation_V_V_10,
	mc_26_3_white_banner_rotation_V_V_11,
	mc_26_3_white_banner_rotation_V_V_12,
	mc_26_3_white_banner_rotation_V_V_13,
	mc_26_3_white_banner_rotation_V_V_14,
	mc_26_3_white_banner_rotation_V_V_15,
} mc_26_3_white_banner_rotation;

typedef struct {
	mc_26_3_white_banner_rotation rotation;
} mc_26_3_white_banner_properties;

typedef enum {
	mc_26_3_white_bed_facing_V_NORTH,
	mc_26_3_white_bed_facing_V_SOUTH,
	mc_26_3_white_bed_facing_V_WEST,
	mc_26_3_white_bed_facing_V_EAST,
} mc_26_3_white_bed_facing;

typedef enum {
	mc_26_3_white_bed_part_V_HEAD,
	mc_26_3_white_bed_part_V_FOOT,
} mc_26_3_white_bed_part;

typedef struct {
	mc_26_3_white_bed_facing facing;
	b8 occupied;
	mc_26_3_white_bed_part part;
} mc_26_3_white_bed_properties;

typedef enum {
	mc_26_3_white_candle_candles_V_V_1,
	mc_26_3_white_candle_candles_V_V_2,
	mc_26_3_white_candle_candles_V_V_3,
	mc_26_3_white_candle_candles_V_V_4,
} mc_26_3_white_candle_candles;

typedef struct {
	mc_26_3_white_candle_candles candles;
	b8 lit;
	b8 waterlogged;
} mc_26_3_white_candle_properties;

typedef struct {
	b8 lit;
} mc_26_3_white_candle_cake_properties;

typedef enum {
	mc_26_3_white_concrete_slab_type_V_TOP,
	mc_26_3_white_concrete_slab_type_V_BOTTOM,
	mc_26_3_white_concrete_slab_type_V_DOUBLE,
} mc_26_3_white_concrete_slab_type;

typedef struct {
	mc_26_3_white_concrete_slab_type type;
	b8 waterlogged;
} mc_26_3_white_concrete_slab_properties;

typedef enum {
	mc_26_3_white_concrete_stairs_facing_V_NORTH,
	mc_26_3_white_concrete_stairs_facing_V_SOUTH,
	mc_26_3_white_concrete_stairs_facing_V_WEST,
	mc_26_3_white_concrete_stairs_facing_V_EAST,
} mc_26_3_white_concrete_stairs_facing;

typedef enum {
	mc_26_3_white_concrete_stairs_half_V_TOP,
	mc_26_3_white_concrete_stairs_half_V_BOTTOM,
} mc_26_3_white_concrete_stairs_half;

typedef enum {
	mc_26_3_white_concrete_stairs_shape_V_STRAIGHT,
	mc_26_3_white_concrete_stairs_shape_V_INNER_LEFT,
	mc_26_3_white_concrete_stairs_shape_V_INNER_RIGHT,
	mc_26_3_white_concrete_stairs_shape_V_OUTER_LEFT,
	mc_26_3_white_concrete_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_white_concrete_stairs_shape;

typedef struct {
	mc_26_3_white_concrete_stairs_facing facing;
	mc_26_3_white_concrete_stairs_half half;
	mc_26_3_white_concrete_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_white_concrete_stairs_properties;

typedef enum {
	mc_26_3_white_glazed_terracotta_facing_V_NORTH,
	mc_26_3_white_glazed_terracotta_facing_V_SOUTH,
	mc_26_3_white_glazed_terracotta_facing_V_WEST,
	mc_26_3_white_glazed_terracotta_facing_V_EAST,
} mc_26_3_white_glazed_terracotta_facing;

typedef struct {
	mc_26_3_white_glazed_terracotta_facing facing;
} mc_26_3_white_glazed_terracotta_properties;

typedef enum {
	mc_26_3_white_shulker_box_facing_V_NORTH,
	mc_26_3_white_shulker_box_facing_V_EAST,
	mc_26_3_white_shulker_box_facing_V_SOUTH,
	mc_26_3_white_shulker_box_facing_V_WEST,
	mc_26_3_white_shulker_box_facing_V_UP,
	mc_26_3_white_shulker_box_facing_V_DOWN,
} mc_26_3_white_shulker_box_facing;

typedef struct {
	mc_26_3_white_shulker_box_facing facing;
} mc_26_3_white_shulker_box_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_white_stained_glass_pane_properties;

typedef enum {
	mc_26_3_white_wall_banner_facing_V_NORTH,
	mc_26_3_white_wall_banner_facing_V_SOUTH,
	mc_26_3_white_wall_banner_facing_V_WEST,
	mc_26_3_white_wall_banner_facing_V_EAST,
} mc_26_3_white_wall_banner_facing;

typedef struct {
	mc_26_3_white_wall_banner_facing facing;
} mc_26_3_white_wall_banner_properties;

typedef enum {
	mc_26_3_white_wool_slab_type_V_TOP,
	mc_26_3_white_wool_slab_type_V_BOTTOM,
	mc_26_3_white_wool_slab_type_V_DOUBLE,
} mc_26_3_white_wool_slab_type;

typedef struct {
	mc_26_3_white_wool_slab_type type;
	b8 waterlogged;
} mc_26_3_white_wool_slab_properties;

typedef enum {
	mc_26_3_white_wool_stairs_facing_V_NORTH,
	mc_26_3_white_wool_stairs_facing_V_SOUTH,
	mc_26_3_white_wool_stairs_facing_V_WEST,
	mc_26_3_white_wool_stairs_facing_V_EAST,
} mc_26_3_white_wool_stairs_facing;

typedef enum {
	mc_26_3_white_wool_stairs_half_V_TOP,
	mc_26_3_white_wool_stairs_half_V_BOTTOM,
} mc_26_3_white_wool_stairs_half;

typedef enum {
	mc_26_3_white_wool_stairs_shape_V_STRAIGHT,
	mc_26_3_white_wool_stairs_shape_V_INNER_LEFT,
	mc_26_3_white_wool_stairs_shape_V_INNER_RIGHT,
	mc_26_3_white_wool_stairs_shape_V_OUTER_LEFT,
	mc_26_3_white_wool_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_white_wool_stairs_shape;

typedef struct {
	mc_26_3_white_wool_stairs_facing facing;
	mc_26_3_white_wool_stairs_half half;
	mc_26_3_white_wool_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_white_wool_stairs_properties;

typedef enum {
	mc_26_3_wildflowers_facing_V_NORTH,
	mc_26_3_wildflowers_facing_V_SOUTH,
	mc_26_3_wildflowers_facing_V_WEST,
	mc_26_3_wildflowers_facing_V_EAST,
} mc_26_3_wildflowers_facing;

typedef enum {
	mc_26_3_wildflowers_flower_amount_V_V_1,
	mc_26_3_wildflowers_flower_amount_V_V_2,
	mc_26_3_wildflowers_flower_amount_V_V_3,
	mc_26_3_wildflowers_flower_amount_V_V_4,
} mc_26_3_wildflowers_flower_amount;

typedef struct {
	mc_26_3_wildflowers_facing facing;
	mc_26_3_wildflowers_flower_amount flower_amount;
} mc_26_3_wildflowers_properties;

typedef enum {
	mc_26_3_wither_skeleton_skull_rotation_V_V_0,
	mc_26_3_wither_skeleton_skull_rotation_V_V_1,
	mc_26_3_wither_skeleton_skull_rotation_V_V_2,
	mc_26_3_wither_skeleton_skull_rotation_V_V_3,
	mc_26_3_wither_skeleton_skull_rotation_V_V_4,
	mc_26_3_wither_skeleton_skull_rotation_V_V_5,
	mc_26_3_wither_skeleton_skull_rotation_V_V_6,
	mc_26_3_wither_skeleton_skull_rotation_V_V_7,
	mc_26_3_wither_skeleton_skull_rotation_V_V_8,
	mc_26_3_wither_skeleton_skull_rotation_V_V_9,
	mc_26_3_wither_skeleton_skull_rotation_V_V_10,
	mc_26_3_wither_skeleton_skull_rotation_V_V_11,
	mc_26_3_wither_skeleton_skull_rotation_V_V_12,
	mc_26_3_wither_skeleton_skull_rotation_V_V_13,
	mc_26_3_wither_skeleton_skull_rotation_V_V_14,
	mc_26_3_wither_skeleton_skull_rotation_V_V_15,
} mc_26_3_wither_skeleton_skull_rotation;

typedef struct {
	b8 powered;
	mc_26_3_wither_skeleton_skull_rotation rotation;
} mc_26_3_wither_skeleton_skull_properties;

typedef enum {
	mc_26_3_wither_skeleton_wall_skull_facing_V_NORTH,
	mc_26_3_wither_skeleton_wall_skull_facing_V_SOUTH,
	mc_26_3_wither_skeleton_wall_skull_facing_V_WEST,
	mc_26_3_wither_skeleton_wall_skull_facing_V_EAST,
} mc_26_3_wither_skeleton_wall_skull_facing;

typedef struct {
	mc_26_3_wither_skeleton_wall_skull_facing facing;
	b8 powered;
} mc_26_3_wither_skeleton_wall_skull_properties;

typedef enum {
	mc_26_3_yellow_banner_rotation_V_V_0,
	mc_26_3_yellow_banner_rotation_V_V_1,
	mc_26_3_yellow_banner_rotation_V_V_2,
	mc_26_3_yellow_banner_rotation_V_V_3,
	mc_26_3_yellow_banner_rotation_V_V_4,
	mc_26_3_yellow_banner_rotation_V_V_5,
	mc_26_3_yellow_banner_rotation_V_V_6,
	mc_26_3_yellow_banner_rotation_V_V_7,
	mc_26_3_yellow_banner_rotation_V_V_8,
	mc_26_3_yellow_banner_rotation_V_V_9,
	mc_26_3_yellow_banner_rotation_V_V_10,
	mc_26_3_yellow_banner_rotation_V_V_11,
	mc_26_3_yellow_banner_rotation_V_V_12,
	mc_26_3_yellow_banner_rotation_V_V_13,
	mc_26_3_yellow_banner_rotation_V_V_14,
	mc_26_3_yellow_banner_rotation_V_V_15,
} mc_26_3_yellow_banner_rotation;

typedef struct {
	mc_26_3_yellow_banner_rotation rotation;
} mc_26_3_yellow_banner_properties;

typedef enum {
	mc_26_3_yellow_bed_facing_V_NORTH,
	mc_26_3_yellow_bed_facing_V_SOUTH,
	mc_26_3_yellow_bed_facing_V_WEST,
	mc_26_3_yellow_bed_facing_V_EAST,
} mc_26_3_yellow_bed_facing;

typedef enum {
	mc_26_3_yellow_bed_part_V_HEAD,
	mc_26_3_yellow_bed_part_V_FOOT,
} mc_26_3_yellow_bed_part;

typedef struct {
	mc_26_3_yellow_bed_facing facing;
	b8 occupied;
	mc_26_3_yellow_bed_part part;
} mc_26_3_yellow_bed_properties;

typedef enum {
	mc_26_3_yellow_candle_candles_V_V_1,
	mc_26_3_yellow_candle_candles_V_V_2,
	mc_26_3_yellow_candle_candles_V_V_3,
	mc_26_3_yellow_candle_candles_V_V_4,
} mc_26_3_yellow_candle_candles;

typedef struct {
	mc_26_3_yellow_candle_candles candles;
	b8 lit;
	b8 waterlogged;
} mc_26_3_yellow_candle_properties;

typedef struct {
	b8 lit;
} mc_26_3_yellow_candle_cake_properties;

typedef enum {
	mc_26_3_yellow_concrete_slab_type_V_TOP,
	mc_26_3_yellow_concrete_slab_type_V_BOTTOM,
	mc_26_3_yellow_concrete_slab_type_V_DOUBLE,
} mc_26_3_yellow_concrete_slab_type;

typedef struct {
	mc_26_3_yellow_concrete_slab_type type;
	b8 waterlogged;
} mc_26_3_yellow_concrete_slab_properties;

typedef enum {
	mc_26_3_yellow_concrete_stairs_facing_V_NORTH,
	mc_26_3_yellow_concrete_stairs_facing_V_SOUTH,
	mc_26_3_yellow_concrete_stairs_facing_V_WEST,
	mc_26_3_yellow_concrete_stairs_facing_V_EAST,
} mc_26_3_yellow_concrete_stairs_facing;

typedef enum {
	mc_26_3_yellow_concrete_stairs_half_V_TOP,
	mc_26_3_yellow_concrete_stairs_half_V_BOTTOM,
} mc_26_3_yellow_concrete_stairs_half;

typedef enum {
	mc_26_3_yellow_concrete_stairs_shape_V_STRAIGHT,
	mc_26_3_yellow_concrete_stairs_shape_V_INNER_LEFT,
	mc_26_3_yellow_concrete_stairs_shape_V_INNER_RIGHT,
	mc_26_3_yellow_concrete_stairs_shape_V_OUTER_LEFT,
	mc_26_3_yellow_concrete_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_yellow_concrete_stairs_shape;

typedef struct {
	mc_26_3_yellow_concrete_stairs_facing facing;
	mc_26_3_yellow_concrete_stairs_half half;
	mc_26_3_yellow_concrete_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_yellow_concrete_stairs_properties;

typedef enum {
	mc_26_3_yellow_glazed_terracotta_facing_V_NORTH,
	mc_26_3_yellow_glazed_terracotta_facing_V_SOUTH,
	mc_26_3_yellow_glazed_terracotta_facing_V_WEST,
	mc_26_3_yellow_glazed_terracotta_facing_V_EAST,
} mc_26_3_yellow_glazed_terracotta_facing;

typedef struct {
	mc_26_3_yellow_glazed_terracotta_facing facing;
} mc_26_3_yellow_glazed_terracotta_properties;

typedef enum {
	mc_26_3_yellow_poplar_leaves_distance_V_V_1,
	mc_26_3_yellow_poplar_leaves_distance_V_V_2,
	mc_26_3_yellow_poplar_leaves_distance_V_V_3,
	mc_26_3_yellow_poplar_leaves_distance_V_V_4,
	mc_26_3_yellow_poplar_leaves_distance_V_V_5,
	mc_26_3_yellow_poplar_leaves_distance_V_V_6,
	mc_26_3_yellow_poplar_leaves_distance_V_V_7,
} mc_26_3_yellow_poplar_leaves_distance;

typedef struct {
	mc_26_3_yellow_poplar_leaves_distance distance;
	b8 persistent;
	b8 waterlogged;
} mc_26_3_yellow_poplar_leaves_properties;

typedef enum {
	mc_26_3_yellow_shulker_box_facing_V_NORTH,
	mc_26_3_yellow_shulker_box_facing_V_EAST,
	mc_26_3_yellow_shulker_box_facing_V_SOUTH,
	mc_26_3_yellow_shulker_box_facing_V_WEST,
	mc_26_3_yellow_shulker_box_facing_V_UP,
	mc_26_3_yellow_shulker_box_facing_V_DOWN,
} mc_26_3_yellow_shulker_box_facing;

typedef struct {
	mc_26_3_yellow_shulker_box_facing facing;
} mc_26_3_yellow_shulker_box_properties;

typedef struct {
	b8 east;
	b8 north;
	b8 south;
	b8 waterlogged;
	b8 west;
} mc_26_3_yellow_stained_glass_pane_properties;

typedef enum {
	mc_26_3_yellow_wall_banner_facing_V_NORTH,
	mc_26_3_yellow_wall_banner_facing_V_SOUTH,
	mc_26_3_yellow_wall_banner_facing_V_WEST,
	mc_26_3_yellow_wall_banner_facing_V_EAST,
} mc_26_3_yellow_wall_banner_facing;

typedef struct {
	mc_26_3_yellow_wall_banner_facing facing;
} mc_26_3_yellow_wall_banner_properties;

typedef enum {
	mc_26_3_yellow_wool_slab_type_V_TOP,
	mc_26_3_yellow_wool_slab_type_V_BOTTOM,
	mc_26_3_yellow_wool_slab_type_V_DOUBLE,
} mc_26_3_yellow_wool_slab_type;

typedef struct {
	mc_26_3_yellow_wool_slab_type type;
	b8 waterlogged;
} mc_26_3_yellow_wool_slab_properties;

typedef enum {
	mc_26_3_yellow_wool_stairs_facing_V_NORTH,
	mc_26_3_yellow_wool_stairs_facing_V_SOUTH,
	mc_26_3_yellow_wool_stairs_facing_V_WEST,
	mc_26_3_yellow_wool_stairs_facing_V_EAST,
} mc_26_3_yellow_wool_stairs_facing;

typedef enum {
	mc_26_3_yellow_wool_stairs_half_V_TOP,
	mc_26_3_yellow_wool_stairs_half_V_BOTTOM,
} mc_26_3_yellow_wool_stairs_half;

typedef enum {
	mc_26_3_yellow_wool_stairs_shape_V_STRAIGHT,
	mc_26_3_yellow_wool_stairs_shape_V_INNER_LEFT,
	mc_26_3_yellow_wool_stairs_shape_V_INNER_RIGHT,
	mc_26_3_yellow_wool_stairs_shape_V_OUTER_LEFT,
	mc_26_3_yellow_wool_stairs_shape_V_OUTER_RIGHT,
} mc_26_3_yellow_wool_stairs_shape;

typedef struct {
	mc_26_3_yellow_wool_stairs_facing facing;
	mc_26_3_yellow_wool_stairs_half half;
	mc_26_3_yellow_wool_stairs_shape shape;
	b8 waterlogged;
} mc_26_3_yellow_wool_stairs_properties;

typedef enum {
	mc_26_3_zombie_head_rotation_V_V_0,
	mc_26_3_zombie_head_rotation_V_V_1,
	mc_26_3_zombie_head_rotation_V_V_2,
	mc_26_3_zombie_head_rotation_V_V_3,
	mc_26_3_zombie_head_rotation_V_V_4,
	mc_26_3_zombie_head_rotation_V_V_5,
	mc_26_3_zombie_head_rotation_V_V_6,
	mc_26_3_zombie_head_rotation_V_V_7,
	mc_26_3_zombie_head_rotation_V_V_8,
	mc_26_3_zombie_head_rotation_V_V_9,
	mc_26_3_zombie_head_rotation_V_V_10,
	mc_26_3_zombie_head_rotation_V_V_11,
	mc_26_3_zombie_head_rotation_V_V_12,
	mc_26_3_zombie_head_rotation_V_V_13,
	mc_26_3_zombie_head_rotation_V_V_14,
	mc_26_3_zombie_head_rotation_V_V_15,
} mc_26_3_zombie_head_rotation;

typedef struct {
	b8 powered;
	mc_26_3_zombie_head_rotation rotation;
} mc_26_3_zombie_head_properties;

typedef enum {
	mc_26_3_zombie_wall_head_facing_V_NORTH,
	mc_26_3_zombie_wall_head_facing_V_SOUTH,
	mc_26_3_zombie_wall_head_facing_V_WEST,
	mc_26_3_zombie_wall_head_facing_V_EAST,
} mc_26_3_zombie_wall_head_facing;

typedef struct {
	mc_26_3_zombie_wall_head_facing facing;
	b8 powered;
} mc_26_3_zombie_wall_head_properties;

block_state_id mc_26_3_acacia_button_get_state(
	const mc_26_3_acacia_button_properties *properties
);

b8 mc_26_3_acacia_button_get_properties(
	block_state_id state,
	mc_26_3_acacia_button_properties *properties
);

block_state_id mc_26_3_acacia_door_get_state(
	const mc_26_3_acacia_door_properties *properties
);

b8 mc_26_3_acacia_door_get_properties(
	block_state_id state,
	mc_26_3_acacia_door_properties *properties
);

block_state_id mc_26_3_acacia_fence_get_state(
	const mc_26_3_acacia_fence_properties *properties
);

b8 mc_26_3_acacia_fence_get_properties(
	block_state_id state,
	mc_26_3_acacia_fence_properties *properties
);

block_state_id mc_26_3_acacia_fence_gate_get_state(
	const mc_26_3_acacia_fence_gate_properties *properties
);

b8 mc_26_3_acacia_fence_gate_get_properties(
	block_state_id state,
	mc_26_3_acacia_fence_gate_properties *properties
);

block_state_id mc_26_3_acacia_hanging_sign_get_state(
	const mc_26_3_acacia_hanging_sign_properties *properties
);

b8 mc_26_3_acacia_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_acacia_hanging_sign_properties *properties
);

block_state_id mc_26_3_acacia_leaves_get_state(
	const mc_26_3_acacia_leaves_properties *properties
);

b8 mc_26_3_acacia_leaves_get_properties(
	block_state_id state,
	mc_26_3_acacia_leaves_properties *properties
);

block_state_id mc_26_3_acacia_log_get_state(
	const mc_26_3_acacia_log_properties *properties
);

b8 mc_26_3_acacia_log_get_properties(
	block_state_id state,
	mc_26_3_acacia_log_properties *properties
);

block_state_id mc_26_3_acacia_pressure_plate_get_state(
	const mc_26_3_acacia_pressure_plate_properties *properties
);

b8 mc_26_3_acacia_pressure_plate_get_properties(
	block_state_id state,
	mc_26_3_acacia_pressure_plate_properties *properties
);

block_state_id mc_26_3_acacia_sapling_get_state(
	const mc_26_3_acacia_sapling_properties *properties
);

b8 mc_26_3_acacia_sapling_get_properties(
	block_state_id state,
	mc_26_3_acacia_sapling_properties *properties
);

block_state_id mc_26_3_acacia_shelf_get_state(
	const mc_26_3_acacia_shelf_properties *properties
);

b8 mc_26_3_acacia_shelf_get_properties(
	block_state_id state,
	mc_26_3_acacia_shelf_properties *properties
);

block_state_id mc_26_3_acacia_sign_get_state(
	const mc_26_3_acacia_sign_properties *properties
);

b8 mc_26_3_acacia_sign_get_properties(
	block_state_id state,
	mc_26_3_acacia_sign_properties *properties
);

block_state_id mc_26_3_acacia_slab_get_state(
	const mc_26_3_acacia_slab_properties *properties
);

b8 mc_26_3_acacia_slab_get_properties(
	block_state_id state,
	mc_26_3_acacia_slab_properties *properties
);

block_state_id mc_26_3_acacia_stairs_get_state(
	const mc_26_3_acacia_stairs_properties *properties
);

b8 mc_26_3_acacia_stairs_get_properties(
	block_state_id state,
	mc_26_3_acacia_stairs_properties *properties
);

block_state_id mc_26_3_acacia_trapdoor_get_state(
	const mc_26_3_acacia_trapdoor_properties *properties
);

b8 mc_26_3_acacia_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_acacia_trapdoor_properties *properties
);

block_state_id mc_26_3_acacia_wall_hanging_sign_get_state(
	const mc_26_3_acacia_wall_hanging_sign_properties *properties
);

b8 mc_26_3_acacia_wall_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_acacia_wall_hanging_sign_properties *properties
);

block_state_id mc_26_3_acacia_wall_sign_get_state(
	const mc_26_3_acacia_wall_sign_properties *properties
);

b8 mc_26_3_acacia_wall_sign_get_properties(
	block_state_id state,
	mc_26_3_acacia_wall_sign_properties *properties
);

block_state_id mc_26_3_acacia_wood_get_state(
	const mc_26_3_acacia_wood_properties *properties
);

b8 mc_26_3_acacia_wood_get_properties(
	block_state_id state,
	mc_26_3_acacia_wood_properties *properties
);

block_state_id mc_26_3_activator_rail_get_state(
	const mc_26_3_activator_rail_properties *properties
);

b8 mc_26_3_activator_rail_get_properties(
	block_state_id state,
	mc_26_3_activator_rail_properties *properties
);

block_state_id mc_26_3_amethyst_cluster_get_state(
	const mc_26_3_amethyst_cluster_properties *properties
);

b8 mc_26_3_amethyst_cluster_get_properties(
	block_state_id state,
	mc_26_3_amethyst_cluster_properties *properties
);

block_state_id mc_26_3_andesite_slab_get_state(
	const mc_26_3_andesite_slab_properties *properties
);

b8 mc_26_3_andesite_slab_get_properties(
	block_state_id state,
	mc_26_3_andesite_slab_properties *properties
);

block_state_id mc_26_3_andesite_stairs_get_state(
	const mc_26_3_andesite_stairs_properties *properties
);

b8 mc_26_3_andesite_stairs_get_properties(
	block_state_id state,
	mc_26_3_andesite_stairs_properties *properties
);

block_state_id mc_26_3_andesite_wall_get_state(
	const mc_26_3_andesite_wall_properties *properties
);

b8 mc_26_3_andesite_wall_get_properties(
	block_state_id state,
	mc_26_3_andesite_wall_properties *properties
);

block_state_id mc_26_3_anvil_get_state(
	const mc_26_3_anvil_properties *properties
);

b8 mc_26_3_anvil_get_properties(
	block_state_id state,
	mc_26_3_anvil_properties *properties
);

block_state_id mc_26_3_attached_melon_stem_get_state(
	const mc_26_3_attached_melon_stem_properties *properties
);

b8 mc_26_3_attached_melon_stem_get_properties(
	block_state_id state,
	mc_26_3_attached_melon_stem_properties *properties
);

block_state_id mc_26_3_attached_pumpkin_stem_get_state(
	const mc_26_3_attached_pumpkin_stem_properties *properties
);

b8 mc_26_3_attached_pumpkin_stem_get_properties(
	block_state_id state,
	mc_26_3_attached_pumpkin_stem_properties *properties
);

block_state_id mc_26_3_azalea_leaves_get_state(
	const mc_26_3_azalea_leaves_properties *properties
);

b8 mc_26_3_azalea_leaves_get_properties(
	block_state_id state,
	mc_26_3_azalea_leaves_properties *properties
);

block_state_id mc_26_3_bamboo_get_state(
	const mc_26_3_bamboo_properties *properties
);

b8 mc_26_3_bamboo_get_properties(
	block_state_id state,
	mc_26_3_bamboo_properties *properties
);

block_state_id mc_26_3_bamboo_block_get_state(
	const mc_26_3_bamboo_block_properties *properties
);

b8 mc_26_3_bamboo_block_get_properties(
	block_state_id state,
	mc_26_3_bamboo_block_properties *properties
);

block_state_id mc_26_3_bamboo_button_get_state(
	const mc_26_3_bamboo_button_properties *properties
);

b8 mc_26_3_bamboo_button_get_properties(
	block_state_id state,
	mc_26_3_bamboo_button_properties *properties
);

block_state_id mc_26_3_bamboo_door_get_state(
	const mc_26_3_bamboo_door_properties *properties
);

b8 mc_26_3_bamboo_door_get_properties(
	block_state_id state,
	mc_26_3_bamboo_door_properties *properties
);

block_state_id mc_26_3_bamboo_fence_get_state(
	const mc_26_3_bamboo_fence_properties *properties
);

b8 mc_26_3_bamboo_fence_get_properties(
	block_state_id state,
	mc_26_3_bamboo_fence_properties *properties
);

block_state_id mc_26_3_bamboo_fence_gate_get_state(
	const mc_26_3_bamboo_fence_gate_properties *properties
);

b8 mc_26_3_bamboo_fence_gate_get_properties(
	block_state_id state,
	mc_26_3_bamboo_fence_gate_properties *properties
);

block_state_id mc_26_3_bamboo_hanging_sign_get_state(
	const mc_26_3_bamboo_hanging_sign_properties *properties
);

b8 mc_26_3_bamboo_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_bamboo_hanging_sign_properties *properties
);

block_state_id mc_26_3_bamboo_mosaic_slab_get_state(
	const mc_26_3_bamboo_mosaic_slab_properties *properties
);

b8 mc_26_3_bamboo_mosaic_slab_get_properties(
	block_state_id state,
	mc_26_3_bamboo_mosaic_slab_properties *properties
);

block_state_id mc_26_3_bamboo_mosaic_stairs_get_state(
	const mc_26_3_bamboo_mosaic_stairs_properties *properties
);

b8 mc_26_3_bamboo_mosaic_stairs_get_properties(
	block_state_id state,
	mc_26_3_bamboo_mosaic_stairs_properties *properties
);

block_state_id mc_26_3_bamboo_pressure_plate_get_state(
	const mc_26_3_bamboo_pressure_plate_properties *properties
);

b8 mc_26_3_bamboo_pressure_plate_get_properties(
	block_state_id state,
	mc_26_3_bamboo_pressure_plate_properties *properties
);

block_state_id mc_26_3_bamboo_shelf_get_state(
	const mc_26_3_bamboo_shelf_properties *properties
);

b8 mc_26_3_bamboo_shelf_get_properties(
	block_state_id state,
	mc_26_3_bamboo_shelf_properties *properties
);

block_state_id mc_26_3_bamboo_sign_get_state(
	const mc_26_3_bamboo_sign_properties *properties
);

b8 mc_26_3_bamboo_sign_get_properties(
	block_state_id state,
	mc_26_3_bamboo_sign_properties *properties
);

block_state_id mc_26_3_bamboo_slab_get_state(
	const mc_26_3_bamboo_slab_properties *properties
);

b8 mc_26_3_bamboo_slab_get_properties(
	block_state_id state,
	mc_26_3_bamboo_slab_properties *properties
);

block_state_id mc_26_3_bamboo_stairs_get_state(
	const mc_26_3_bamboo_stairs_properties *properties
);

b8 mc_26_3_bamboo_stairs_get_properties(
	block_state_id state,
	mc_26_3_bamboo_stairs_properties *properties
);

block_state_id mc_26_3_bamboo_trapdoor_get_state(
	const mc_26_3_bamboo_trapdoor_properties *properties
);

b8 mc_26_3_bamboo_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_bamboo_trapdoor_properties *properties
);

block_state_id mc_26_3_bamboo_wall_hanging_sign_get_state(
	const mc_26_3_bamboo_wall_hanging_sign_properties *properties
);

b8 mc_26_3_bamboo_wall_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_bamboo_wall_hanging_sign_properties *properties
);

block_state_id mc_26_3_bamboo_wall_sign_get_state(
	const mc_26_3_bamboo_wall_sign_properties *properties
);

b8 mc_26_3_bamboo_wall_sign_get_properties(
	block_state_id state,
	mc_26_3_bamboo_wall_sign_properties *properties
);

block_state_id mc_26_3_barrel_get_state(
	const mc_26_3_barrel_properties *properties
);

b8 mc_26_3_barrel_get_properties(
	block_state_id state,
	mc_26_3_barrel_properties *properties
);

block_state_id mc_26_3_barrier_get_state(
	const mc_26_3_barrier_properties *properties
);

b8 mc_26_3_barrier_get_properties(
	block_state_id state,
	mc_26_3_barrier_properties *properties
);

block_state_id mc_26_3_basalt_get_state(
	const mc_26_3_basalt_properties *properties
);

b8 mc_26_3_basalt_get_properties(
	block_state_id state,
	mc_26_3_basalt_properties *properties
);

block_state_id mc_26_3_bee_nest_get_state(
	const mc_26_3_bee_nest_properties *properties
);

b8 mc_26_3_bee_nest_get_properties(
	block_state_id state,
	mc_26_3_bee_nest_properties *properties
);

block_state_id mc_26_3_beehive_get_state(
	const mc_26_3_beehive_properties *properties
);

b8 mc_26_3_beehive_get_properties(
	block_state_id state,
	mc_26_3_beehive_properties *properties
);

block_state_id mc_26_3_beetroots_get_state(
	const mc_26_3_beetroots_properties *properties
);

b8 mc_26_3_beetroots_get_properties(
	block_state_id state,
	mc_26_3_beetroots_properties *properties
);

block_state_id mc_26_3_bell_get_state(
	const mc_26_3_bell_properties *properties
);

b8 mc_26_3_bell_get_properties(
	block_state_id state,
	mc_26_3_bell_properties *properties
);

block_state_id mc_26_3_big_dripleaf_get_state(
	const mc_26_3_big_dripleaf_properties *properties
);

b8 mc_26_3_big_dripleaf_get_properties(
	block_state_id state,
	mc_26_3_big_dripleaf_properties *properties
);

block_state_id mc_26_3_big_dripleaf_stem_get_state(
	const mc_26_3_big_dripleaf_stem_properties *properties
);

b8 mc_26_3_big_dripleaf_stem_get_properties(
	block_state_id state,
	mc_26_3_big_dripleaf_stem_properties *properties
);

block_state_id mc_26_3_birch_button_get_state(
	const mc_26_3_birch_button_properties *properties
);

b8 mc_26_3_birch_button_get_properties(
	block_state_id state,
	mc_26_3_birch_button_properties *properties
);

block_state_id mc_26_3_birch_door_get_state(
	const mc_26_3_birch_door_properties *properties
);

b8 mc_26_3_birch_door_get_properties(
	block_state_id state,
	mc_26_3_birch_door_properties *properties
);

block_state_id mc_26_3_birch_fence_get_state(
	const mc_26_3_birch_fence_properties *properties
);

b8 mc_26_3_birch_fence_get_properties(
	block_state_id state,
	mc_26_3_birch_fence_properties *properties
);

block_state_id mc_26_3_birch_fence_gate_get_state(
	const mc_26_3_birch_fence_gate_properties *properties
);

b8 mc_26_3_birch_fence_gate_get_properties(
	block_state_id state,
	mc_26_3_birch_fence_gate_properties *properties
);

block_state_id mc_26_3_birch_hanging_sign_get_state(
	const mc_26_3_birch_hanging_sign_properties *properties
);

b8 mc_26_3_birch_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_birch_hanging_sign_properties *properties
);

block_state_id mc_26_3_birch_leaves_get_state(
	const mc_26_3_birch_leaves_properties *properties
);

b8 mc_26_3_birch_leaves_get_properties(
	block_state_id state,
	mc_26_3_birch_leaves_properties *properties
);

block_state_id mc_26_3_birch_log_get_state(
	const mc_26_3_birch_log_properties *properties
);

b8 mc_26_3_birch_log_get_properties(
	block_state_id state,
	mc_26_3_birch_log_properties *properties
);

block_state_id mc_26_3_birch_pressure_plate_get_state(
	const mc_26_3_birch_pressure_plate_properties *properties
);

b8 mc_26_3_birch_pressure_plate_get_properties(
	block_state_id state,
	mc_26_3_birch_pressure_plate_properties *properties
);

block_state_id mc_26_3_birch_sapling_get_state(
	const mc_26_3_birch_sapling_properties *properties
);

b8 mc_26_3_birch_sapling_get_properties(
	block_state_id state,
	mc_26_3_birch_sapling_properties *properties
);

block_state_id mc_26_3_birch_shelf_get_state(
	const mc_26_3_birch_shelf_properties *properties
);

b8 mc_26_3_birch_shelf_get_properties(
	block_state_id state,
	mc_26_3_birch_shelf_properties *properties
);

block_state_id mc_26_3_birch_sign_get_state(
	const mc_26_3_birch_sign_properties *properties
);

b8 mc_26_3_birch_sign_get_properties(
	block_state_id state,
	mc_26_3_birch_sign_properties *properties
);

block_state_id mc_26_3_birch_slab_get_state(
	const mc_26_3_birch_slab_properties *properties
);

b8 mc_26_3_birch_slab_get_properties(
	block_state_id state,
	mc_26_3_birch_slab_properties *properties
);

block_state_id mc_26_3_birch_stairs_get_state(
	const mc_26_3_birch_stairs_properties *properties
);

b8 mc_26_3_birch_stairs_get_properties(
	block_state_id state,
	mc_26_3_birch_stairs_properties *properties
);

block_state_id mc_26_3_birch_trapdoor_get_state(
	const mc_26_3_birch_trapdoor_properties *properties
);

b8 mc_26_3_birch_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_birch_trapdoor_properties *properties
);

block_state_id mc_26_3_birch_wall_hanging_sign_get_state(
	const mc_26_3_birch_wall_hanging_sign_properties *properties
);

b8 mc_26_3_birch_wall_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_birch_wall_hanging_sign_properties *properties
);

block_state_id mc_26_3_birch_wall_sign_get_state(
	const mc_26_3_birch_wall_sign_properties *properties
);

b8 mc_26_3_birch_wall_sign_get_properties(
	block_state_id state,
	mc_26_3_birch_wall_sign_properties *properties
);

block_state_id mc_26_3_birch_wood_get_state(
	const mc_26_3_birch_wood_properties *properties
);

b8 mc_26_3_birch_wood_get_properties(
	block_state_id state,
	mc_26_3_birch_wood_properties *properties
);

block_state_id mc_26_3_black_banner_get_state(
	const mc_26_3_black_banner_properties *properties
);

b8 mc_26_3_black_banner_get_properties(
	block_state_id state,
	mc_26_3_black_banner_properties *properties
);

block_state_id mc_26_3_black_bed_get_state(
	const mc_26_3_black_bed_properties *properties
);

b8 mc_26_3_black_bed_get_properties(
	block_state_id state,
	mc_26_3_black_bed_properties *properties
);

block_state_id mc_26_3_black_candle_get_state(
	const mc_26_3_black_candle_properties *properties
);

b8 mc_26_3_black_candle_get_properties(
	block_state_id state,
	mc_26_3_black_candle_properties *properties
);

block_state_id mc_26_3_black_candle_cake_get_state(
	const mc_26_3_black_candle_cake_properties *properties
);

b8 mc_26_3_black_candle_cake_get_properties(
	block_state_id state,
	mc_26_3_black_candle_cake_properties *properties
);

block_state_id mc_26_3_black_concrete_slab_get_state(
	const mc_26_3_black_concrete_slab_properties *properties
);

b8 mc_26_3_black_concrete_slab_get_properties(
	block_state_id state,
	mc_26_3_black_concrete_slab_properties *properties
);

block_state_id mc_26_3_black_concrete_stairs_get_state(
	const mc_26_3_black_concrete_stairs_properties *properties
);

b8 mc_26_3_black_concrete_stairs_get_properties(
	block_state_id state,
	mc_26_3_black_concrete_stairs_properties *properties
);

block_state_id mc_26_3_black_glazed_terracotta_get_state(
	const mc_26_3_black_glazed_terracotta_properties *properties
);

b8 mc_26_3_black_glazed_terracotta_get_properties(
	block_state_id state,
	mc_26_3_black_glazed_terracotta_properties *properties
);

block_state_id mc_26_3_black_shulker_box_get_state(
	const mc_26_3_black_shulker_box_properties *properties
);

b8 mc_26_3_black_shulker_box_get_properties(
	block_state_id state,
	mc_26_3_black_shulker_box_properties *properties
);

block_state_id mc_26_3_black_stained_glass_pane_get_state(
	const mc_26_3_black_stained_glass_pane_properties *properties
);

b8 mc_26_3_black_stained_glass_pane_get_properties(
	block_state_id state,
	mc_26_3_black_stained_glass_pane_properties *properties
);

block_state_id mc_26_3_black_wall_banner_get_state(
	const mc_26_3_black_wall_banner_properties *properties
);

b8 mc_26_3_black_wall_banner_get_properties(
	block_state_id state,
	mc_26_3_black_wall_banner_properties *properties
);

block_state_id mc_26_3_black_wool_slab_get_state(
	const mc_26_3_black_wool_slab_properties *properties
);

b8 mc_26_3_black_wool_slab_get_properties(
	block_state_id state,
	mc_26_3_black_wool_slab_properties *properties
);

block_state_id mc_26_3_black_wool_stairs_get_state(
	const mc_26_3_black_wool_stairs_properties *properties
);

b8 mc_26_3_black_wool_stairs_get_properties(
	block_state_id state,
	mc_26_3_black_wool_stairs_properties *properties
);

block_state_id mc_26_3_blackstone_slab_get_state(
	const mc_26_3_blackstone_slab_properties *properties
);

b8 mc_26_3_blackstone_slab_get_properties(
	block_state_id state,
	mc_26_3_blackstone_slab_properties *properties
);

block_state_id mc_26_3_blackstone_stairs_get_state(
	const mc_26_3_blackstone_stairs_properties *properties
);

b8 mc_26_3_blackstone_stairs_get_properties(
	block_state_id state,
	mc_26_3_blackstone_stairs_properties *properties
);

block_state_id mc_26_3_blackstone_wall_get_state(
	const mc_26_3_blackstone_wall_properties *properties
);

b8 mc_26_3_blackstone_wall_get_properties(
	block_state_id state,
	mc_26_3_blackstone_wall_properties *properties
);

block_state_id mc_26_3_blast_furnace_get_state(
	const mc_26_3_blast_furnace_properties *properties
);

b8 mc_26_3_blast_furnace_get_properties(
	block_state_id state,
	mc_26_3_blast_furnace_properties *properties
);

block_state_id mc_26_3_blue_banner_get_state(
	const mc_26_3_blue_banner_properties *properties
);

b8 mc_26_3_blue_banner_get_properties(
	block_state_id state,
	mc_26_3_blue_banner_properties *properties
);

block_state_id mc_26_3_blue_bed_get_state(
	const mc_26_3_blue_bed_properties *properties
);

b8 mc_26_3_blue_bed_get_properties(
	block_state_id state,
	mc_26_3_blue_bed_properties *properties
);

block_state_id mc_26_3_blue_candle_get_state(
	const mc_26_3_blue_candle_properties *properties
);

b8 mc_26_3_blue_candle_get_properties(
	block_state_id state,
	mc_26_3_blue_candle_properties *properties
);

block_state_id mc_26_3_blue_candle_cake_get_state(
	const mc_26_3_blue_candle_cake_properties *properties
);

b8 mc_26_3_blue_candle_cake_get_properties(
	block_state_id state,
	mc_26_3_blue_candle_cake_properties *properties
);

block_state_id mc_26_3_blue_concrete_slab_get_state(
	const mc_26_3_blue_concrete_slab_properties *properties
);

b8 mc_26_3_blue_concrete_slab_get_properties(
	block_state_id state,
	mc_26_3_blue_concrete_slab_properties *properties
);

block_state_id mc_26_3_blue_concrete_stairs_get_state(
	const mc_26_3_blue_concrete_stairs_properties *properties
);

b8 mc_26_3_blue_concrete_stairs_get_properties(
	block_state_id state,
	mc_26_3_blue_concrete_stairs_properties *properties
);

block_state_id mc_26_3_blue_glazed_terracotta_get_state(
	const mc_26_3_blue_glazed_terracotta_properties *properties
);

b8 mc_26_3_blue_glazed_terracotta_get_properties(
	block_state_id state,
	mc_26_3_blue_glazed_terracotta_properties *properties
);

block_state_id mc_26_3_blue_shulker_box_get_state(
	const mc_26_3_blue_shulker_box_properties *properties
);

b8 mc_26_3_blue_shulker_box_get_properties(
	block_state_id state,
	mc_26_3_blue_shulker_box_properties *properties
);

block_state_id mc_26_3_blue_stained_glass_pane_get_state(
	const mc_26_3_blue_stained_glass_pane_properties *properties
);

b8 mc_26_3_blue_stained_glass_pane_get_properties(
	block_state_id state,
	mc_26_3_blue_stained_glass_pane_properties *properties
);

block_state_id mc_26_3_blue_wall_banner_get_state(
	const mc_26_3_blue_wall_banner_properties *properties
);

b8 mc_26_3_blue_wall_banner_get_properties(
	block_state_id state,
	mc_26_3_blue_wall_banner_properties *properties
);

block_state_id mc_26_3_blue_wool_slab_get_state(
	const mc_26_3_blue_wool_slab_properties *properties
);

b8 mc_26_3_blue_wool_slab_get_properties(
	block_state_id state,
	mc_26_3_blue_wool_slab_properties *properties
);

block_state_id mc_26_3_blue_wool_stairs_get_state(
	const mc_26_3_blue_wool_stairs_properties *properties
);

b8 mc_26_3_blue_wool_stairs_get_properties(
	block_state_id state,
	mc_26_3_blue_wool_stairs_properties *properties
);

block_state_id mc_26_3_bone_block_get_state(
	const mc_26_3_bone_block_properties *properties
);

b8 mc_26_3_bone_block_get_properties(
	block_state_id state,
	mc_26_3_bone_block_properties *properties
);

block_state_id mc_26_3_brain_coral_get_state(
	const mc_26_3_brain_coral_properties *properties
);

b8 mc_26_3_brain_coral_get_properties(
	block_state_id state,
	mc_26_3_brain_coral_properties *properties
);

block_state_id mc_26_3_brain_coral_fan_get_state(
	const mc_26_3_brain_coral_fan_properties *properties
);

b8 mc_26_3_brain_coral_fan_get_properties(
	block_state_id state,
	mc_26_3_brain_coral_fan_properties *properties
);

block_state_id mc_26_3_brain_coral_wall_fan_get_state(
	const mc_26_3_brain_coral_wall_fan_properties *properties
);

b8 mc_26_3_brain_coral_wall_fan_get_properties(
	block_state_id state,
	mc_26_3_brain_coral_wall_fan_properties *properties
);

block_state_id mc_26_3_brewing_stand_get_state(
	const mc_26_3_brewing_stand_properties *properties
);

b8 mc_26_3_brewing_stand_get_properties(
	block_state_id state,
	mc_26_3_brewing_stand_properties *properties
);

block_state_id mc_26_3_brick_slab_get_state(
	const mc_26_3_brick_slab_properties *properties
);

b8 mc_26_3_brick_slab_get_properties(
	block_state_id state,
	mc_26_3_brick_slab_properties *properties
);

block_state_id mc_26_3_brick_stairs_get_state(
	const mc_26_3_brick_stairs_properties *properties
);

b8 mc_26_3_brick_stairs_get_properties(
	block_state_id state,
	mc_26_3_brick_stairs_properties *properties
);

block_state_id mc_26_3_brick_wall_get_state(
	const mc_26_3_brick_wall_properties *properties
);

b8 mc_26_3_brick_wall_get_properties(
	block_state_id state,
	mc_26_3_brick_wall_properties *properties
);

block_state_id mc_26_3_brown_banner_get_state(
	const mc_26_3_brown_banner_properties *properties
);

b8 mc_26_3_brown_banner_get_properties(
	block_state_id state,
	mc_26_3_brown_banner_properties *properties
);

block_state_id mc_26_3_brown_bed_get_state(
	const mc_26_3_brown_bed_properties *properties
);

b8 mc_26_3_brown_bed_get_properties(
	block_state_id state,
	mc_26_3_brown_bed_properties *properties
);

block_state_id mc_26_3_brown_candle_get_state(
	const mc_26_3_brown_candle_properties *properties
);

b8 mc_26_3_brown_candle_get_properties(
	block_state_id state,
	mc_26_3_brown_candle_properties *properties
);

block_state_id mc_26_3_brown_candle_cake_get_state(
	const mc_26_3_brown_candle_cake_properties *properties
);

b8 mc_26_3_brown_candle_cake_get_properties(
	block_state_id state,
	mc_26_3_brown_candle_cake_properties *properties
);

block_state_id mc_26_3_brown_concrete_slab_get_state(
	const mc_26_3_brown_concrete_slab_properties *properties
);

b8 mc_26_3_brown_concrete_slab_get_properties(
	block_state_id state,
	mc_26_3_brown_concrete_slab_properties *properties
);

block_state_id mc_26_3_brown_concrete_stairs_get_state(
	const mc_26_3_brown_concrete_stairs_properties *properties
);

b8 mc_26_3_brown_concrete_stairs_get_properties(
	block_state_id state,
	mc_26_3_brown_concrete_stairs_properties *properties
);

block_state_id mc_26_3_brown_glazed_terracotta_get_state(
	const mc_26_3_brown_glazed_terracotta_properties *properties
);

b8 mc_26_3_brown_glazed_terracotta_get_properties(
	block_state_id state,
	mc_26_3_brown_glazed_terracotta_properties *properties
);

block_state_id mc_26_3_brown_mushroom_block_get_state(
	const mc_26_3_brown_mushroom_block_properties *properties
);

b8 mc_26_3_brown_mushroom_block_get_properties(
	block_state_id state,
	mc_26_3_brown_mushroom_block_properties *properties
);

block_state_id mc_26_3_brown_shulker_box_get_state(
	const mc_26_3_brown_shulker_box_properties *properties
);

b8 mc_26_3_brown_shulker_box_get_properties(
	block_state_id state,
	mc_26_3_brown_shulker_box_properties *properties
);

block_state_id mc_26_3_brown_stained_glass_pane_get_state(
	const mc_26_3_brown_stained_glass_pane_properties *properties
);

b8 mc_26_3_brown_stained_glass_pane_get_properties(
	block_state_id state,
	mc_26_3_brown_stained_glass_pane_properties *properties
);

block_state_id mc_26_3_brown_wall_banner_get_state(
	const mc_26_3_brown_wall_banner_properties *properties
);

b8 mc_26_3_brown_wall_banner_get_properties(
	block_state_id state,
	mc_26_3_brown_wall_banner_properties *properties
);

block_state_id mc_26_3_brown_wool_slab_get_state(
	const mc_26_3_brown_wool_slab_properties *properties
);

b8 mc_26_3_brown_wool_slab_get_properties(
	block_state_id state,
	mc_26_3_brown_wool_slab_properties *properties
);

block_state_id mc_26_3_brown_wool_stairs_get_state(
	const mc_26_3_brown_wool_stairs_properties *properties
);

b8 mc_26_3_brown_wool_stairs_get_properties(
	block_state_id state,
	mc_26_3_brown_wool_stairs_properties *properties
);

block_state_id mc_26_3_bubble_column_get_state(
	const mc_26_3_bubble_column_properties *properties
);

b8 mc_26_3_bubble_column_get_properties(
	block_state_id state,
	mc_26_3_bubble_column_properties *properties
);

block_state_id mc_26_3_bubble_coral_get_state(
	const mc_26_3_bubble_coral_properties *properties
);

b8 mc_26_3_bubble_coral_get_properties(
	block_state_id state,
	mc_26_3_bubble_coral_properties *properties
);

block_state_id mc_26_3_bubble_coral_fan_get_state(
	const mc_26_3_bubble_coral_fan_properties *properties
);

b8 mc_26_3_bubble_coral_fan_get_properties(
	block_state_id state,
	mc_26_3_bubble_coral_fan_properties *properties
);

block_state_id mc_26_3_bubble_coral_wall_fan_get_state(
	const mc_26_3_bubble_coral_wall_fan_properties *properties
);

b8 mc_26_3_bubble_coral_wall_fan_get_properties(
	block_state_id state,
	mc_26_3_bubble_coral_wall_fan_properties *properties
);

block_state_id mc_26_3_cactus_get_state(
	const mc_26_3_cactus_properties *properties
);

b8 mc_26_3_cactus_get_properties(
	block_state_id state,
	mc_26_3_cactus_properties *properties
);

block_state_id mc_26_3_cake_get_state(
	const mc_26_3_cake_properties *properties
);

b8 mc_26_3_cake_get_properties(
	block_state_id state,
	mc_26_3_cake_properties *properties
);

block_state_id mc_26_3_calibrated_sculk_sensor_get_state(
	const mc_26_3_calibrated_sculk_sensor_properties *properties
);

b8 mc_26_3_calibrated_sculk_sensor_get_properties(
	block_state_id state,
	mc_26_3_calibrated_sculk_sensor_properties *properties
);

block_state_id mc_26_3_campfire_get_state(
	const mc_26_3_campfire_properties *properties
);

b8 mc_26_3_campfire_get_properties(
	block_state_id state,
	mc_26_3_campfire_properties *properties
);

block_state_id mc_26_3_candle_get_state(
	const mc_26_3_candle_properties *properties
);

b8 mc_26_3_candle_get_properties(
	block_state_id state,
	mc_26_3_candle_properties *properties
);

block_state_id mc_26_3_candle_cake_get_state(
	const mc_26_3_candle_cake_properties *properties
);

b8 mc_26_3_candle_cake_get_properties(
	block_state_id state,
	mc_26_3_candle_cake_properties *properties
);

block_state_id mc_26_3_carrots_get_state(
	const mc_26_3_carrots_properties *properties
);

b8 mc_26_3_carrots_get_properties(
	block_state_id state,
	mc_26_3_carrots_properties *properties
);

block_state_id mc_26_3_carved_pumpkin_get_state(
	const mc_26_3_carved_pumpkin_properties *properties
);

b8 mc_26_3_carved_pumpkin_get_properties(
	block_state_id state,
	mc_26_3_carved_pumpkin_properties *properties
);

block_state_id mc_26_3_cave_vines_get_state(
	const mc_26_3_cave_vines_properties *properties
);

b8 mc_26_3_cave_vines_get_properties(
	block_state_id state,
	mc_26_3_cave_vines_properties *properties
);

block_state_id mc_26_3_cave_vines_plant_get_state(
	const mc_26_3_cave_vines_plant_properties *properties
);

b8 mc_26_3_cave_vines_plant_get_properties(
	block_state_id state,
	mc_26_3_cave_vines_plant_properties *properties
);

block_state_id mc_26_3_chain_command_block_get_state(
	const mc_26_3_chain_command_block_properties *properties
);

b8 mc_26_3_chain_command_block_get_properties(
	block_state_id state,
	mc_26_3_chain_command_block_properties *properties
);

block_state_id mc_26_3_cherry_button_get_state(
	const mc_26_3_cherry_button_properties *properties
);

b8 mc_26_3_cherry_button_get_properties(
	block_state_id state,
	mc_26_3_cherry_button_properties *properties
);

block_state_id mc_26_3_cherry_door_get_state(
	const mc_26_3_cherry_door_properties *properties
);

b8 mc_26_3_cherry_door_get_properties(
	block_state_id state,
	mc_26_3_cherry_door_properties *properties
);

block_state_id mc_26_3_cherry_fence_get_state(
	const mc_26_3_cherry_fence_properties *properties
);

b8 mc_26_3_cherry_fence_get_properties(
	block_state_id state,
	mc_26_3_cherry_fence_properties *properties
);

block_state_id mc_26_3_cherry_fence_gate_get_state(
	const mc_26_3_cherry_fence_gate_properties *properties
);

b8 mc_26_3_cherry_fence_gate_get_properties(
	block_state_id state,
	mc_26_3_cherry_fence_gate_properties *properties
);

block_state_id mc_26_3_cherry_hanging_sign_get_state(
	const mc_26_3_cherry_hanging_sign_properties *properties
);

b8 mc_26_3_cherry_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_cherry_hanging_sign_properties *properties
);

block_state_id mc_26_3_cherry_leaves_get_state(
	const mc_26_3_cherry_leaves_properties *properties
);

b8 mc_26_3_cherry_leaves_get_properties(
	block_state_id state,
	mc_26_3_cherry_leaves_properties *properties
);

block_state_id mc_26_3_cherry_log_get_state(
	const mc_26_3_cherry_log_properties *properties
);

b8 mc_26_3_cherry_log_get_properties(
	block_state_id state,
	mc_26_3_cherry_log_properties *properties
);

block_state_id mc_26_3_cherry_pressure_plate_get_state(
	const mc_26_3_cherry_pressure_plate_properties *properties
);

b8 mc_26_3_cherry_pressure_plate_get_properties(
	block_state_id state,
	mc_26_3_cherry_pressure_plate_properties *properties
);

block_state_id mc_26_3_cherry_sapling_get_state(
	const mc_26_3_cherry_sapling_properties *properties
);

b8 mc_26_3_cherry_sapling_get_properties(
	block_state_id state,
	mc_26_3_cherry_sapling_properties *properties
);

block_state_id mc_26_3_cherry_shelf_get_state(
	const mc_26_3_cherry_shelf_properties *properties
);

b8 mc_26_3_cherry_shelf_get_properties(
	block_state_id state,
	mc_26_3_cherry_shelf_properties *properties
);

block_state_id mc_26_3_cherry_sign_get_state(
	const mc_26_3_cherry_sign_properties *properties
);

b8 mc_26_3_cherry_sign_get_properties(
	block_state_id state,
	mc_26_3_cherry_sign_properties *properties
);

block_state_id mc_26_3_cherry_slab_get_state(
	const mc_26_3_cherry_slab_properties *properties
);

b8 mc_26_3_cherry_slab_get_properties(
	block_state_id state,
	mc_26_3_cherry_slab_properties *properties
);

block_state_id mc_26_3_cherry_stairs_get_state(
	const mc_26_3_cherry_stairs_properties *properties
);

b8 mc_26_3_cherry_stairs_get_properties(
	block_state_id state,
	mc_26_3_cherry_stairs_properties *properties
);

block_state_id mc_26_3_cherry_trapdoor_get_state(
	const mc_26_3_cherry_trapdoor_properties *properties
);

b8 mc_26_3_cherry_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_cherry_trapdoor_properties *properties
);

block_state_id mc_26_3_cherry_wall_hanging_sign_get_state(
	const mc_26_3_cherry_wall_hanging_sign_properties *properties
);

b8 mc_26_3_cherry_wall_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_cherry_wall_hanging_sign_properties *properties
);

block_state_id mc_26_3_cherry_wall_sign_get_state(
	const mc_26_3_cherry_wall_sign_properties *properties
);

b8 mc_26_3_cherry_wall_sign_get_properties(
	block_state_id state,
	mc_26_3_cherry_wall_sign_properties *properties
);

block_state_id mc_26_3_cherry_wood_get_state(
	const mc_26_3_cherry_wood_properties *properties
);

b8 mc_26_3_cherry_wood_get_properties(
	block_state_id state,
	mc_26_3_cherry_wood_properties *properties
);

block_state_id mc_26_3_chest_get_state(
	const mc_26_3_chest_properties *properties
);

b8 mc_26_3_chest_get_properties(
	block_state_id state,
	mc_26_3_chest_properties *properties
);

block_state_id mc_26_3_chipped_anvil_get_state(
	const mc_26_3_chipped_anvil_properties *properties
);

b8 mc_26_3_chipped_anvil_get_properties(
	block_state_id state,
	mc_26_3_chipped_anvil_properties *properties
);

block_state_id mc_26_3_chiseled_bookshelf_get_state(
	const mc_26_3_chiseled_bookshelf_properties *properties
);

b8 mc_26_3_chiseled_bookshelf_get_properties(
	block_state_id state,
	mc_26_3_chiseled_bookshelf_properties *properties
);

block_state_id mc_26_3_chorus_flower_get_state(
	const mc_26_3_chorus_flower_properties *properties
);

b8 mc_26_3_chorus_flower_get_properties(
	block_state_id state,
	mc_26_3_chorus_flower_properties *properties
);

block_state_id mc_26_3_chorus_plant_get_state(
	const mc_26_3_chorus_plant_properties *properties
);

b8 mc_26_3_chorus_plant_get_properties(
	block_state_id state,
	mc_26_3_chorus_plant_properties *properties
);

block_state_id mc_26_3_cinnabar_brick_slab_get_state(
	const mc_26_3_cinnabar_brick_slab_properties *properties
);

b8 mc_26_3_cinnabar_brick_slab_get_properties(
	block_state_id state,
	mc_26_3_cinnabar_brick_slab_properties *properties
);

block_state_id mc_26_3_cinnabar_brick_stairs_get_state(
	const mc_26_3_cinnabar_brick_stairs_properties *properties
);

b8 mc_26_3_cinnabar_brick_stairs_get_properties(
	block_state_id state,
	mc_26_3_cinnabar_brick_stairs_properties *properties
);

block_state_id mc_26_3_cinnabar_brick_wall_get_state(
	const mc_26_3_cinnabar_brick_wall_properties *properties
);

b8 mc_26_3_cinnabar_brick_wall_get_properties(
	block_state_id state,
	mc_26_3_cinnabar_brick_wall_properties *properties
);

block_state_id mc_26_3_cinnabar_slab_get_state(
	const mc_26_3_cinnabar_slab_properties *properties
);

b8 mc_26_3_cinnabar_slab_get_properties(
	block_state_id state,
	mc_26_3_cinnabar_slab_properties *properties
);

block_state_id mc_26_3_cinnabar_stairs_get_state(
	const mc_26_3_cinnabar_stairs_properties *properties
);

b8 mc_26_3_cinnabar_stairs_get_properties(
	block_state_id state,
	mc_26_3_cinnabar_stairs_properties *properties
);

block_state_id mc_26_3_cinnabar_wall_get_state(
	const mc_26_3_cinnabar_wall_properties *properties
);

b8 mc_26_3_cinnabar_wall_get_properties(
	block_state_id state,
	mc_26_3_cinnabar_wall_properties *properties
);

block_state_id mc_26_3_cobbled_deepslate_slab_get_state(
	const mc_26_3_cobbled_deepslate_slab_properties *properties
);

b8 mc_26_3_cobbled_deepslate_slab_get_properties(
	block_state_id state,
	mc_26_3_cobbled_deepslate_slab_properties *properties
);

block_state_id mc_26_3_cobbled_deepslate_stairs_get_state(
	const mc_26_3_cobbled_deepslate_stairs_properties *properties
);

b8 mc_26_3_cobbled_deepslate_stairs_get_properties(
	block_state_id state,
	mc_26_3_cobbled_deepslate_stairs_properties *properties
);

block_state_id mc_26_3_cobbled_deepslate_wall_get_state(
	const mc_26_3_cobbled_deepslate_wall_properties *properties
);

b8 mc_26_3_cobbled_deepslate_wall_get_properties(
	block_state_id state,
	mc_26_3_cobbled_deepslate_wall_properties *properties
);

block_state_id mc_26_3_cobblestone_slab_get_state(
	const mc_26_3_cobblestone_slab_properties *properties
);

b8 mc_26_3_cobblestone_slab_get_properties(
	block_state_id state,
	mc_26_3_cobblestone_slab_properties *properties
);

block_state_id mc_26_3_cobblestone_stairs_get_state(
	const mc_26_3_cobblestone_stairs_properties *properties
);

b8 mc_26_3_cobblestone_stairs_get_properties(
	block_state_id state,
	mc_26_3_cobblestone_stairs_properties *properties
);

block_state_id mc_26_3_cobblestone_wall_get_state(
	const mc_26_3_cobblestone_wall_properties *properties
);

b8 mc_26_3_cobblestone_wall_get_properties(
	block_state_id state,
	mc_26_3_cobblestone_wall_properties *properties
);

block_state_id mc_26_3_cocoa_get_state(
	const mc_26_3_cocoa_properties *properties
);

b8 mc_26_3_cocoa_get_properties(
	block_state_id state,
	mc_26_3_cocoa_properties *properties
);

block_state_id mc_26_3_command_block_get_state(
	const mc_26_3_command_block_properties *properties
);

b8 mc_26_3_command_block_get_properties(
	block_state_id state,
	mc_26_3_command_block_properties *properties
);

block_state_id mc_26_3_comparator_get_state(
	const mc_26_3_comparator_properties *properties
);

b8 mc_26_3_comparator_get_properties(
	block_state_id state,
	mc_26_3_comparator_properties *properties
);

block_state_id mc_26_3_composter_get_state(
	const mc_26_3_composter_properties *properties
);

b8 mc_26_3_composter_get_properties(
	block_state_id state,
	mc_26_3_composter_properties *properties
);

block_state_id mc_26_3_conduit_get_state(
	const mc_26_3_conduit_properties *properties
);

b8 mc_26_3_conduit_get_properties(
	block_state_id state,
	mc_26_3_conduit_properties *properties
);

block_state_id mc_26_3_copper_bars_get_state(
	const mc_26_3_copper_bars_properties *properties
);

b8 mc_26_3_copper_bars_get_properties(
	block_state_id state,
	mc_26_3_copper_bars_properties *properties
);

block_state_id mc_26_3_copper_bulb_get_state(
	const mc_26_3_copper_bulb_properties *properties
);

b8 mc_26_3_copper_bulb_get_properties(
	block_state_id state,
	mc_26_3_copper_bulb_properties *properties
);

block_state_id mc_26_3_copper_chain_get_state(
	const mc_26_3_copper_chain_properties *properties
);

b8 mc_26_3_copper_chain_get_properties(
	block_state_id state,
	mc_26_3_copper_chain_properties *properties
);

block_state_id mc_26_3_copper_chest_get_state(
	const mc_26_3_copper_chest_properties *properties
);

b8 mc_26_3_copper_chest_get_properties(
	block_state_id state,
	mc_26_3_copper_chest_properties *properties
);

block_state_id mc_26_3_copper_door_get_state(
	const mc_26_3_copper_door_properties *properties
);

b8 mc_26_3_copper_door_get_properties(
	block_state_id state,
	mc_26_3_copper_door_properties *properties
);

block_state_id mc_26_3_copper_golem_statue_get_state(
	const mc_26_3_copper_golem_statue_properties *properties
);

b8 mc_26_3_copper_golem_statue_get_properties(
	block_state_id state,
	mc_26_3_copper_golem_statue_properties *properties
);

block_state_id mc_26_3_copper_grate_get_state(
	const mc_26_3_copper_grate_properties *properties
);

b8 mc_26_3_copper_grate_get_properties(
	block_state_id state,
	mc_26_3_copper_grate_properties *properties
);

block_state_id mc_26_3_copper_lantern_get_state(
	const mc_26_3_copper_lantern_properties *properties
);

b8 mc_26_3_copper_lantern_get_properties(
	block_state_id state,
	mc_26_3_copper_lantern_properties *properties
);

block_state_id mc_26_3_copper_trapdoor_get_state(
	const mc_26_3_copper_trapdoor_properties *properties
);

b8 mc_26_3_copper_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_copper_trapdoor_properties *properties
);

block_state_id mc_26_3_copper_wall_torch_get_state(
	const mc_26_3_copper_wall_torch_properties *properties
);

b8 mc_26_3_copper_wall_torch_get_properties(
	block_state_id state,
	mc_26_3_copper_wall_torch_properties *properties
);

block_state_id mc_26_3_crafter_get_state(
	const mc_26_3_crafter_properties *properties
);

b8 mc_26_3_crafter_get_properties(
	block_state_id state,
	mc_26_3_crafter_properties *properties
);

block_state_id mc_26_3_creaking_heart_get_state(
	const mc_26_3_creaking_heart_properties *properties
);

b8 mc_26_3_creaking_heart_get_properties(
	block_state_id state,
	mc_26_3_creaking_heart_properties *properties
);

block_state_id mc_26_3_creeper_head_get_state(
	const mc_26_3_creeper_head_properties *properties
);

b8 mc_26_3_creeper_head_get_properties(
	block_state_id state,
	mc_26_3_creeper_head_properties *properties
);

block_state_id mc_26_3_creeper_wall_head_get_state(
	const mc_26_3_creeper_wall_head_properties *properties
);

b8 mc_26_3_creeper_wall_head_get_properties(
	block_state_id state,
	mc_26_3_creeper_wall_head_properties *properties
);

block_state_id mc_26_3_crimson_button_get_state(
	const mc_26_3_crimson_button_properties *properties
);

b8 mc_26_3_crimson_button_get_properties(
	block_state_id state,
	mc_26_3_crimson_button_properties *properties
);

block_state_id mc_26_3_crimson_door_get_state(
	const mc_26_3_crimson_door_properties *properties
);

b8 mc_26_3_crimson_door_get_properties(
	block_state_id state,
	mc_26_3_crimson_door_properties *properties
);

block_state_id mc_26_3_crimson_fence_get_state(
	const mc_26_3_crimson_fence_properties *properties
);

b8 mc_26_3_crimson_fence_get_properties(
	block_state_id state,
	mc_26_3_crimson_fence_properties *properties
);

block_state_id mc_26_3_crimson_fence_gate_get_state(
	const mc_26_3_crimson_fence_gate_properties *properties
);

b8 mc_26_3_crimson_fence_gate_get_properties(
	block_state_id state,
	mc_26_3_crimson_fence_gate_properties *properties
);

block_state_id mc_26_3_crimson_hanging_sign_get_state(
	const mc_26_3_crimson_hanging_sign_properties *properties
);

b8 mc_26_3_crimson_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_crimson_hanging_sign_properties *properties
);

block_state_id mc_26_3_crimson_hyphae_get_state(
	const mc_26_3_crimson_hyphae_properties *properties
);

b8 mc_26_3_crimson_hyphae_get_properties(
	block_state_id state,
	mc_26_3_crimson_hyphae_properties *properties
);

block_state_id mc_26_3_crimson_pressure_plate_get_state(
	const mc_26_3_crimson_pressure_plate_properties *properties
);

b8 mc_26_3_crimson_pressure_plate_get_properties(
	block_state_id state,
	mc_26_3_crimson_pressure_plate_properties *properties
);

block_state_id mc_26_3_crimson_shelf_get_state(
	const mc_26_3_crimson_shelf_properties *properties
);

b8 mc_26_3_crimson_shelf_get_properties(
	block_state_id state,
	mc_26_3_crimson_shelf_properties *properties
);

block_state_id mc_26_3_crimson_sign_get_state(
	const mc_26_3_crimson_sign_properties *properties
);

b8 mc_26_3_crimson_sign_get_properties(
	block_state_id state,
	mc_26_3_crimson_sign_properties *properties
);

block_state_id mc_26_3_crimson_slab_get_state(
	const mc_26_3_crimson_slab_properties *properties
);

b8 mc_26_3_crimson_slab_get_properties(
	block_state_id state,
	mc_26_3_crimson_slab_properties *properties
);

block_state_id mc_26_3_crimson_stairs_get_state(
	const mc_26_3_crimson_stairs_properties *properties
);

b8 mc_26_3_crimson_stairs_get_properties(
	block_state_id state,
	mc_26_3_crimson_stairs_properties *properties
);

block_state_id mc_26_3_crimson_stem_get_state(
	const mc_26_3_crimson_stem_properties *properties
);

b8 mc_26_3_crimson_stem_get_properties(
	block_state_id state,
	mc_26_3_crimson_stem_properties *properties
);

block_state_id mc_26_3_crimson_trapdoor_get_state(
	const mc_26_3_crimson_trapdoor_properties *properties
);

b8 mc_26_3_crimson_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_crimson_trapdoor_properties *properties
);

block_state_id mc_26_3_crimson_wall_hanging_sign_get_state(
	const mc_26_3_crimson_wall_hanging_sign_properties *properties
);

b8 mc_26_3_crimson_wall_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_crimson_wall_hanging_sign_properties *properties
);

block_state_id mc_26_3_crimson_wall_sign_get_state(
	const mc_26_3_crimson_wall_sign_properties *properties
);

b8 mc_26_3_crimson_wall_sign_get_properties(
	block_state_id state,
	mc_26_3_crimson_wall_sign_properties *properties
);

block_state_id mc_26_3_cut_copper_slab_get_state(
	const mc_26_3_cut_copper_slab_properties *properties
);

b8 mc_26_3_cut_copper_slab_get_properties(
	block_state_id state,
	mc_26_3_cut_copper_slab_properties *properties
);

block_state_id mc_26_3_cut_copper_stairs_get_state(
	const mc_26_3_cut_copper_stairs_properties *properties
);

b8 mc_26_3_cut_copper_stairs_get_properties(
	block_state_id state,
	mc_26_3_cut_copper_stairs_properties *properties
);

block_state_id mc_26_3_cut_red_sandstone_slab_get_state(
	const mc_26_3_cut_red_sandstone_slab_properties *properties
);

b8 mc_26_3_cut_red_sandstone_slab_get_properties(
	block_state_id state,
	mc_26_3_cut_red_sandstone_slab_properties *properties
);

block_state_id mc_26_3_cut_sandstone_slab_get_state(
	const mc_26_3_cut_sandstone_slab_properties *properties
);

b8 mc_26_3_cut_sandstone_slab_get_properties(
	block_state_id state,
	mc_26_3_cut_sandstone_slab_properties *properties
);

block_state_id mc_26_3_cyan_banner_get_state(
	const mc_26_3_cyan_banner_properties *properties
);

b8 mc_26_3_cyan_banner_get_properties(
	block_state_id state,
	mc_26_3_cyan_banner_properties *properties
);

block_state_id mc_26_3_cyan_bed_get_state(
	const mc_26_3_cyan_bed_properties *properties
);

b8 mc_26_3_cyan_bed_get_properties(
	block_state_id state,
	mc_26_3_cyan_bed_properties *properties
);

block_state_id mc_26_3_cyan_candle_get_state(
	const mc_26_3_cyan_candle_properties *properties
);

b8 mc_26_3_cyan_candle_get_properties(
	block_state_id state,
	mc_26_3_cyan_candle_properties *properties
);

block_state_id mc_26_3_cyan_candle_cake_get_state(
	const mc_26_3_cyan_candle_cake_properties *properties
);

b8 mc_26_3_cyan_candle_cake_get_properties(
	block_state_id state,
	mc_26_3_cyan_candle_cake_properties *properties
);

block_state_id mc_26_3_cyan_concrete_slab_get_state(
	const mc_26_3_cyan_concrete_slab_properties *properties
);

b8 mc_26_3_cyan_concrete_slab_get_properties(
	block_state_id state,
	mc_26_3_cyan_concrete_slab_properties *properties
);

block_state_id mc_26_3_cyan_concrete_stairs_get_state(
	const mc_26_3_cyan_concrete_stairs_properties *properties
);

b8 mc_26_3_cyan_concrete_stairs_get_properties(
	block_state_id state,
	mc_26_3_cyan_concrete_stairs_properties *properties
);

block_state_id mc_26_3_cyan_glazed_terracotta_get_state(
	const mc_26_3_cyan_glazed_terracotta_properties *properties
);

b8 mc_26_3_cyan_glazed_terracotta_get_properties(
	block_state_id state,
	mc_26_3_cyan_glazed_terracotta_properties *properties
);

block_state_id mc_26_3_cyan_shulker_box_get_state(
	const mc_26_3_cyan_shulker_box_properties *properties
);

b8 mc_26_3_cyan_shulker_box_get_properties(
	block_state_id state,
	mc_26_3_cyan_shulker_box_properties *properties
);

block_state_id mc_26_3_cyan_stained_glass_pane_get_state(
	const mc_26_3_cyan_stained_glass_pane_properties *properties
);

b8 mc_26_3_cyan_stained_glass_pane_get_properties(
	block_state_id state,
	mc_26_3_cyan_stained_glass_pane_properties *properties
);

block_state_id mc_26_3_cyan_wall_banner_get_state(
	const mc_26_3_cyan_wall_banner_properties *properties
);

b8 mc_26_3_cyan_wall_banner_get_properties(
	block_state_id state,
	mc_26_3_cyan_wall_banner_properties *properties
);

block_state_id mc_26_3_cyan_wool_slab_get_state(
	const mc_26_3_cyan_wool_slab_properties *properties
);

b8 mc_26_3_cyan_wool_slab_get_properties(
	block_state_id state,
	mc_26_3_cyan_wool_slab_properties *properties
);

block_state_id mc_26_3_cyan_wool_stairs_get_state(
	const mc_26_3_cyan_wool_stairs_properties *properties
);

b8 mc_26_3_cyan_wool_stairs_get_properties(
	block_state_id state,
	mc_26_3_cyan_wool_stairs_properties *properties
);

block_state_id mc_26_3_damaged_anvil_get_state(
	const mc_26_3_damaged_anvil_properties *properties
);

b8 mc_26_3_damaged_anvil_get_properties(
	block_state_id state,
	mc_26_3_damaged_anvil_properties *properties
);

block_state_id mc_26_3_dark_oak_button_get_state(
	const mc_26_3_dark_oak_button_properties *properties
);

b8 mc_26_3_dark_oak_button_get_properties(
	block_state_id state,
	mc_26_3_dark_oak_button_properties *properties
);

block_state_id mc_26_3_dark_oak_door_get_state(
	const mc_26_3_dark_oak_door_properties *properties
);

b8 mc_26_3_dark_oak_door_get_properties(
	block_state_id state,
	mc_26_3_dark_oak_door_properties *properties
);

block_state_id mc_26_3_dark_oak_fence_get_state(
	const mc_26_3_dark_oak_fence_properties *properties
);

b8 mc_26_3_dark_oak_fence_get_properties(
	block_state_id state,
	mc_26_3_dark_oak_fence_properties *properties
);

block_state_id mc_26_3_dark_oak_fence_gate_get_state(
	const mc_26_3_dark_oak_fence_gate_properties *properties
);

b8 mc_26_3_dark_oak_fence_gate_get_properties(
	block_state_id state,
	mc_26_3_dark_oak_fence_gate_properties *properties
);

block_state_id mc_26_3_dark_oak_hanging_sign_get_state(
	const mc_26_3_dark_oak_hanging_sign_properties *properties
);

b8 mc_26_3_dark_oak_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_dark_oak_hanging_sign_properties *properties
);

block_state_id mc_26_3_dark_oak_leaves_get_state(
	const mc_26_3_dark_oak_leaves_properties *properties
);

b8 mc_26_3_dark_oak_leaves_get_properties(
	block_state_id state,
	mc_26_3_dark_oak_leaves_properties *properties
);

block_state_id mc_26_3_dark_oak_log_get_state(
	const mc_26_3_dark_oak_log_properties *properties
);

b8 mc_26_3_dark_oak_log_get_properties(
	block_state_id state,
	mc_26_3_dark_oak_log_properties *properties
);

block_state_id mc_26_3_dark_oak_pressure_plate_get_state(
	const mc_26_3_dark_oak_pressure_plate_properties *properties
);

b8 mc_26_3_dark_oak_pressure_plate_get_properties(
	block_state_id state,
	mc_26_3_dark_oak_pressure_plate_properties *properties
);

block_state_id mc_26_3_dark_oak_sapling_get_state(
	const mc_26_3_dark_oak_sapling_properties *properties
);

b8 mc_26_3_dark_oak_sapling_get_properties(
	block_state_id state,
	mc_26_3_dark_oak_sapling_properties *properties
);

block_state_id mc_26_3_dark_oak_shelf_get_state(
	const mc_26_3_dark_oak_shelf_properties *properties
);

b8 mc_26_3_dark_oak_shelf_get_properties(
	block_state_id state,
	mc_26_3_dark_oak_shelf_properties *properties
);

block_state_id mc_26_3_dark_oak_sign_get_state(
	const mc_26_3_dark_oak_sign_properties *properties
);

b8 mc_26_3_dark_oak_sign_get_properties(
	block_state_id state,
	mc_26_3_dark_oak_sign_properties *properties
);

block_state_id mc_26_3_dark_oak_slab_get_state(
	const mc_26_3_dark_oak_slab_properties *properties
);

b8 mc_26_3_dark_oak_slab_get_properties(
	block_state_id state,
	mc_26_3_dark_oak_slab_properties *properties
);

block_state_id mc_26_3_dark_oak_stairs_get_state(
	const mc_26_3_dark_oak_stairs_properties *properties
);

b8 mc_26_3_dark_oak_stairs_get_properties(
	block_state_id state,
	mc_26_3_dark_oak_stairs_properties *properties
);

block_state_id mc_26_3_dark_oak_trapdoor_get_state(
	const mc_26_3_dark_oak_trapdoor_properties *properties
);

b8 mc_26_3_dark_oak_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_dark_oak_trapdoor_properties *properties
);

block_state_id mc_26_3_dark_oak_wall_hanging_sign_get_state(
	const mc_26_3_dark_oak_wall_hanging_sign_properties *properties
);

b8 mc_26_3_dark_oak_wall_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_dark_oak_wall_hanging_sign_properties *properties
);

block_state_id mc_26_3_dark_oak_wall_sign_get_state(
	const mc_26_3_dark_oak_wall_sign_properties *properties
);

b8 mc_26_3_dark_oak_wall_sign_get_properties(
	block_state_id state,
	mc_26_3_dark_oak_wall_sign_properties *properties
);

block_state_id mc_26_3_dark_oak_wood_get_state(
	const mc_26_3_dark_oak_wood_properties *properties
);

b8 mc_26_3_dark_oak_wood_get_properties(
	block_state_id state,
	mc_26_3_dark_oak_wood_properties *properties
);

block_state_id mc_26_3_dark_prismarine_slab_get_state(
	const mc_26_3_dark_prismarine_slab_properties *properties
);

b8 mc_26_3_dark_prismarine_slab_get_properties(
	block_state_id state,
	mc_26_3_dark_prismarine_slab_properties *properties
);

block_state_id mc_26_3_dark_prismarine_stairs_get_state(
	const mc_26_3_dark_prismarine_stairs_properties *properties
);

b8 mc_26_3_dark_prismarine_stairs_get_properties(
	block_state_id state,
	mc_26_3_dark_prismarine_stairs_properties *properties
);

block_state_id mc_26_3_daylight_detector_get_state(
	const mc_26_3_daylight_detector_properties *properties
);

b8 mc_26_3_daylight_detector_get_properties(
	block_state_id state,
	mc_26_3_daylight_detector_properties *properties
);

block_state_id mc_26_3_dead_brain_coral_get_state(
	const mc_26_3_dead_brain_coral_properties *properties
);

b8 mc_26_3_dead_brain_coral_get_properties(
	block_state_id state,
	mc_26_3_dead_brain_coral_properties *properties
);

block_state_id mc_26_3_dead_brain_coral_fan_get_state(
	const mc_26_3_dead_brain_coral_fan_properties *properties
);

b8 mc_26_3_dead_brain_coral_fan_get_properties(
	block_state_id state,
	mc_26_3_dead_brain_coral_fan_properties *properties
);

block_state_id mc_26_3_dead_brain_coral_wall_fan_get_state(
	const mc_26_3_dead_brain_coral_wall_fan_properties *properties
);

b8 mc_26_3_dead_brain_coral_wall_fan_get_properties(
	block_state_id state,
	mc_26_3_dead_brain_coral_wall_fan_properties *properties
);

block_state_id mc_26_3_dead_bubble_coral_get_state(
	const mc_26_3_dead_bubble_coral_properties *properties
);

b8 mc_26_3_dead_bubble_coral_get_properties(
	block_state_id state,
	mc_26_3_dead_bubble_coral_properties *properties
);

block_state_id mc_26_3_dead_bubble_coral_fan_get_state(
	const mc_26_3_dead_bubble_coral_fan_properties *properties
);

b8 mc_26_3_dead_bubble_coral_fan_get_properties(
	block_state_id state,
	mc_26_3_dead_bubble_coral_fan_properties *properties
);

block_state_id mc_26_3_dead_bubble_coral_wall_fan_get_state(
	const mc_26_3_dead_bubble_coral_wall_fan_properties *properties
);

b8 mc_26_3_dead_bubble_coral_wall_fan_get_properties(
	block_state_id state,
	mc_26_3_dead_bubble_coral_wall_fan_properties *properties
);

block_state_id mc_26_3_dead_fire_coral_get_state(
	const mc_26_3_dead_fire_coral_properties *properties
);

b8 mc_26_3_dead_fire_coral_get_properties(
	block_state_id state,
	mc_26_3_dead_fire_coral_properties *properties
);

block_state_id mc_26_3_dead_fire_coral_fan_get_state(
	const mc_26_3_dead_fire_coral_fan_properties *properties
);

b8 mc_26_3_dead_fire_coral_fan_get_properties(
	block_state_id state,
	mc_26_3_dead_fire_coral_fan_properties *properties
);

block_state_id mc_26_3_dead_fire_coral_wall_fan_get_state(
	const mc_26_3_dead_fire_coral_wall_fan_properties *properties
);

b8 mc_26_3_dead_fire_coral_wall_fan_get_properties(
	block_state_id state,
	mc_26_3_dead_fire_coral_wall_fan_properties *properties
);

block_state_id mc_26_3_dead_horn_coral_get_state(
	const mc_26_3_dead_horn_coral_properties *properties
);

b8 mc_26_3_dead_horn_coral_get_properties(
	block_state_id state,
	mc_26_3_dead_horn_coral_properties *properties
);

block_state_id mc_26_3_dead_horn_coral_fan_get_state(
	const mc_26_3_dead_horn_coral_fan_properties *properties
);

b8 mc_26_3_dead_horn_coral_fan_get_properties(
	block_state_id state,
	mc_26_3_dead_horn_coral_fan_properties *properties
);

block_state_id mc_26_3_dead_horn_coral_wall_fan_get_state(
	const mc_26_3_dead_horn_coral_wall_fan_properties *properties
);

b8 mc_26_3_dead_horn_coral_wall_fan_get_properties(
	block_state_id state,
	mc_26_3_dead_horn_coral_wall_fan_properties *properties
);

block_state_id mc_26_3_dead_tube_coral_get_state(
	const mc_26_3_dead_tube_coral_properties *properties
);

b8 mc_26_3_dead_tube_coral_get_properties(
	block_state_id state,
	mc_26_3_dead_tube_coral_properties *properties
);

block_state_id mc_26_3_dead_tube_coral_fan_get_state(
	const mc_26_3_dead_tube_coral_fan_properties *properties
);

b8 mc_26_3_dead_tube_coral_fan_get_properties(
	block_state_id state,
	mc_26_3_dead_tube_coral_fan_properties *properties
);

block_state_id mc_26_3_dead_tube_coral_wall_fan_get_state(
	const mc_26_3_dead_tube_coral_wall_fan_properties *properties
);

b8 mc_26_3_dead_tube_coral_wall_fan_get_properties(
	block_state_id state,
	mc_26_3_dead_tube_coral_wall_fan_properties *properties
);

block_state_id mc_26_3_decorated_pot_get_state(
	const mc_26_3_decorated_pot_properties *properties
);

b8 mc_26_3_decorated_pot_get_properties(
	block_state_id state,
	mc_26_3_decorated_pot_properties *properties
);

block_state_id mc_26_3_deepslate_get_state(
	const mc_26_3_deepslate_properties *properties
);

b8 mc_26_3_deepslate_get_properties(
	block_state_id state,
	mc_26_3_deepslate_properties *properties
);

block_state_id mc_26_3_deepslate_brick_slab_get_state(
	const mc_26_3_deepslate_brick_slab_properties *properties
);

b8 mc_26_3_deepslate_brick_slab_get_properties(
	block_state_id state,
	mc_26_3_deepslate_brick_slab_properties *properties
);

block_state_id mc_26_3_deepslate_brick_stairs_get_state(
	const mc_26_3_deepslate_brick_stairs_properties *properties
);

b8 mc_26_3_deepslate_brick_stairs_get_properties(
	block_state_id state,
	mc_26_3_deepslate_brick_stairs_properties *properties
);

block_state_id mc_26_3_deepslate_brick_wall_get_state(
	const mc_26_3_deepslate_brick_wall_properties *properties
);

b8 mc_26_3_deepslate_brick_wall_get_properties(
	block_state_id state,
	mc_26_3_deepslate_brick_wall_properties *properties
);

block_state_id mc_26_3_deepslate_redstone_ore_get_state(
	const mc_26_3_deepslate_redstone_ore_properties *properties
);

b8 mc_26_3_deepslate_redstone_ore_get_properties(
	block_state_id state,
	mc_26_3_deepslate_redstone_ore_properties *properties
);

block_state_id mc_26_3_deepslate_tile_slab_get_state(
	const mc_26_3_deepslate_tile_slab_properties *properties
);

b8 mc_26_3_deepslate_tile_slab_get_properties(
	block_state_id state,
	mc_26_3_deepslate_tile_slab_properties *properties
);

block_state_id mc_26_3_deepslate_tile_stairs_get_state(
	const mc_26_3_deepslate_tile_stairs_properties *properties
);

b8 mc_26_3_deepslate_tile_stairs_get_properties(
	block_state_id state,
	mc_26_3_deepslate_tile_stairs_properties *properties
);

block_state_id mc_26_3_deepslate_tile_wall_get_state(
	const mc_26_3_deepslate_tile_wall_properties *properties
);

b8 mc_26_3_deepslate_tile_wall_get_properties(
	block_state_id state,
	mc_26_3_deepslate_tile_wall_properties *properties
);

block_state_id mc_26_3_detector_rail_get_state(
	const mc_26_3_detector_rail_properties *properties
);

b8 mc_26_3_detector_rail_get_properties(
	block_state_id state,
	mc_26_3_detector_rail_properties *properties
);

block_state_id mc_26_3_diorite_slab_get_state(
	const mc_26_3_diorite_slab_properties *properties
);

b8 mc_26_3_diorite_slab_get_properties(
	block_state_id state,
	mc_26_3_diorite_slab_properties *properties
);

block_state_id mc_26_3_diorite_stairs_get_state(
	const mc_26_3_diorite_stairs_properties *properties
);

b8 mc_26_3_diorite_stairs_get_properties(
	block_state_id state,
	mc_26_3_diorite_stairs_properties *properties
);

block_state_id mc_26_3_diorite_wall_get_state(
	const mc_26_3_diorite_wall_properties *properties
);

b8 mc_26_3_diorite_wall_get_properties(
	block_state_id state,
	mc_26_3_diorite_wall_properties *properties
);

block_state_id mc_26_3_dispenser_get_state(
	const mc_26_3_dispenser_properties *properties
);

b8 mc_26_3_dispenser_get_properties(
	block_state_id state,
	mc_26_3_dispenser_properties *properties
);

block_state_id mc_26_3_dragon_head_get_state(
	const mc_26_3_dragon_head_properties *properties
);

b8 mc_26_3_dragon_head_get_properties(
	block_state_id state,
	mc_26_3_dragon_head_properties *properties
);

block_state_id mc_26_3_dragon_wall_head_get_state(
	const mc_26_3_dragon_wall_head_properties *properties
);

b8 mc_26_3_dragon_wall_head_get_properties(
	block_state_id state,
	mc_26_3_dragon_wall_head_properties *properties
);

block_state_id mc_26_3_dried_ghast_get_state(
	const mc_26_3_dried_ghast_properties *properties
);

b8 mc_26_3_dried_ghast_get_properties(
	block_state_id state,
	mc_26_3_dried_ghast_properties *properties
);

block_state_id mc_26_3_dropper_get_state(
	const mc_26_3_dropper_properties *properties
);

b8 mc_26_3_dropper_get_properties(
	block_state_id state,
	mc_26_3_dropper_properties *properties
);

block_state_id mc_26_3_end_portal_frame_get_state(
	const mc_26_3_end_portal_frame_properties *properties
);

b8 mc_26_3_end_portal_frame_get_properties(
	block_state_id state,
	mc_26_3_end_portal_frame_properties *properties
);

block_state_id mc_26_3_end_rod_get_state(
	const mc_26_3_end_rod_properties *properties
);

b8 mc_26_3_end_rod_get_properties(
	block_state_id state,
	mc_26_3_end_rod_properties *properties
);

block_state_id mc_26_3_end_stone_brick_slab_get_state(
	const mc_26_3_end_stone_brick_slab_properties *properties
);

b8 mc_26_3_end_stone_brick_slab_get_properties(
	block_state_id state,
	mc_26_3_end_stone_brick_slab_properties *properties
);

block_state_id mc_26_3_end_stone_brick_stairs_get_state(
	const mc_26_3_end_stone_brick_stairs_properties *properties
);

b8 mc_26_3_end_stone_brick_stairs_get_properties(
	block_state_id state,
	mc_26_3_end_stone_brick_stairs_properties *properties
);

block_state_id mc_26_3_end_stone_brick_wall_get_state(
	const mc_26_3_end_stone_brick_wall_properties *properties
);

b8 mc_26_3_end_stone_brick_wall_get_properties(
	block_state_id state,
	mc_26_3_end_stone_brick_wall_properties *properties
);

block_state_id mc_26_3_ender_chest_get_state(
	const mc_26_3_ender_chest_properties *properties
);

b8 mc_26_3_ender_chest_get_properties(
	block_state_id state,
	mc_26_3_ender_chest_properties *properties
);

block_state_id mc_26_3_exposed_copper_bars_get_state(
	const mc_26_3_exposed_copper_bars_properties *properties
);

b8 mc_26_3_exposed_copper_bars_get_properties(
	block_state_id state,
	mc_26_3_exposed_copper_bars_properties *properties
);

block_state_id mc_26_3_exposed_copper_bulb_get_state(
	const mc_26_3_exposed_copper_bulb_properties *properties
);

b8 mc_26_3_exposed_copper_bulb_get_properties(
	block_state_id state,
	mc_26_3_exposed_copper_bulb_properties *properties
);

block_state_id mc_26_3_exposed_copper_chain_get_state(
	const mc_26_3_exposed_copper_chain_properties *properties
);

b8 mc_26_3_exposed_copper_chain_get_properties(
	block_state_id state,
	mc_26_3_exposed_copper_chain_properties *properties
);

block_state_id mc_26_3_exposed_copper_chest_get_state(
	const mc_26_3_exposed_copper_chest_properties *properties
);

b8 mc_26_3_exposed_copper_chest_get_properties(
	block_state_id state,
	mc_26_3_exposed_copper_chest_properties *properties
);

block_state_id mc_26_3_exposed_copper_door_get_state(
	const mc_26_3_exposed_copper_door_properties *properties
);

b8 mc_26_3_exposed_copper_door_get_properties(
	block_state_id state,
	mc_26_3_exposed_copper_door_properties *properties
);

block_state_id mc_26_3_exposed_copper_golem_statue_get_state(
	const mc_26_3_exposed_copper_golem_statue_properties *properties
);

b8 mc_26_3_exposed_copper_golem_statue_get_properties(
	block_state_id state,
	mc_26_3_exposed_copper_golem_statue_properties *properties
);

block_state_id mc_26_3_exposed_copper_grate_get_state(
	const mc_26_3_exposed_copper_grate_properties *properties
);

b8 mc_26_3_exposed_copper_grate_get_properties(
	block_state_id state,
	mc_26_3_exposed_copper_grate_properties *properties
);

block_state_id mc_26_3_exposed_copper_lantern_get_state(
	const mc_26_3_exposed_copper_lantern_properties *properties
);

b8 mc_26_3_exposed_copper_lantern_get_properties(
	block_state_id state,
	mc_26_3_exposed_copper_lantern_properties *properties
);

block_state_id mc_26_3_exposed_copper_trapdoor_get_state(
	const mc_26_3_exposed_copper_trapdoor_properties *properties
);

b8 mc_26_3_exposed_copper_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_exposed_copper_trapdoor_properties *properties
);

block_state_id mc_26_3_exposed_cut_copper_slab_get_state(
	const mc_26_3_exposed_cut_copper_slab_properties *properties
);

b8 mc_26_3_exposed_cut_copper_slab_get_properties(
	block_state_id state,
	mc_26_3_exposed_cut_copper_slab_properties *properties
);

block_state_id mc_26_3_exposed_cut_copper_stairs_get_state(
	const mc_26_3_exposed_cut_copper_stairs_properties *properties
);

b8 mc_26_3_exposed_cut_copper_stairs_get_properties(
	block_state_id state,
	mc_26_3_exposed_cut_copper_stairs_properties *properties
);

block_state_id mc_26_3_exposed_lightning_rod_get_state(
	const mc_26_3_exposed_lightning_rod_properties *properties
);

b8 mc_26_3_exposed_lightning_rod_get_properties(
	block_state_id state,
	mc_26_3_exposed_lightning_rod_properties *properties
);

block_state_id mc_26_3_farmland_get_state(
	const mc_26_3_farmland_properties *properties
);

b8 mc_26_3_farmland_get_properties(
	block_state_id state,
	mc_26_3_farmland_properties *properties
);

block_state_id mc_26_3_fire_get_state(
	const mc_26_3_fire_properties *properties
);

b8 mc_26_3_fire_get_properties(
	block_state_id state,
	mc_26_3_fire_properties *properties
);

block_state_id mc_26_3_fire_coral_get_state(
	const mc_26_3_fire_coral_properties *properties
);

b8 mc_26_3_fire_coral_get_properties(
	block_state_id state,
	mc_26_3_fire_coral_properties *properties
);

block_state_id mc_26_3_fire_coral_fan_get_state(
	const mc_26_3_fire_coral_fan_properties *properties
);

b8 mc_26_3_fire_coral_fan_get_properties(
	block_state_id state,
	mc_26_3_fire_coral_fan_properties *properties
);

block_state_id mc_26_3_fire_coral_wall_fan_get_state(
	const mc_26_3_fire_coral_wall_fan_properties *properties
);

b8 mc_26_3_fire_coral_wall_fan_get_properties(
	block_state_id state,
	mc_26_3_fire_coral_wall_fan_properties *properties
);

block_state_id mc_26_3_flowering_azalea_leaves_get_state(
	const mc_26_3_flowering_azalea_leaves_properties *properties
);

b8 mc_26_3_flowering_azalea_leaves_get_properties(
	block_state_id state,
	mc_26_3_flowering_azalea_leaves_properties *properties
);

block_state_id mc_26_3_frosted_ice_get_state(
	const mc_26_3_frosted_ice_properties *properties
);

b8 mc_26_3_frosted_ice_get_properties(
	block_state_id state,
	mc_26_3_frosted_ice_properties *properties
);

block_state_id mc_26_3_furnace_get_state(
	const mc_26_3_furnace_properties *properties
);

b8 mc_26_3_furnace_get_properties(
	block_state_id state,
	mc_26_3_furnace_properties *properties
);

block_state_id mc_26_3_glass_pane_get_state(
	const mc_26_3_glass_pane_properties *properties
);

b8 mc_26_3_glass_pane_get_properties(
	block_state_id state,
	mc_26_3_glass_pane_properties *properties
);

block_state_id mc_26_3_glow_lichen_get_state(
	const mc_26_3_glow_lichen_properties *properties
);

b8 mc_26_3_glow_lichen_get_properties(
	block_state_id state,
	mc_26_3_glow_lichen_properties *properties
);

block_state_id mc_26_3_granite_slab_get_state(
	const mc_26_3_granite_slab_properties *properties
);

b8 mc_26_3_granite_slab_get_properties(
	block_state_id state,
	mc_26_3_granite_slab_properties *properties
);

block_state_id mc_26_3_granite_stairs_get_state(
	const mc_26_3_granite_stairs_properties *properties
);

b8 mc_26_3_granite_stairs_get_properties(
	block_state_id state,
	mc_26_3_granite_stairs_properties *properties
);

block_state_id mc_26_3_granite_wall_get_state(
	const mc_26_3_granite_wall_properties *properties
);

b8 mc_26_3_granite_wall_get_properties(
	block_state_id state,
	mc_26_3_granite_wall_properties *properties
);

block_state_id mc_26_3_grass_block_get_state(
	const mc_26_3_grass_block_properties *properties
);

b8 mc_26_3_grass_block_get_properties(
	block_state_id state,
	mc_26_3_grass_block_properties *properties
);

block_state_id mc_26_3_gray_banner_get_state(
	const mc_26_3_gray_banner_properties *properties
);

b8 mc_26_3_gray_banner_get_properties(
	block_state_id state,
	mc_26_3_gray_banner_properties *properties
);

block_state_id mc_26_3_gray_bed_get_state(
	const mc_26_3_gray_bed_properties *properties
);

b8 mc_26_3_gray_bed_get_properties(
	block_state_id state,
	mc_26_3_gray_bed_properties *properties
);

block_state_id mc_26_3_gray_candle_get_state(
	const mc_26_3_gray_candle_properties *properties
);

b8 mc_26_3_gray_candle_get_properties(
	block_state_id state,
	mc_26_3_gray_candle_properties *properties
);

block_state_id mc_26_3_gray_candle_cake_get_state(
	const mc_26_3_gray_candle_cake_properties *properties
);

b8 mc_26_3_gray_candle_cake_get_properties(
	block_state_id state,
	mc_26_3_gray_candle_cake_properties *properties
);

block_state_id mc_26_3_gray_concrete_slab_get_state(
	const mc_26_3_gray_concrete_slab_properties *properties
);

b8 mc_26_3_gray_concrete_slab_get_properties(
	block_state_id state,
	mc_26_3_gray_concrete_slab_properties *properties
);

block_state_id mc_26_3_gray_concrete_stairs_get_state(
	const mc_26_3_gray_concrete_stairs_properties *properties
);

b8 mc_26_3_gray_concrete_stairs_get_properties(
	block_state_id state,
	mc_26_3_gray_concrete_stairs_properties *properties
);

block_state_id mc_26_3_gray_glazed_terracotta_get_state(
	const mc_26_3_gray_glazed_terracotta_properties *properties
);

b8 mc_26_3_gray_glazed_terracotta_get_properties(
	block_state_id state,
	mc_26_3_gray_glazed_terracotta_properties *properties
);

block_state_id mc_26_3_gray_shulker_box_get_state(
	const mc_26_3_gray_shulker_box_properties *properties
);

b8 mc_26_3_gray_shulker_box_get_properties(
	block_state_id state,
	mc_26_3_gray_shulker_box_properties *properties
);

block_state_id mc_26_3_gray_stained_glass_pane_get_state(
	const mc_26_3_gray_stained_glass_pane_properties *properties
);

b8 mc_26_3_gray_stained_glass_pane_get_properties(
	block_state_id state,
	mc_26_3_gray_stained_glass_pane_properties *properties
);

block_state_id mc_26_3_gray_wall_banner_get_state(
	const mc_26_3_gray_wall_banner_properties *properties
);

b8 mc_26_3_gray_wall_banner_get_properties(
	block_state_id state,
	mc_26_3_gray_wall_banner_properties *properties
);

block_state_id mc_26_3_gray_wool_slab_get_state(
	const mc_26_3_gray_wool_slab_properties *properties
);

b8 mc_26_3_gray_wool_slab_get_properties(
	block_state_id state,
	mc_26_3_gray_wool_slab_properties *properties
);

block_state_id mc_26_3_gray_wool_stairs_get_state(
	const mc_26_3_gray_wool_stairs_properties *properties
);

b8 mc_26_3_gray_wool_stairs_get_properties(
	block_state_id state,
	mc_26_3_gray_wool_stairs_properties *properties
);

block_state_id mc_26_3_green_banner_get_state(
	const mc_26_3_green_banner_properties *properties
);

b8 mc_26_3_green_banner_get_properties(
	block_state_id state,
	mc_26_3_green_banner_properties *properties
);

block_state_id mc_26_3_green_bed_get_state(
	const mc_26_3_green_bed_properties *properties
);

b8 mc_26_3_green_bed_get_properties(
	block_state_id state,
	mc_26_3_green_bed_properties *properties
);

block_state_id mc_26_3_green_candle_get_state(
	const mc_26_3_green_candle_properties *properties
);

b8 mc_26_3_green_candle_get_properties(
	block_state_id state,
	mc_26_3_green_candle_properties *properties
);

block_state_id mc_26_3_green_candle_cake_get_state(
	const mc_26_3_green_candle_cake_properties *properties
);

b8 mc_26_3_green_candle_cake_get_properties(
	block_state_id state,
	mc_26_3_green_candle_cake_properties *properties
);

block_state_id mc_26_3_green_concrete_slab_get_state(
	const mc_26_3_green_concrete_slab_properties *properties
);

b8 mc_26_3_green_concrete_slab_get_properties(
	block_state_id state,
	mc_26_3_green_concrete_slab_properties *properties
);

block_state_id mc_26_3_green_concrete_stairs_get_state(
	const mc_26_3_green_concrete_stairs_properties *properties
);

b8 mc_26_3_green_concrete_stairs_get_properties(
	block_state_id state,
	mc_26_3_green_concrete_stairs_properties *properties
);

block_state_id mc_26_3_green_glazed_terracotta_get_state(
	const mc_26_3_green_glazed_terracotta_properties *properties
);

b8 mc_26_3_green_glazed_terracotta_get_properties(
	block_state_id state,
	mc_26_3_green_glazed_terracotta_properties *properties
);

block_state_id mc_26_3_green_shulker_box_get_state(
	const mc_26_3_green_shulker_box_properties *properties
);

b8 mc_26_3_green_shulker_box_get_properties(
	block_state_id state,
	mc_26_3_green_shulker_box_properties *properties
);

block_state_id mc_26_3_green_stained_glass_pane_get_state(
	const mc_26_3_green_stained_glass_pane_properties *properties
);

b8 mc_26_3_green_stained_glass_pane_get_properties(
	block_state_id state,
	mc_26_3_green_stained_glass_pane_properties *properties
);

block_state_id mc_26_3_green_wall_banner_get_state(
	const mc_26_3_green_wall_banner_properties *properties
);

b8 mc_26_3_green_wall_banner_get_properties(
	block_state_id state,
	mc_26_3_green_wall_banner_properties *properties
);

block_state_id mc_26_3_green_wool_slab_get_state(
	const mc_26_3_green_wool_slab_properties *properties
);

b8 mc_26_3_green_wool_slab_get_properties(
	block_state_id state,
	mc_26_3_green_wool_slab_properties *properties
);

block_state_id mc_26_3_green_wool_stairs_get_state(
	const mc_26_3_green_wool_stairs_properties *properties
);

b8 mc_26_3_green_wool_stairs_get_properties(
	block_state_id state,
	mc_26_3_green_wool_stairs_properties *properties
);

block_state_id mc_26_3_grindstone_get_state(
	const mc_26_3_grindstone_properties *properties
);

b8 mc_26_3_grindstone_get_properties(
	block_state_id state,
	mc_26_3_grindstone_properties *properties
);

block_state_id mc_26_3_hanging_roots_get_state(
	const mc_26_3_hanging_roots_properties *properties
);

b8 mc_26_3_hanging_roots_get_properties(
	block_state_id state,
	mc_26_3_hanging_roots_properties *properties
);

block_state_id mc_26_3_hay_block_get_state(
	const mc_26_3_hay_block_properties *properties
);

b8 mc_26_3_hay_block_get_properties(
	block_state_id state,
	mc_26_3_hay_block_properties *properties
);

block_state_id mc_26_3_heavy_core_get_state(
	const mc_26_3_heavy_core_properties *properties
);

b8 mc_26_3_heavy_core_get_properties(
	block_state_id state,
	mc_26_3_heavy_core_properties *properties
);

block_state_id mc_26_3_heavy_weighted_pressure_plate_get_state(
	const mc_26_3_heavy_weighted_pressure_plate_properties *properties
);

b8 mc_26_3_heavy_weighted_pressure_plate_get_properties(
	block_state_id state,
	mc_26_3_heavy_weighted_pressure_plate_properties *properties
);

block_state_id mc_26_3_hopper_get_state(
	const mc_26_3_hopper_properties *properties
);

b8 mc_26_3_hopper_get_properties(
	block_state_id state,
	mc_26_3_hopper_properties *properties
);

block_state_id mc_26_3_horn_coral_get_state(
	const mc_26_3_horn_coral_properties *properties
);

b8 mc_26_3_horn_coral_get_properties(
	block_state_id state,
	mc_26_3_horn_coral_properties *properties
);

block_state_id mc_26_3_horn_coral_fan_get_state(
	const mc_26_3_horn_coral_fan_properties *properties
);

b8 mc_26_3_horn_coral_fan_get_properties(
	block_state_id state,
	mc_26_3_horn_coral_fan_properties *properties
);

block_state_id mc_26_3_horn_coral_wall_fan_get_state(
	const mc_26_3_horn_coral_wall_fan_properties *properties
);

b8 mc_26_3_horn_coral_wall_fan_get_properties(
	block_state_id state,
	mc_26_3_horn_coral_wall_fan_properties *properties
);

block_state_id mc_26_3_infested_deepslate_get_state(
	const mc_26_3_infested_deepslate_properties *properties
);

b8 mc_26_3_infested_deepslate_get_properties(
	block_state_id state,
	mc_26_3_infested_deepslate_properties *properties
);

block_state_id mc_26_3_iron_bars_get_state(
	const mc_26_3_iron_bars_properties *properties
);

b8 mc_26_3_iron_bars_get_properties(
	block_state_id state,
	mc_26_3_iron_bars_properties *properties
);

block_state_id mc_26_3_iron_chain_get_state(
	const mc_26_3_iron_chain_properties *properties
);

b8 mc_26_3_iron_chain_get_properties(
	block_state_id state,
	mc_26_3_iron_chain_properties *properties
);

block_state_id mc_26_3_iron_door_get_state(
	const mc_26_3_iron_door_properties *properties
);

b8 mc_26_3_iron_door_get_properties(
	block_state_id state,
	mc_26_3_iron_door_properties *properties
);

block_state_id mc_26_3_iron_trapdoor_get_state(
	const mc_26_3_iron_trapdoor_properties *properties
);

b8 mc_26_3_iron_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_iron_trapdoor_properties *properties
);

block_state_id mc_26_3_jack_o_lantern_get_state(
	const mc_26_3_jack_o_lantern_properties *properties
);

b8 mc_26_3_jack_o_lantern_get_properties(
	block_state_id state,
	mc_26_3_jack_o_lantern_properties *properties
);

block_state_id mc_26_3_jigsaw_get_state(
	const mc_26_3_jigsaw_properties *properties
);

b8 mc_26_3_jigsaw_get_properties(
	block_state_id state,
	mc_26_3_jigsaw_properties *properties
);

block_state_id mc_26_3_jukebox_get_state(
	const mc_26_3_jukebox_properties *properties
);

b8 mc_26_3_jukebox_get_properties(
	block_state_id state,
	mc_26_3_jukebox_properties *properties
);

block_state_id mc_26_3_jungle_button_get_state(
	const mc_26_3_jungle_button_properties *properties
);

b8 mc_26_3_jungle_button_get_properties(
	block_state_id state,
	mc_26_3_jungle_button_properties *properties
);

block_state_id mc_26_3_jungle_door_get_state(
	const mc_26_3_jungle_door_properties *properties
);

b8 mc_26_3_jungle_door_get_properties(
	block_state_id state,
	mc_26_3_jungle_door_properties *properties
);

block_state_id mc_26_3_jungle_fence_get_state(
	const mc_26_3_jungle_fence_properties *properties
);

b8 mc_26_3_jungle_fence_get_properties(
	block_state_id state,
	mc_26_3_jungle_fence_properties *properties
);

block_state_id mc_26_3_jungle_fence_gate_get_state(
	const mc_26_3_jungle_fence_gate_properties *properties
);

b8 mc_26_3_jungle_fence_gate_get_properties(
	block_state_id state,
	mc_26_3_jungle_fence_gate_properties *properties
);

block_state_id mc_26_3_jungle_hanging_sign_get_state(
	const mc_26_3_jungle_hanging_sign_properties *properties
);

b8 mc_26_3_jungle_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_jungle_hanging_sign_properties *properties
);

block_state_id mc_26_3_jungle_leaves_get_state(
	const mc_26_3_jungle_leaves_properties *properties
);

b8 mc_26_3_jungle_leaves_get_properties(
	block_state_id state,
	mc_26_3_jungle_leaves_properties *properties
);

block_state_id mc_26_3_jungle_log_get_state(
	const mc_26_3_jungle_log_properties *properties
);

b8 mc_26_3_jungle_log_get_properties(
	block_state_id state,
	mc_26_3_jungle_log_properties *properties
);

block_state_id mc_26_3_jungle_pressure_plate_get_state(
	const mc_26_3_jungle_pressure_plate_properties *properties
);

b8 mc_26_3_jungle_pressure_plate_get_properties(
	block_state_id state,
	mc_26_3_jungle_pressure_plate_properties *properties
);

block_state_id mc_26_3_jungle_sapling_get_state(
	const mc_26_3_jungle_sapling_properties *properties
);

b8 mc_26_3_jungle_sapling_get_properties(
	block_state_id state,
	mc_26_3_jungle_sapling_properties *properties
);

block_state_id mc_26_3_jungle_shelf_get_state(
	const mc_26_3_jungle_shelf_properties *properties
);

b8 mc_26_3_jungle_shelf_get_properties(
	block_state_id state,
	mc_26_3_jungle_shelf_properties *properties
);

block_state_id mc_26_3_jungle_sign_get_state(
	const mc_26_3_jungle_sign_properties *properties
);

b8 mc_26_3_jungle_sign_get_properties(
	block_state_id state,
	mc_26_3_jungle_sign_properties *properties
);

block_state_id mc_26_3_jungle_slab_get_state(
	const mc_26_3_jungle_slab_properties *properties
);

b8 mc_26_3_jungle_slab_get_properties(
	block_state_id state,
	mc_26_3_jungle_slab_properties *properties
);

block_state_id mc_26_3_jungle_stairs_get_state(
	const mc_26_3_jungle_stairs_properties *properties
);

b8 mc_26_3_jungle_stairs_get_properties(
	block_state_id state,
	mc_26_3_jungle_stairs_properties *properties
);

block_state_id mc_26_3_jungle_trapdoor_get_state(
	const mc_26_3_jungle_trapdoor_properties *properties
);

b8 mc_26_3_jungle_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_jungle_trapdoor_properties *properties
);

block_state_id mc_26_3_jungle_wall_hanging_sign_get_state(
	const mc_26_3_jungle_wall_hanging_sign_properties *properties
);

b8 mc_26_3_jungle_wall_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_jungle_wall_hanging_sign_properties *properties
);

block_state_id mc_26_3_jungle_wall_sign_get_state(
	const mc_26_3_jungle_wall_sign_properties *properties
);

b8 mc_26_3_jungle_wall_sign_get_properties(
	block_state_id state,
	mc_26_3_jungle_wall_sign_properties *properties
);

block_state_id mc_26_3_jungle_wood_get_state(
	const mc_26_3_jungle_wood_properties *properties
);

b8 mc_26_3_jungle_wood_get_properties(
	block_state_id state,
	mc_26_3_jungle_wood_properties *properties
);

block_state_id mc_26_3_kelp_get_state(
	const mc_26_3_kelp_properties *properties
);

b8 mc_26_3_kelp_get_properties(
	block_state_id state,
	mc_26_3_kelp_properties *properties
);

block_state_id mc_26_3_ladder_get_state(
	const mc_26_3_ladder_properties *properties
);

b8 mc_26_3_ladder_get_properties(
	block_state_id state,
	mc_26_3_ladder_properties *properties
);

block_state_id mc_26_3_lantern_get_state(
	const mc_26_3_lantern_properties *properties
);

b8 mc_26_3_lantern_get_properties(
	block_state_id state,
	mc_26_3_lantern_properties *properties
);

block_state_id mc_26_3_large_amethyst_bud_get_state(
	const mc_26_3_large_amethyst_bud_properties *properties
);

b8 mc_26_3_large_amethyst_bud_get_properties(
	block_state_id state,
	mc_26_3_large_amethyst_bud_properties *properties
);

block_state_id mc_26_3_large_fern_get_state(
	const mc_26_3_large_fern_properties *properties
);

b8 mc_26_3_large_fern_get_properties(
	block_state_id state,
	mc_26_3_large_fern_properties *properties
);

block_state_id mc_26_3_lava_get_state(
	const mc_26_3_lava_properties *properties
);

b8 mc_26_3_lava_get_properties(
	block_state_id state,
	mc_26_3_lava_properties *properties
);

block_state_id mc_26_3_leaf_litter_get_state(
	const mc_26_3_leaf_litter_properties *properties
);

b8 mc_26_3_leaf_litter_get_properties(
	block_state_id state,
	mc_26_3_leaf_litter_properties *properties
);

block_state_id mc_26_3_lectern_get_state(
	const mc_26_3_lectern_properties *properties
);

b8 mc_26_3_lectern_get_properties(
	block_state_id state,
	mc_26_3_lectern_properties *properties
);

block_state_id mc_26_3_lever_get_state(
	const mc_26_3_lever_properties *properties
);

b8 mc_26_3_lever_get_properties(
	block_state_id state,
	mc_26_3_lever_properties *properties
);

block_state_id mc_26_3_light_get_state(
	const mc_26_3_light_properties *properties
);

b8 mc_26_3_light_get_properties(
	block_state_id state,
	mc_26_3_light_properties *properties
);

block_state_id mc_26_3_light_blue_banner_get_state(
	const mc_26_3_light_blue_banner_properties *properties
);

b8 mc_26_3_light_blue_banner_get_properties(
	block_state_id state,
	mc_26_3_light_blue_banner_properties *properties
);

block_state_id mc_26_3_light_blue_bed_get_state(
	const mc_26_3_light_blue_bed_properties *properties
);

b8 mc_26_3_light_blue_bed_get_properties(
	block_state_id state,
	mc_26_3_light_blue_bed_properties *properties
);

block_state_id mc_26_3_light_blue_candle_get_state(
	const mc_26_3_light_blue_candle_properties *properties
);

b8 mc_26_3_light_blue_candle_get_properties(
	block_state_id state,
	mc_26_3_light_blue_candle_properties *properties
);

block_state_id mc_26_3_light_blue_candle_cake_get_state(
	const mc_26_3_light_blue_candle_cake_properties *properties
);

b8 mc_26_3_light_blue_candle_cake_get_properties(
	block_state_id state,
	mc_26_3_light_blue_candle_cake_properties *properties
);

block_state_id mc_26_3_light_blue_concrete_slab_get_state(
	const mc_26_3_light_blue_concrete_slab_properties *properties
);

b8 mc_26_3_light_blue_concrete_slab_get_properties(
	block_state_id state,
	mc_26_3_light_blue_concrete_slab_properties *properties
);

block_state_id mc_26_3_light_blue_concrete_stairs_get_state(
	const mc_26_3_light_blue_concrete_stairs_properties *properties
);

b8 mc_26_3_light_blue_concrete_stairs_get_properties(
	block_state_id state,
	mc_26_3_light_blue_concrete_stairs_properties *properties
);

block_state_id mc_26_3_light_blue_glazed_terracotta_get_state(
	const mc_26_3_light_blue_glazed_terracotta_properties *properties
);

b8 mc_26_3_light_blue_glazed_terracotta_get_properties(
	block_state_id state,
	mc_26_3_light_blue_glazed_terracotta_properties *properties
);

block_state_id mc_26_3_light_blue_shulker_box_get_state(
	const mc_26_3_light_blue_shulker_box_properties *properties
);

b8 mc_26_3_light_blue_shulker_box_get_properties(
	block_state_id state,
	mc_26_3_light_blue_shulker_box_properties *properties
);

block_state_id mc_26_3_light_blue_stained_glass_pane_get_state(
	const mc_26_3_light_blue_stained_glass_pane_properties *properties
);

b8 mc_26_3_light_blue_stained_glass_pane_get_properties(
	block_state_id state,
	mc_26_3_light_blue_stained_glass_pane_properties *properties
);

block_state_id mc_26_3_light_blue_wall_banner_get_state(
	const mc_26_3_light_blue_wall_banner_properties *properties
);

b8 mc_26_3_light_blue_wall_banner_get_properties(
	block_state_id state,
	mc_26_3_light_blue_wall_banner_properties *properties
);

block_state_id mc_26_3_light_blue_wool_slab_get_state(
	const mc_26_3_light_blue_wool_slab_properties *properties
);

b8 mc_26_3_light_blue_wool_slab_get_properties(
	block_state_id state,
	mc_26_3_light_blue_wool_slab_properties *properties
);

block_state_id mc_26_3_light_blue_wool_stairs_get_state(
	const mc_26_3_light_blue_wool_stairs_properties *properties
);

b8 mc_26_3_light_blue_wool_stairs_get_properties(
	block_state_id state,
	mc_26_3_light_blue_wool_stairs_properties *properties
);

block_state_id mc_26_3_light_gray_banner_get_state(
	const mc_26_3_light_gray_banner_properties *properties
);

b8 mc_26_3_light_gray_banner_get_properties(
	block_state_id state,
	mc_26_3_light_gray_banner_properties *properties
);

block_state_id mc_26_3_light_gray_bed_get_state(
	const mc_26_3_light_gray_bed_properties *properties
);

b8 mc_26_3_light_gray_bed_get_properties(
	block_state_id state,
	mc_26_3_light_gray_bed_properties *properties
);

block_state_id mc_26_3_light_gray_candle_get_state(
	const mc_26_3_light_gray_candle_properties *properties
);

b8 mc_26_3_light_gray_candle_get_properties(
	block_state_id state,
	mc_26_3_light_gray_candle_properties *properties
);

block_state_id mc_26_3_light_gray_candle_cake_get_state(
	const mc_26_3_light_gray_candle_cake_properties *properties
);

b8 mc_26_3_light_gray_candle_cake_get_properties(
	block_state_id state,
	mc_26_3_light_gray_candle_cake_properties *properties
);

block_state_id mc_26_3_light_gray_concrete_slab_get_state(
	const mc_26_3_light_gray_concrete_slab_properties *properties
);

b8 mc_26_3_light_gray_concrete_slab_get_properties(
	block_state_id state,
	mc_26_3_light_gray_concrete_slab_properties *properties
);

block_state_id mc_26_3_light_gray_concrete_stairs_get_state(
	const mc_26_3_light_gray_concrete_stairs_properties *properties
);

b8 mc_26_3_light_gray_concrete_stairs_get_properties(
	block_state_id state,
	mc_26_3_light_gray_concrete_stairs_properties *properties
);

block_state_id mc_26_3_light_gray_glazed_terracotta_get_state(
	const mc_26_3_light_gray_glazed_terracotta_properties *properties
);

b8 mc_26_3_light_gray_glazed_terracotta_get_properties(
	block_state_id state,
	mc_26_3_light_gray_glazed_terracotta_properties *properties
);

block_state_id mc_26_3_light_gray_shulker_box_get_state(
	const mc_26_3_light_gray_shulker_box_properties *properties
);

b8 mc_26_3_light_gray_shulker_box_get_properties(
	block_state_id state,
	mc_26_3_light_gray_shulker_box_properties *properties
);

block_state_id mc_26_3_light_gray_stained_glass_pane_get_state(
	const mc_26_3_light_gray_stained_glass_pane_properties *properties
);

b8 mc_26_3_light_gray_stained_glass_pane_get_properties(
	block_state_id state,
	mc_26_3_light_gray_stained_glass_pane_properties *properties
);

block_state_id mc_26_3_light_gray_wall_banner_get_state(
	const mc_26_3_light_gray_wall_banner_properties *properties
);

b8 mc_26_3_light_gray_wall_banner_get_properties(
	block_state_id state,
	mc_26_3_light_gray_wall_banner_properties *properties
);

block_state_id mc_26_3_light_gray_wool_slab_get_state(
	const mc_26_3_light_gray_wool_slab_properties *properties
);

b8 mc_26_3_light_gray_wool_slab_get_properties(
	block_state_id state,
	mc_26_3_light_gray_wool_slab_properties *properties
);

block_state_id mc_26_3_light_gray_wool_stairs_get_state(
	const mc_26_3_light_gray_wool_stairs_properties *properties
);

b8 mc_26_3_light_gray_wool_stairs_get_properties(
	block_state_id state,
	mc_26_3_light_gray_wool_stairs_properties *properties
);

block_state_id mc_26_3_light_weighted_pressure_plate_get_state(
	const mc_26_3_light_weighted_pressure_plate_properties *properties
);

b8 mc_26_3_light_weighted_pressure_plate_get_properties(
	block_state_id state,
	mc_26_3_light_weighted_pressure_plate_properties *properties
);

block_state_id mc_26_3_lightning_rod_get_state(
	const mc_26_3_lightning_rod_properties *properties
);

b8 mc_26_3_lightning_rod_get_properties(
	block_state_id state,
	mc_26_3_lightning_rod_properties *properties
);

block_state_id mc_26_3_lilac_get_state(
	const mc_26_3_lilac_properties *properties
);

b8 mc_26_3_lilac_get_properties(
	block_state_id state,
	mc_26_3_lilac_properties *properties
);

block_state_id mc_26_3_lime_banner_get_state(
	const mc_26_3_lime_banner_properties *properties
);

b8 mc_26_3_lime_banner_get_properties(
	block_state_id state,
	mc_26_3_lime_banner_properties *properties
);

block_state_id mc_26_3_lime_bed_get_state(
	const mc_26_3_lime_bed_properties *properties
);

b8 mc_26_3_lime_bed_get_properties(
	block_state_id state,
	mc_26_3_lime_bed_properties *properties
);

block_state_id mc_26_3_lime_candle_get_state(
	const mc_26_3_lime_candle_properties *properties
);

b8 mc_26_3_lime_candle_get_properties(
	block_state_id state,
	mc_26_3_lime_candle_properties *properties
);

block_state_id mc_26_3_lime_candle_cake_get_state(
	const mc_26_3_lime_candle_cake_properties *properties
);

b8 mc_26_3_lime_candle_cake_get_properties(
	block_state_id state,
	mc_26_3_lime_candle_cake_properties *properties
);

block_state_id mc_26_3_lime_concrete_slab_get_state(
	const mc_26_3_lime_concrete_slab_properties *properties
);

b8 mc_26_3_lime_concrete_slab_get_properties(
	block_state_id state,
	mc_26_3_lime_concrete_slab_properties *properties
);

block_state_id mc_26_3_lime_concrete_stairs_get_state(
	const mc_26_3_lime_concrete_stairs_properties *properties
);

b8 mc_26_3_lime_concrete_stairs_get_properties(
	block_state_id state,
	mc_26_3_lime_concrete_stairs_properties *properties
);

block_state_id mc_26_3_lime_glazed_terracotta_get_state(
	const mc_26_3_lime_glazed_terracotta_properties *properties
);

b8 mc_26_3_lime_glazed_terracotta_get_properties(
	block_state_id state,
	mc_26_3_lime_glazed_terracotta_properties *properties
);

block_state_id mc_26_3_lime_shulker_box_get_state(
	const mc_26_3_lime_shulker_box_properties *properties
);

b8 mc_26_3_lime_shulker_box_get_properties(
	block_state_id state,
	mc_26_3_lime_shulker_box_properties *properties
);

block_state_id mc_26_3_lime_stained_glass_pane_get_state(
	const mc_26_3_lime_stained_glass_pane_properties *properties
);

b8 mc_26_3_lime_stained_glass_pane_get_properties(
	block_state_id state,
	mc_26_3_lime_stained_glass_pane_properties *properties
);

block_state_id mc_26_3_lime_wall_banner_get_state(
	const mc_26_3_lime_wall_banner_properties *properties
);

b8 mc_26_3_lime_wall_banner_get_properties(
	block_state_id state,
	mc_26_3_lime_wall_banner_properties *properties
);

block_state_id mc_26_3_lime_wool_slab_get_state(
	const mc_26_3_lime_wool_slab_properties *properties
);

b8 mc_26_3_lime_wool_slab_get_properties(
	block_state_id state,
	mc_26_3_lime_wool_slab_properties *properties
);

block_state_id mc_26_3_lime_wool_stairs_get_state(
	const mc_26_3_lime_wool_stairs_properties *properties
);

b8 mc_26_3_lime_wool_stairs_get_properties(
	block_state_id state,
	mc_26_3_lime_wool_stairs_properties *properties
);

block_state_id mc_26_3_loom_get_state(
	const mc_26_3_loom_properties *properties
);

b8 mc_26_3_loom_get_properties(
	block_state_id state,
	mc_26_3_loom_properties *properties
);

block_state_id mc_26_3_magenta_banner_get_state(
	const mc_26_3_magenta_banner_properties *properties
);

b8 mc_26_3_magenta_banner_get_properties(
	block_state_id state,
	mc_26_3_magenta_banner_properties *properties
);

block_state_id mc_26_3_magenta_bed_get_state(
	const mc_26_3_magenta_bed_properties *properties
);

b8 mc_26_3_magenta_bed_get_properties(
	block_state_id state,
	mc_26_3_magenta_bed_properties *properties
);

block_state_id mc_26_3_magenta_candle_get_state(
	const mc_26_3_magenta_candle_properties *properties
);

b8 mc_26_3_magenta_candle_get_properties(
	block_state_id state,
	mc_26_3_magenta_candle_properties *properties
);

block_state_id mc_26_3_magenta_candle_cake_get_state(
	const mc_26_3_magenta_candle_cake_properties *properties
);

b8 mc_26_3_magenta_candle_cake_get_properties(
	block_state_id state,
	mc_26_3_magenta_candle_cake_properties *properties
);

block_state_id mc_26_3_magenta_concrete_slab_get_state(
	const mc_26_3_magenta_concrete_slab_properties *properties
);

b8 mc_26_3_magenta_concrete_slab_get_properties(
	block_state_id state,
	mc_26_3_magenta_concrete_slab_properties *properties
);

block_state_id mc_26_3_magenta_concrete_stairs_get_state(
	const mc_26_3_magenta_concrete_stairs_properties *properties
);

b8 mc_26_3_magenta_concrete_stairs_get_properties(
	block_state_id state,
	mc_26_3_magenta_concrete_stairs_properties *properties
);

block_state_id mc_26_3_magenta_glazed_terracotta_get_state(
	const mc_26_3_magenta_glazed_terracotta_properties *properties
);

b8 mc_26_3_magenta_glazed_terracotta_get_properties(
	block_state_id state,
	mc_26_3_magenta_glazed_terracotta_properties *properties
);

block_state_id mc_26_3_magenta_shulker_box_get_state(
	const mc_26_3_magenta_shulker_box_properties *properties
);

b8 mc_26_3_magenta_shulker_box_get_properties(
	block_state_id state,
	mc_26_3_magenta_shulker_box_properties *properties
);

block_state_id mc_26_3_magenta_stained_glass_pane_get_state(
	const mc_26_3_magenta_stained_glass_pane_properties *properties
);

b8 mc_26_3_magenta_stained_glass_pane_get_properties(
	block_state_id state,
	mc_26_3_magenta_stained_glass_pane_properties *properties
);

block_state_id mc_26_3_magenta_wall_banner_get_state(
	const mc_26_3_magenta_wall_banner_properties *properties
);

b8 mc_26_3_magenta_wall_banner_get_properties(
	block_state_id state,
	mc_26_3_magenta_wall_banner_properties *properties
);

block_state_id mc_26_3_magenta_wool_slab_get_state(
	const mc_26_3_magenta_wool_slab_properties *properties
);

b8 mc_26_3_magenta_wool_slab_get_properties(
	block_state_id state,
	mc_26_3_magenta_wool_slab_properties *properties
);

block_state_id mc_26_3_magenta_wool_stairs_get_state(
	const mc_26_3_magenta_wool_stairs_properties *properties
);

b8 mc_26_3_magenta_wool_stairs_get_properties(
	block_state_id state,
	mc_26_3_magenta_wool_stairs_properties *properties
);

block_state_id mc_26_3_mangrove_button_get_state(
	const mc_26_3_mangrove_button_properties *properties
);

b8 mc_26_3_mangrove_button_get_properties(
	block_state_id state,
	mc_26_3_mangrove_button_properties *properties
);

block_state_id mc_26_3_mangrove_door_get_state(
	const mc_26_3_mangrove_door_properties *properties
);

b8 mc_26_3_mangrove_door_get_properties(
	block_state_id state,
	mc_26_3_mangrove_door_properties *properties
);

block_state_id mc_26_3_mangrove_fence_get_state(
	const mc_26_3_mangrove_fence_properties *properties
);

b8 mc_26_3_mangrove_fence_get_properties(
	block_state_id state,
	mc_26_3_mangrove_fence_properties *properties
);

block_state_id mc_26_3_mangrove_fence_gate_get_state(
	const mc_26_3_mangrove_fence_gate_properties *properties
);

b8 mc_26_3_mangrove_fence_gate_get_properties(
	block_state_id state,
	mc_26_3_mangrove_fence_gate_properties *properties
);

block_state_id mc_26_3_mangrove_hanging_sign_get_state(
	const mc_26_3_mangrove_hanging_sign_properties *properties
);

b8 mc_26_3_mangrove_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_mangrove_hanging_sign_properties *properties
);

block_state_id mc_26_3_mangrove_leaves_get_state(
	const mc_26_3_mangrove_leaves_properties *properties
);

b8 mc_26_3_mangrove_leaves_get_properties(
	block_state_id state,
	mc_26_3_mangrove_leaves_properties *properties
);

block_state_id mc_26_3_mangrove_log_get_state(
	const mc_26_3_mangrove_log_properties *properties
);

b8 mc_26_3_mangrove_log_get_properties(
	block_state_id state,
	mc_26_3_mangrove_log_properties *properties
);

block_state_id mc_26_3_mangrove_pressure_plate_get_state(
	const mc_26_3_mangrove_pressure_plate_properties *properties
);

b8 mc_26_3_mangrove_pressure_plate_get_properties(
	block_state_id state,
	mc_26_3_mangrove_pressure_plate_properties *properties
);

block_state_id mc_26_3_mangrove_propagule_get_state(
	const mc_26_3_mangrove_propagule_properties *properties
);

b8 mc_26_3_mangrove_propagule_get_properties(
	block_state_id state,
	mc_26_3_mangrove_propagule_properties *properties
);

block_state_id mc_26_3_mangrove_roots_get_state(
	const mc_26_3_mangrove_roots_properties *properties
);

b8 mc_26_3_mangrove_roots_get_properties(
	block_state_id state,
	mc_26_3_mangrove_roots_properties *properties
);

block_state_id mc_26_3_mangrove_shelf_get_state(
	const mc_26_3_mangrove_shelf_properties *properties
);

b8 mc_26_3_mangrove_shelf_get_properties(
	block_state_id state,
	mc_26_3_mangrove_shelf_properties *properties
);

block_state_id mc_26_3_mangrove_sign_get_state(
	const mc_26_3_mangrove_sign_properties *properties
);

b8 mc_26_3_mangrove_sign_get_properties(
	block_state_id state,
	mc_26_3_mangrove_sign_properties *properties
);

block_state_id mc_26_3_mangrove_slab_get_state(
	const mc_26_3_mangrove_slab_properties *properties
);

b8 mc_26_3_mangrove_slab_get_properties(
	block_state_id state,
	mc_26_3_mangrove_slab_properties *properties
);

block_state_id mc_26_3_mangrove_stairs_get_state(
	const mc_26_3_mangrove_stairs_properties *properties
);

b8 mc_26_3_mangrove_stairs_get_properties(
	block_state_id state,
	mc_26_3_mangrove_stairs_properties *properties
);

block_state_id mc_26_3_mangrove_trapdoor_get_state(
	const mc_26_3_mangrove_trapdoor_properties *properties
);

b8 mc_26_3_mangrove_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_mangrove_trapdoor_properties *properties
);

block_state_id mc_26_3_mangrove_wall_hanging_sign_get_state(
	const mc_26_3_mangrove_wall_hanging_sign_properties *properties
);

b8 mc_26_3_mangrove_wall_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_mangrove_wall_hanging_sign_properties *properties
);

block_state_id mc_26_3_mangrove_wall_sign_get_state(
	const mc_26_3_mangrove_wall_sign_properties *properties
);

b8 mc_26_3_mangrove_wall_sign_get_properties(
	block_state_id state,
	mc_26_3_mangrove_wall_sign_properties *properties
);

block_state_id mc_26_3_mangrove_wood_get_state(
	const mc_26_3_mangrove_wood_properties *properties
);

b8 mc_26_3_mangrove_wood_get_properties(
	block_state_id state,
	mc_26_3_mangrove_wood_properties *properties
);

block_state_id mc_26_3_medium_amethyst_bud_get_state(
	const mc_26_3_medium_amethyst_bud_properties *properties
);

b8 mc_26_3_medium_amethyst_bud_get_properties(
	block_state_id state,
	mc_26_3_medium_amethyst_bud_properties *properties
);

block_state_id mc_26_3_melon_stem_get_state(
	const mc_26_3_melon_stem_properties *properties
);

b8 mc_26_3_melon_stem_get_properties(
	block_state_id state,
	mc_26_3_melon_stem_properties *properties
);

block_state_id mc_26_3_mossy_cobblestone_slab_get_state(
	const mc_26_3_mossy_cobblestone_slab_properties *properties
);

b8 mc_26_3_mossy_cobblestone_slab_get_properties(
	block_state_id state,
	mc_26_3_mossy_cobblestone_slab_properties *properties
);

block_state_id mc_26_3_mossy_cobblestone_stairs_get_state(
	const mc_26_3_mossy_cobblestone_stairs_properties *properties
);

b8 mc_26_3_mossy_cobblestone_stairs_get_properties(
	block_state_id state,
	mc_26_3_mossy_cobblestone_stairs_properties *properties
);

block_state_id mc_26_3_mossy_cobblestone_wall_get_state(
	const mc_26_3_mossy_cobblestone_wall_properties *properties
);

b8 mc_26_3_mossy_cobblestone_wall_get_properties(
	block_state_id state,
	mc_26_3_mossy_cobblestone_wall_properties *properties
);

block_state_id mc_26_3_mossy_stone_brick_slab_get_state(
	const mc_26_3_mossy_stone_brick_slab_properties *properties
);

b8 mc_26_3_mossy_stone_brick_slab_get_properties(
	block_state_id state,
	mc_26_3_mossy_stone_brick_slab_properties *properties
);

block_state_id mc_26_3_mossy_stone_brick_stairs_get_state(
	const mc_26_3_mossy_stone_brick_stairs_properties *properties
);

b8 mc_26_3_mossy_stone_brick_stairs_get_properties(
	block_state_id state,
	mc_26_3_mossy_stone_brick_stairs_properties *properties
);

block_state_id mc_26_3_mossy_stone_brick_wall_get_state(
	const mc_26_3_mossy_stone_brick_wall_properties *properties
);

b8 mc_26_3_mossy_stone_brick_wall_get_properties(
	block_state_id state,
	mc_26_3_mossy_stone_brick_wall_properties *properties
);

block_state_id mc_26_3_moving_piston_get_state(
	const mc_26_3_moving_piston_properties *properties
);

b8 mc_26_3_moving_piston_get_properties(
	block_state_id state,
	mc_26_3_moving_piston_properties *properties
);

block_state_id mc_26_3_mud_brick_slab_get_state(
	const mc_26_3_mud_brick_slab_properties *properties
);

b8 mc_26_3_mud_brick_slab_get_properties(
	block_state_id state,
	mc_26_3_mud_brick_slab_properties *properties
);

block_state_id mc_26_3_mud_brick_stairs_get_state(
	const mc_26_3_mud_brick_stairs_properties *properties
);

b8 mc_26_3_mud_brick_stairs_get_properties(
	block_state_id state,
	mc_26_3_mud_brick_stairs_properties *properties
);

block_state_id mc_26_3_mud_brick_wall_get_state(
	const mc_26_3_mud_brick_wall_properties *properties
);

b8 mc_26_3_mud_brick_wall_get_properties(
	block_state_id state,
	mc_26_3_mud_brick_wall_properties *properties
);

block_state_id mc_26_3_muddy_mangrove_roots_get_state(
	const mc_26_3_muddy_mangrove_roots_properties *properties
);

b8 mc_26_3_muddy_mangrove_roots_get_properties(
	block_state_id state,
	mc_26_3_muddy_mangrove_roots_properties *properties
);

block_state_id mc_26_3_mushroom_stem_get_state(
	const mc_26_3_mushroom_stem_properties *properties
);

b8 mc_26_3_mushroom_stem_get_properties(
	block_state_id state,
	mc_26_3_mushroom_stem_properties *properties
);

block_state_id mc_26_3_mycelium_get_state(
	const mc_26_3_mycelium_properties *properties
);

b8 mc_26_3_mycelium_get_properties(
	block_state_id state,
	mc_26_3_mycelium_properties *properties
);

block_state_id mc_26_3_nether_brick_fence_get_state(
	const mc_26_3_nether_brick_fence_properties *properties
);

b8 mc_26_3_nether_brick_fence_get_properties(
	block_state_id state,
	mc_26_3_nether_brick_fence_properties *properties
);

block_state_id mc_26_3_nether_brick_slab_get_state(
	const mc_26_3_nether_brick_slab_properties *properties
);

b8 mc_26_3_nether_brick_slab_get_properties(
	block_state_id state,
	mc_26_3_nether_brick_slab_properties *properties
);

block_state_id mc_26_3_nether_brick_stairs_get_state(
	const mc_26_3_nether_brick_stairs_properties *properties
);

b8 mc_26_3_nether_brick_stairs_get_properties(
	block_state_id state,
	mc_26_3_nether_brick_stairs_properties *properties
);

block_state_id mc_26_3_nether_brick_wall_get_state(
	const mc_26_3_nether_brick_wall_properties *properties
);

b8 mc_26_3_nether_brick_wall_get_properties(
	block_state_id state,
	mc_26_3_nether_brick_wall_properties *properties
);

block_state_id mc_26_3_nether_portal_get_state(
	const mc_26_3_nether_portal_properties *properties
);

b8 mc_26_3_nether_portal_get_properties(
	block_state_id state,
	mc_26_3_nether_portal_properties *properties
);

block_state_id mc_26_3_nether_wart_get_state(
	const mc_26_3_nether_wart_properties *properties
);

b8 mc_26_3_nether_wart_get_properties(
	block_state_id state,
	mc_26_3_nether_wart_properties *properties
);

block_state_id mc_26_3_note_block_get_state(
	const mc_26_3_note_block_properties *properties
);

b8 mc_26_3_note_block_get_properties(
	block_state_id state,
	mc_26_3_note_block_properties *properties
);

block_state_id mc_26_3_oak_button_get_state(
	const mc_26_3_oak_button_properties *properties
);

b8 mc_26_3_oak_button_get_properties(
	block_state_id state,
	mc_26_3_oak_button_properties *properties
);

block_state_id mc_26_3_oak_door_get_state(
	const mc_26_3_oak_door_properties *properties
);

b8 mc_26_3_oak_door_get_properties(
	block_state_id state,
	mc_26_3_oak_door_properties *properties
);

block_state_id mc_26_3_oak_fence_get_state(
	const mc_26_3_oak_fence_properties *properties
);

b8 mc_26_3_oak_fence_get_properties(
	block_state_id state,
	mc_26_3_oak_fence_properties *properties
);

block_state_id mc_26_3_oak_fence_gate_get_state(
	const mc_26_3_oak_fence_gate_properties *properties
);

b8 mc_26_3_oak_fence_gate_get_properties(
	block_state_id state,
	mc_26_3_oak_fence_gate_properties *properties
);

block_state_id mc_26_3_oak_hanging_sign_get_state(
	const mc_26_3_oak_hanging_sign_properties *properties
);

b8 mc_26_3_oak_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_oak_hanging_sign_properties *properties
);

block_state_id mc_26_3_oak_leaves_get_state(
	const mc_26_3_oak_leaves_properties *properties
);

b8 mc_26_3_oak_leaves_get_properties(
	block_state_id state,
	mc_26_3_oak_leaves_properties *properties
);

block_state_id mc_26_3_oak_log_get_state(
	const mc_26_3_oak_log_properties *properties
);

b8 mc_26_3_oak_log_get_properties(
	block_state_id state,
	mc_26_3_oak_log_properties *properties
);

block_state_id mc_26_3_oak_pressure_plate_get_state(
	const mc_26_3_oak_pressure_plate_properties *properties
);

b8 mc_26_3_oak_pressure_plate_get_properties(
	block_state_id state,
	mc_26_3_oak_pressure_plate_properties *properties
);

block_state_id mc_26_3_oak_sapling_get_state(
	const mc_26_3_oak_sapling_properties *properties
);

b8 mc_26_3_oak_sapling_get_properties(
	block_state_id state,
	mc_26_3_oak_sapling_properties *properties
);

block_state_id mc_26_3_oak_shelf_get_state(
	const mc_26_3_oak_shelf_properties *properties
);

b8 mc_26_3_oak_shelf_get_properties(
	block_state_id state,
	mc_26_3_oak_shelf_properties *properties
);

block_state_id mc_26_3_oak_sign_get_state(
	const mc_26_3_oak_sign_properties *properties
);

b8 mc_26_3_oak_sign_get_properties(
	block_state_id state,
	mc_26_3_oak_sign_properties *properties
);

block_state_id mc_26_3_oak_slab_get_state(
	const mc_26_3_oak_slab_properties *properties
);

b8 mc_26_3_oak_slab_get_properties(
	block_state_id state,
	mc_26_3_oak_slab_properties *properties
);

block_state_id mc_26_3_oak_stairs_get_state(
	const mc_26_3_oak_stairs_properties *properties
);

b8 mc_26_3_oak_stairs_get_properties(
	block_state_id state,
	mc_26_3_oak_stairs_properties *properties
);

block_state_id mc_26_3_oak_trapdoor_get_state(
	const mc_26_3_oak_trapdoor_properties *properties
);

b8 mc_26_3_oak_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_oak_trapdoor_properties *properties
);

block_state_id mc_26_3_oak_wall_hanging_sign_get_state(
	const mc_26_3_oak_wall_hanging_sign_properties *properties
);

b8 mc_26_3_oak_wall_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_oak_wall_hanging_sign_properties *properties
);

block_state_id mc_26_3_oak_wall_sign_get_state(
	const mc_26_3_oak_wall_sign_properties *properties
);

b8 mc_26_3_oak_wall_sign_get_properties(
	block_state_id state,
	mc_26_3_oak_wall_sign_properties *properties
);

block_state_id mc_26_3_oak_wood_get_state(
	const mc_26_3_oak_wood_properties *properties
);

b8 mc_26_3_oak_wood_get_properties(
	block_state_id state,
	mc_26_3_oak_wood_properties *properties
);

block_state_id mc_26_3_observer_get_state(
	const mc_26_3_observer_properties *properties
);

b8 mc_26_3_observer_get_properties(
	block_state_id state,
	mc_26_3_observer_properties *properties
);

block_state_id mc_26_3_ochre_froglight_get_state(
	const mc_26_3_ochre_froglight_properties *properties
);

b8 mc_26_3_ochre_froglight_get_properties(
	block_state_id state,
	mc_26_3_ochre_froglight_properties *properties
);

block_state_id mc_26_3_orange_banner_get_state(
	const mc_26_3_orange_banner_properties *properties
);

b8 mc_26_3_orange_banner_get_properties(
	block_state_id state,
	mc_26_3_orange_banner_properties *properties
);

block_state_id mc_26_3_orange_bed_get_state(
	const mc_26_3_orange_bed_properties *properties
);

b8 mc_26_3_orange_bed_get_properties(
	block_state_id state,
	mc_26_3_orange_bed_properties *properties
);

block_state_id mc_26_3_orange_candle_get_state(
	const mc_26_3_orange_candle_properties *properties
);

b8 mc_26_3_orange_candle_get_properties(
	block_state_id state,
	mc_26_3_orange_candle_properties *properties
);

block_state_id mc_26_3_orange_candle_cake_get_state(
	const mc_26_3_orange_candle_cake_properties *properties
);

b8 mc_26_3_orange_candle_cake_get_properties(
	block_state_id state,
	mc_26_3_orange_candle_cake_properties *properties
);

block_state_id mc_26_3_orange_concrete_slab_get_state(
	const mc_26_3_orange_concrete_slab_properties *properties
);

b8 mc_26_3_orange_concrete_slab_get_properties(
	block_state_id state,
	mc_26_3_orange_concrete_slab_properties *properties
);

block_state_id mc_26_3_orange_concrete_stairs_get_state(
	const mc_26_3_orange_concrete_stairs_properties *properties
);

b8 mc_26_3_orange_concrete_stairs_get_properties(
	block_state_id state,
	mc_26_3_orange_concrete_stairs_properties *properties
);

block_state_id mc_26_3_orange_glazed_terracotta_get_state(
	const mc_26_3_orange_glazed_terracotta_properties *properties
);

b8 mc_26_3_orange_glazed_terracotta_get_properties(
	block_state_id state,
	mc_26_3_orange_glazed_terracotta_properties *properties
);

block_state_id mc_26_3_orange_poplar_leaves_get_state(
	const mc_26_3_orange_poplar_leaves_properties *properties
);

b8 mc_26_3_orange_poplar_leaves_get_properties(
	block_state_id state,
	mc_26_3_orange_poplar_leaves_properties *properties
);

block_state_id mc_26_3_orange_shulker_box_get_state(
	const mc_26_3_orange_shulker_box_properties *properties
);

b8 mc_26_3_orange_shulker_box_get_properties(
	block_state_id state,
	mc_26_3_orange_shulker_box_properties *properties
);

block_state_id mc_26_3_orange_stained_glass_pane_get_state(
	const mc_26_3_orange_stained_glass_pane_properties *properties
);

b8 mc_26_3_orange_stained_glass_pane_get_properties(
	block_state_id state,
	mc_26_3_orange_stained_glass_pane_properties *properties
);

block_state_id mc_26_3_orange_wall_banner_get_state(
	const mc_26_3_orange_wall_banner_properties *properties
);

b8 mc_26_3_orange_wall_banner_get_properties(
	block_state_id state,
	mc_26_3_orange_wall_banner_properties *properties
);

block_state_id mc_26_3_orange_wool_slab_get_state(
	const mc_26_3_orange_wool_slab_properties *properties
);

b8 mc_26_3_orange_wool_slab_get_properties(
	block_state_id state,
	mc_26_3_orange_wool_slab_properties *properties
);

block_state_id mc_26_3_orange_wool_stairs_get_state(
	const mc_26_3_orange_wool_stairs_properties *properties
);

b8 mc_26_3_orange_wool_stairs_get_properties(
	block_state_id state,
	mc_26_3_orange_wool_stairs_properties *properties
);

block_state_id mc_26_3_oxidized_copper_bars_get_state(
	const mc_26_3_oxidized_copper_bars_properties *properties
);

b8 mc_26_3_oxidized_copper_bars_get_properties(
	block_state_id state,
	mc_26_3_oxidized_copper_bars_properties *properties
);

block_state_id mc_26_3_oxidized_copper_bulb_get_state(
	const mc_26_3_oxidized_copper_bulb_properties *properties
);

b8 mc_26_3_oxidized_copper_bulb_get_properties(
	block_state_id state,
	mc_26_3_oxidized_copper_bulb_properties *properties
);

block_state_id mc_26_3_oxidized_copper_chain_get_state(
	const mc_26_3_oxidized_copper_chain_properties *properties
);

b8 mc_26_3_oxidized_copper_chain_get_properties(
	block_state_id state,
	mc_26_3_oxidized_copper_chain_properties *properties
);

block_state_id mc_26_3_oxidized_copper_chest_get_state(
	const mc_26_3_oxidized_copper_chest_properties *properties
);

b8 mc_26_3_oxidized_copper_chest_get_properties(
	block_state_id state,
	mc_26_3_oxidized_copper_chest_properties *properties
);

block_state_id mc_26_3_oxidized_copper_door_get_state(
	const mc_26_3_oxidized_copper_door_properties *properties
);

b8 mc_26_3_oxidized_copper_door_get_properties(
	block_state_id state,
	mc_26_3_oxidized_copper_door_properties *properties
);

block_state_id mc_26_3_oxidized_copper_golem_statue_get_state(
	const mc_26_3_oxidized_copper_golem_statue_properties *properties
);

b8 mc_26_3_oxidized_copper_golem_statue_get_properties(
	block_state_id state,
	mc_26_3_oxidized_copper_golem_statue_properties *properties
);

block_state_id mc_26_3_oxidized_copper_grate_get_state(
	const mc_26_3_oxidized_copper_grate_properties *properties
);

b8 mc_26_3_oxidized_copper_grate_get_properties(
	block_state_id state,
	mc_26_3_oxidized_copper_grate_properties *properties
);

block_state_id mc_26_3_oxidized_copper_lantern_get_state(
	const mc_26_3_oxidized_copper_lantern_properties *properties
);

b8 mc_26_3_oxidized_copper_lantern_get_properties(
	block_state_id state,
	mc_26_3_oxidized_copper_lantern_properties *properties
);

block_state_id mc_26_3_oxidized_copper_trapdoor_get_state(
	const mc_26_3_oxidized_copper_trapdoor_properties *properties
);

b8 mc_26_3_oxidized_copper_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_oxidized_copper_trapdoor_properties *properties
);

block_state_id mc_26_3_oxidized_cut_copper_slab_get_state(
	const mc_26_3_oxidized_cut_copper_slab_properties *properties
);

b8 mc_26_3_oxidized_cut_copper_slab_get_properties(
	block_state_id state,
	mc_26_3_oxidized_cut_copper_slab_properties *properties
);

block_state_id mc_26_3_oxidized_cut_copper_stairs_get_state(
	const mc_26_3_oxidized_cut_copper_stairs_properties *properties
);

b8 mc_26_3_oxidized_cut_copper_stairs_get_properties(
	block_state_id state,
	mc_26_3_oxidized_cut_copper_stairs_properties *properties
);

block_state_id mc_26_3_oxidized_lightning_rod_get_state(
	const mc_26_3_oxidized_lightning_rod_properties *properties
);

b8 mc_26_3_oxidized_lightning_rod_get_properties(
	block_state_id state,
	mc_26_3_oxidized_lightning_rod_properties *properties
);

block_state_id mc_26_3_pale_hanging_moss_get_state(
	const mc_26_3_pale_hanging_moss_properties *properties
);

b8 mc_26_3_pale_hanging_moss_get_properties(
	block_state_id state,
	mc_26_3_pale_hanging_moss_properties *properties
);

block_state_id mc_26_3_pale_moss_carpet_get_state(
	const mc_26_3_pale_moss_carpet_properties *properties
);

b8 mc_26_3_pale_moss_carpet_get_properties(
	block_state_id state,
	mc_26_3_pale_moss_carpet_properties *properties
);

block_state_id mc_26_3_pale_oak_button_get_state(
	const mc_26_3_pale_oak_button_properties *properties
);

b8 mc_26_3_pale_oak_button_get_properties(
	block_state_id state,
	mc_26_3_pale_oak_button_properties *properties
);

block_state_id mc_26_3_pale_oak_door_get_state(
	const mc_26_3_pale_oak_door_properties *properties
);

b8 mc_26_3_pale_oak_door_get_properties(
	block_state_id state,
	mc_26_3_pale_oak_door_properties *properties
);

block_state_id mc_26_3_pale_oak_fence_get_state(
	const mc_26_3_pale_oak_fence_properties *properties
);

b8 mc_26_3_pale_oak_fence_get_properties(
	block_state_id state,
	mc_26_3_pale_oak_fence_properties *properties
);

block_state_id mc_26_3_pale_oak_fence_gate_get_state(
	const mc_26_3_pale_oak_fence_gate_properties *properties
);

b8 mc_26_3_pale_oak_fence_gate_get_properties(
	block_state_id state,
	mc_26_3_pale_oak_fence_gate_properties *properties
);

block_state_id mc_26_3_pale_oak_hanging_sign_get_state(
	const mc_26_3_pale_oak_hanging_sign_properties *properties
);

b8 mc_26_3_pale_oak_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_pale_oak_hanging_sign_properties *properties
);

block_state_id mc_26_3_pale_oak_leaves_get_state(
	const mc_26_3_pale_oak_leaves_properties *properties
);

b8 mc_26_3_pale_oak_leaves_get_properties(
	block_state_id state,
	mc_26_3_pale_oak_leaves_properties *properties
);

block_state_id mc_26_3_pale_oak_log_get_state(
	const mc_26_3_pale_oak_log_properties *properties
);

b8 mc_26_3_pale_oak_log_get_properties(
	block_state_id state,
	mc_26_3_pale_oak_log_properties *properties
);

block_state_id mc_26_3_pale_oak_pressure_plate_get_state(
	const mc_26_3_pale_oak_pressure_plate_properties *properties
);

b8 mc_26_3_pale_oak_pressure_plate_get_properties(
	block_state_id state,
	mc_26_3_pale_oak_pressure_plate_properties *properties
);

block_state_id mc_26_3_pale_oak_sapling_get_state(
	const mc_26_3_pale_oak_sapling_properties *properties
);

b8 mc_26_3_pale_oak_sapling_get_properties(
	block_state_id state,
	mc_26_3_pale_oak_sapling_properties *properties
);

block_state_id mc_26_3_pale_oak_shelf_get_state(
	const mc_26_3_pale_oak_shelf_properties *properties
);

b8 mc_26_3_pale_oak_shelf_get_properties(
	block_state_id state,
	mc_26_3_pale_oak_shelf_properties *properties
);

block_state_id mc_26_3_pale_oak_sign_get_state(
	const mc_26_3_pale_oak_sign_properties *properties
);

b8 mc_26_3_pale_oak_sign_get_properties(
	block_state_id state,
	mc_26_3_pale_oak_sign_properties *properties
);

block_state_id mc_26_3_pale_oak_slab_get_state(
	const mc_26_3_pale_oak_slab_properties *properties
);

b8 mc_26_3_pale_oak_slab_get_properties(
	block_state_id state,
	mc_26_3_pale_oak_slab_properties *properties
);

block_state_id mc_26_3_pale_oak_stairs_get_state(
	const mc_26_3_pale_oak_stairs_properties *properties
);

b8 mc_26_3_pale_oak_stairs_get_properties(
	block_state_id state,
	mc_26_3_pale_oak_stairs_properties *properties
);

block_state_id mc_26_3_pale_oak_trapdoor_get_state(
	const mc_26_3_pale_oak_trapdoor_properties *properties
);

b8 mc_26_3_pale_oak_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_pale_oak_trapdoor_properties *properties
);

block_state_id mc_26_3_pale_oak_wall_hanging_sign_get_state(
	const mc_26_3_pale_oak_wall_hanging_sign_properties *properties
);

b8 mc_26_3_pale_oak_wall_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_pale_oak_wall_hanging_sign_properties *properties
);

block_state_id mc_26_3_pale_oak_wall_sign_get_state(
	const mc_26_3_pale_oak_wall_sign_properties *properties
);

b8 mc_26_3_pale_oak_wall_sign_get_properties(
	block_state_id state,
	mc_26_3_pale_oak_wall_sign_properties *properties
);

block_state_id mc_26_3_pale_oak_wood_get_state(
	const mc_26_3_pale_oak_wood_properties *properties
);

b8 mc_26_3_pale_oak_wood_get_properties(
	block_state_id state,
	mc_26_3_pale_oak_wood_properties *properties
);

block_state_id mc_26_3_pearlescent_froglight_get_state(
	const mc_26_3_pearlescent_froglight_properties *properties
);

b8 mc_26_3_pearlescent_froglight_get_properties(
	block_state_id state,
	mc_26_3_pearlescent_froglight_properties *properties
);

block_state_id mc_26_3_peony_get_state(
	const mc_26_3_peony_properties *properties
);

b8 mc_26_3_peony_get_properties(
	block_state_id state,
	mc_26_3_peony_properties *properties
);

block_state_id mc_26_3_petrified_oak_slab_get_state(
	const mc_26_3_petrified_oak_slab_properties *properties
);

b8 mc_26_3_petrified_oak_slab_get_properties(
	block_state_id state,
	mc_26_3_petrified_oak_slab_properties *properties
);

block_state_id mc_26_3_piglin_head_get_state(
	const mc_26_3_piglin_head_properties *properties
);

b8 mc_26_3_piglin_head_get_properties(
	block_state_id state,
	mc_26_3_piglin_head_properties *properties
);

block_state_id mc_26_3_piglin_wall_head_get_state(
	const mc_26_3_piglin_wall_head_properties *properties
);

b8 mc_26_3_piglin_wall_head_get_properties(
	block_state_id state,
	mc_26_3_piglin_wall_head_properties *properties
);

block_state_id mc_26_3_pink_banner_get_state(
	const mc_26_3_pink_banner_properties *properties
);

b8 mc_26_3_pink_banner_get_properties(
	block_state_id state,
	mc_26_3_pink_banner_properties *properties
);

block_state_id mc_26_3_pink_bed_get_state(
	const mc_26_3_pink_bed_properties *properties
);

b8 mc_26_3_pink_bed_get_properties(
	block_state_id state,
	mc_26_3_pink_bed_properties *properties
);

block_state_id mc_26_3_pink_candle_get_state(
	const mc_26_3_pink_candle_properties *properties
);

b8 mc_26_3_pink_candle_get_properties(
	block_state_id state,
	mc_26_3_pink_candle_properties *properties
);

block_state_id mc_26_3_pink_candle_cake_get_state(
	const mc_26_3_pink_candle_cake_properties *properties
);

b8 mc_26_3_pink_candle_cake_get_properties(
	block_state_id state,
	mc_26_3_pink_candle_cake_properties *properties
);

block_state_id mc_26_3_pink_concrete_slab_get_state(
	const mc_26_3_pink_concrete_slab_properties *properties
);

b8 mc_26_3_pink_concrete_slab_get_properties(
	block_state_id state,
	mc_26_3_pink_concrete_slab_properties *properties
);

block_state_id mc_26_3_pink_concrete_stairs_get_state(
	const mc_26_3_pink_concrete_stairs_properties *properties
);

b8 mc_26_3_pink_concrete_stairs_get_properties(
	block_state_id state,
	mc_26_3_pink_concrete_stairs_properties *properties
);

block_state_id mc_26_3_pink_glazed_terracotta_get_state(
	const mc_26_3_pink_glazed_terracotta_properties *properties
);

b8 mc_26_3_pink_glazed_terracotta_get_properties(
	block_state_id state,
	mc_26_3_pink_glazed_terracotta_properties *properties
);

block_state_id mc_26_3_pink_petals_get_state(
	const mc_26_3_pink_petals_properties *properties
);

b8 mc_26_3_pink_petals_get_properties(
	block_state_id state,
	mc_26_3_pink_petals_properties *properties
);

block_state_id mc_26_3_pink_shulker_box_get_state(
	const mc_26_3_pink_shulker_box_properties *properties
);

b8 mc_26_3_pink_shulker_box_get_properties(
	block_state_id state,
	mc_26_3_pink_shulker_box_properties *properties
);

block_state_id mc_26_3_pink_stained_glass_pane_get_state(
	const mc_26_3_pink_stained_glass_pane_properties *properties
);

b8 mc_26_3_pink_stained_glass_pane_get_properties(
	block_state_id state,
	mc_26_3_pink_stained_glass_pane_properties *properties
);

block_state_id mc_26_3_pink_wall_banner_get_state(
	const mc_26_3_pink_wall_banner_properties *properties
);

b8 mc_26_3_pink_wall_banner_get_properties(
	block_state_id state,
	mc_26_3_pink_wall_banner_properties *properties
);

block_state_id mc_26_3_pink_wool_slab_get_state(
	const mc_26_3_pink_wool_slab_properties *properties
);

b8 mc_26_3_pink_wool_slab_get_properties(
	block_state_id state,
	mc_26_3_pink_wool_slab_properties *properties
);

block_state_id mc_26_3_pink_wool_stairs_get_state(
	const mc_26_3_pink_wool_stairs_properties *properties
);

b8 mc_26_3_pink_wool_stairs_get_properties(
	block_state_id state,
	mc_26_3_pink_wool_stairs_properties *properties
);

block_state_id mc_26_3_piston_get_state(
	const mc_26_3_piston_properties *properties
);

b8 mc_26_3_piston_get_properties(
	block_state_id state,
	mc_26_3_piston_properties *properties
);

block_state_id mc_26_3_piston_head_get_state(
	const mc_26_3_piston_head_properties *properties
);

b8 mc_26_3_piston_head_get_properties(
	block_state_id state,
	mc_26_3_piston_head_properties *properties
);

block_state_id mc_26_3_pitcher_crop_get_state(
	const mc_26_3_pitcher_crop_properties *properties
);

b8 mc_26_3_pitcher_crop_get_properties(
	block_state_id state,
	mc_26_3_pitcher_crop_properties *properties
);

block_state_id mc_26_3_pitcher_plant_get_state(
	const mc_26_3_pitcher_plant_properties *properties
);

b8 mc_26_3_pitcher_plant_get_properties(
	block_state_id state,
	mc_26_3_pitcher_plant_properties *properties
);

block_state_id mc_26_3_player_head_get_state(
	const mc_26_3_player_head_properties *properties
);

b8 mc_26_3_player_head_get_properties(
	block_state_id state,
	mc_26_3_player_head_properties *properties
);

block_state_id mc_26_3_player_wall_head_get_state(
	const mc_26_3_player_wall_head_properties *properties
);

b8 mc_26_3_player_wall_head_get_properties(
	block_state_id state,
	mc_26_3_player_wall_head_properties *properties
);

block_state_id mc_26_3_podzol_get_state(
	const mc_26_3_podzol_properties *properties
);

b8 mc_26_3_podzol_get_properties(
	block_state_id state,
	mc_26_3_podzol_properties *properties
);

block_state_id mc_26_3_pointed_dripstone_get_state(
	const mc_26_3_pointed_dripstone_properties *properties
);

b8 mc_26_3_pointed_dripstone_get_properties(
	block_state_id state,
	mc_26_3_pointed_dripstone_properties *properties
);

block_state_id mc_26_3_polished_andesite_slab_get_state(
	const mc_26_3_polished_andesite_slab_properties *properties
);

b8 mc_26_3_polished_andesite_slab_get_properties(
	block_state_id state,
	mc_26_3_polished_andesite_slab_properties *properties
);

block_state_id mc_26_3_polished_andesite_stairs_get_state(
	const mc_26_3_polished_andesite_stairs_properties *properties
);

b8 mc_26_3_polished_andesite_stairs_get_properties(
	block_state_id state,
	mc_26_3_polished_andesite_stairs_properties *properties
);

block_state_id mc_26_3_polished_basalt_get_state(
	const mc_26_3_polished_basalt_properties *properties
);

b8 mc_26_3_polished_basalt_get_properties(
	block_state_id state,
	mc_26_3_polished_basalt_properties *properties
);

block_state_id mc_26_3_polished_blackstone_brick_slab_get_state(
	const mc_26_3_polished_blackstone_brick_slab_properties *properties
);

b8 mc_26_3_polished_blackstone_brick_slab_get_properties(
	block_state_id state,
	mc_26_3_polished_blackstone_brick_slab_properties *properties
);

block_state_id mc_26_3_polished_blackstone_brick_stairs_get_state(
	const mc_26_3_polished_blackstone_brick_stairs_properties *properties
);

b8 mc_26_3_polished_blackstone_brick_stairs_get_properties(
	block_state_id state,
	mc_26_3_polished_blackstone_brick_stairs_properties *properties
);

block_state_id mc_26_3_polished_blackstone_brick_wall_get_state(
	const mc_26_3_polished_blackstone_brick_wall_properties *properties
);

b8 mc_26_3_polished_blackstone_brick_wall_get_properties(
	block_state_id state,
	mc_26_3_polished_blackstone_brick_wall_properties *properties
);

block_state_id mc_26_3_polished_blackstone_button_get_state(
	const mc_26_3_polished_blackstone_button_properties *properties
);

b8 mc_26_3_polished_blackstone_button_get_properties(
	block_state_id state,
	mc_26_3_polished_blackstone_button_properties *properties
);

block_state_id mc_26_3_polished_blackstone_pressure_plate_get_state(
	const mc_26_3_polished_blackstone_pressure_plate_properties *properties
);

b8 mc_26_3_polished_blackstone_pressure_plate_get_properties(
	block_state_id state,
	mc_26_3_polished_blackstone_pressure_plate_properties *properties
);

block_state_id mc_26_3_polished_blackstone_slab_get_state(
	const mc_26_3_polished_blackstone_slab_properties *properties
);

b8 mc_26_3_polished_blackstone_slab_get_properties(
	block_state_id state,
	mc_26_3_polished_blackstone_slab_properties *properties
);

block_state_id mc_26_3_polished_blackstone_stairs_get_state(
	const mc_26_3_polished_blackstone_stairs_properties *properties
);

b8 mc_26_3_polished_blackstone_stairs_get_properties(
	block_state_id state,
	mc_26_3_polished_blackstone_stairs_properties *properties
);

block_state_id mc_26_3_polished_blackstone_wall_get_state(
	const mc_26_3_polished_blackstone_wall_properties *properties
);

b8 mc_26_3_polished_blackstone_wall_get_properties(
	block_state_id state,
	mc_26_3_polished_blackstone_wall_properties *properties
);

block_state_id mc_26_3_polished_cinnabar_slab_get_state(
	const mc_26_3_polished_cinnabar_slab_properties *properties
);

b8 mc_26_3_polished_cinnabar_slab_get_properties(
	block_state_id state,
	mc_26_3_polished_cinnabar_slab_properties *properties
);

block_state_id mc_26_3_polished_cinnabar_stairs_get_state(
	const mc_26_3_polished_cinnabar_stairs_properties *properties
);

b8 mc_26_3_polished_cinnabar_stairs_get_properties(
	block_state_id state,
	mc_26_3_polished_cinnabar_stairs_properties *properties
);

block_state_id mc_26_3_polished_cinnabar_wall_get_state(
	const mc_26_3_polished_cinnabar_wall_properties *properties
);

b8 mc_26_3_polished_cinnabar_wall_get_properties(
	block_state_id state,
	mc_26_3_polished_cinnabar_wall_properties *properties
);

block_state_id mc_26_3_polished_deepslate_slab_get_state(
	const mc_26_3_polished_deepslate_slab_properties *properties
);

b8 mc_26_3_polished_deepslate_slab_get_properties(
	block_state_id state,
	mc_26_3_polished_deepslate_slab_properties *properties
);

block_state_id mc_26_3_polished_deepslate_stairs_get_state(
	const mc_26_3_polished_deepslate_stairs_properties *properties
);

b8 mc_26_3_polished_deepslate_stairs_get_properties(
	block_state_id state,
	mc_26_3_polished_deepslate_stairs_properties *properties
);

block_state_id mc_26_3_polished_deepslate_wall_get_state(
	const mc_26_3_polished_deepslate_wall_properties *properties
);

b8 mc_26_3_polished_deepslate_wall_get_properties(
	block_state_id state,
	mc_26_3_polished_deepslate_wall_properties *properties
);

block_state_id mc_26_3_polished_diorite_slab_get_state(
	const mc_26_3_polished_diorite_slab_properties *properties
);

b8 mc_26_3_polished_diorite_slab_get_properties(
	block_state_id state,
	mc_26_3_polished_diorite_slab_properties *properties
);

block_state_id mc_26_3_polished_diorite_stairs_get_state(
	const mc_26_3_polished_diorite_stairs_properties *properties
);

b8 mc_26_3_polished_diorite_stairs_get_properties(
	block_state_id state,
	mc_26_3_polished_diorite_stairs_properties *properties
);

block_state_id mc_26_3_polished_granite_slab_get_state(
	const mc_26_3_polished_granite_slab_properties *properties
);

b8 mc_26_3_polished_granite_slab_get_properties(
	block_state_id state,
	mc_26_3_polished_granite_slab_properties *properties
);

block_state_id mc_26_3_polished_granite_stairs_get_state(
	const mc_26_3_polished_granite_stairs_properties *properties
);

b8 mc_26_3_polished_granite_stairs_get_properties(
	block_state_id state,
	mc_26_3_polished_granite_stairs_properties *properties
);

block_state_id mc_26_3_polished_sulfur_slab_get_state(
	const mc_26_3_polished_sulfur_slab_properties *properties
);

b8 mc_26_3_polished_sulfur_slab_get_properties(
	block_state_id state,
	mc_26_3_polished_sulfur_slab_properties *properties
);

block_state_id mc_26_3_polished_sulfur_stairs_get_state(
	const mc_26_3_polished_sulfur_stairs_properties *properties
);

b8 mc_26_3_polished_sulfur_stairs_get_properties(
	block_state_id state,
	mc_26_3_polished_sulfur_stairs_properties *properties
);

block_state_id mc_26_3_polished_sulfur_wall_get_state(
	const mc_26_3_polished_sulfur_wall_properties *properties
);

b8 mc_26_3_polished_sulfur_wall_get_properties(
	block_state_id state,
	mc_26_3_polished_sulfur_wall_properties *properties
);

block_state_id mc_26_3_polished_tuff_slab_get_state(
	const mc_26_3_polished_tuff_slab_properties *properties
);

b8 mc_26_3_polished_tuff_slab_get_properties(
	block_state_id state,
	mc_26_3_polished_tuff_slab_properties *properties
);

block_state_id mc_26_3_polished_tuff_stairs_get_state(
	const mc_26_3_polished_tuff_stairs_properties *properties
);

b8 mc_26_3_polished_tuff_stairs_get_properties(
	block_state_id state,
	mc_26_3_polished_tuff_stairs_properties *properties
);

block_state_id mc_26_3_polished_tuff_wall_get_state(
	const mc_26_3_polished_tuff_wall_properties *properties
);

b8 mc_26_3_polished_tuff_wall_get_properties(
	block_state_id state,
	mc_26_3_polished_tuff_wall_properties *properties
);

block_state_id mc_26_3_poplar_button_get_state(
	const mc_26_3_poplar_button_properties *properties
);

b8 mc_26_3_poplar_button_get_properties(
	block_state_id state,
	mc_26_3_poplar_button_properties *properties
);

block_state_id mc_26_3_poplar_door_get_state(
	const mc_26_3_poplar_door_properties *properties
);

b8 mc_26_3_poplar_door_get_properties(
	block_state_id state,
	mc_26_3_poplar_door_properties *properties
);

block_state_id mc_26_3_poplar_fence_get_state(
	const mc_26_3_poplar_fence_properties *properties
);

b8 mc_26_3_poplar_fence_get_properties(
	block_state_id state,
	mc_26_3_poplar_fence_properties *properties
);

block_state_id mc_26_3_poplar_fence_gate_get_state(
	const mc_26_3_poplar_fence_gate_properties *properties
);

b8 mc_26_3_poplar_fence_gate_get_properties(
	block_state_id state,
	mc_26_3_poplar_fence_gate_properties *properties
);

block_state_id mc_26_3_poplar_hanging_sign_get_state(
	const mc_26_3_poplar_hanging_sign_properties *properties
);

b8 mc_26_3_poplar_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_poplar_hanging_sign_properties *properties
);

block_state_id mc_26_3_poplar_log_get_state(
	const mc_26_3_poplar_log_properties *properties
);

b8 mc_26_3_poplar_log_get_properties(
	block_state_id state,
	mc_26_3_poplar_log_properties *properties
);

block_state_id mc_26_3_poplar_pressure_plate_get_state(
	const mc_26_3_poplar_pressure_plate_properties *properties
);

b8 mc_26_3_poplar_pressure_plate_get_properties(
	block_state_id state,
	mc_26_3_poplar_pressure_plate_properties *properties
);

block_state_id mc_26_3_poplar_sapling_get_state(
	const mc_26_3_poplar_sapling_properties *properties
);

b8 mc_26_3_poplar_sapling_get_properties(
	block_state_id state,
	mc_26_3_poplar_sapling_properties *properties
);

block_state_id mc_26_3_poplar_shelf_get_state(
	const mc_26_3_poplar_shelf_properties *properties
);

b8 mc_26_3_poplar_shelf_get_properties(
	block_state_id state,
	mc_26_3_poplar_shelf_properties *properties
);

block_state_id mc_26_3_poplar_sign_get_state(
	const mc_26_3_poplar_sign_properties *properties
);

b8 mc_26_3_poplar_sign_get_properties(
	block_state_id state,
	mc_26_3_poplar_sign_properties *properties
);

block_state_id mc_26_3_poplar_slab_get_state(
	const mc_26_3_poplar_slab_properties *properties
);

b8 mc_26_3_poplar_slab_get_properties(
	block_state_id state,
	mc_26_3_poplar_slab_properties *properties
);

block_state_id mc_26_3_poplar_stairs_get_state(
	const mc_26_3_poplar_stairs_properties *properties
);

b8 mc_26_3_poplar_stairs_get_properties(
	block_state_id state,
	mc_26_3_poplar_stairs_properties *properties
);

block_state_id mc_26_3_poplar_trapdoor_get_state(
	const mc_26_3_poplar_trapdoor_properties *properties
);

b8 mc_26_3_poplar_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_poplar_trapdoor_properties *properties
);

block_state_id mc_26_3_poplar_wall_hanging_sign_get_state(
	const mc_26_3_poplar_wall_hanging_sign_properties *properties
);

b8 mc_26_3_poplar_wall_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_poplar_wall_hanging_sign_properties *properties
);

block_state_id mc_26_3_poplar_wall_sign_get_state(
	const mc_26_3_poplar_wall_sign_properties *properties
);

b8 mc_26_3_poplar_wall_sign_get_properties(
	block_state_id state,
	mc_26_3_poplar_wall_sign_properties *properties
);

block_state_id mc_26_3_poplar_wood_get_state(
	const mc_26_3_poplar_wood_properties *properties
);

b8 mc_26_3_poplar_wood_get_properties(
	block_state_id state,
	mc_26_3_poplar_wood_properties *properties
);

block_state_id mc_26_3_potatoes_get_state(
	const mc_26_3_potatoes_properties *properties
);

b8 mc_26_3_potatoes_get_properties(
	block_state_id state,
	mc_26_3_potatoes_properties *properties
);

block_state_id mc_26_3_potent_sulfur_get_state(
	const mc_26_3_potent_sulfur_properties *properties
);

b8 mc_26_3_potent_sulfur_get_properties(
	block_state_id state,
	mc_26_3_potent_sulfur_properties *properties
);

block_state_id mc_26_3_powder_snow_cauldron_get_state(
	const mc_26_3_powder_snow_cauldron_properties *properties
);

b8 mc_26_3_powder_snow_cauldron_get_properties(
	block_state_id state,
	mc_26_3_powder_snow_cauldron_properties *properties
);

block_state_id mc_26_3_powered_rail_get_state(
	const mc_26_3_powered_rail_properties *properties
);

b8 mc_26_3_powered_rail_get_properties(
	block_state_id state,
	mc_26_3_powered_rail_properties *properties
);

block_state_id mc_26_3_prismarine_brick_slab_get_state(
	const mc_26_3_prismarine_brick_slab_properties *properties
);

b8 mc_26_3_prismarine_brick_slab_get_properties(
	block_state_id state,
	mc_26_3_prismarine_brick_slab_properties *properties
);

block_state_id mc_26_3_prismarine_brick_stairs_get_state(
	const mc_26_3_prismarine_brick_stairs_properties *properties
);

b8 mc_26_3_prismarine_brick_stairs_get_properties(
	block_state_id state,
	mc_26_3_prismarine_brick_stairs_properties *properties
);

block_state_id mc_26_3_prismarine_slab_get_state(
	const mc_26_3_prismarine_slab_properties *properties
);

b8 mc_26_3_prismarine_slab_get_properties(
	block_state_id state,
	mc_26_3_prismarine_slab_properties *properties
);

block_state_id mc_26_3_prismarine_stairs_get_state(
	const mc_26_3_prismarine_stairs_properties *properties
);

b8 mc_26_3_prismarine_stairs_get_properties(
	block_state_id state,
	mc_26_3_prismarine_stairs_properties *properties
);

block_state_id mc_26_3_prismarine_wall_get_state(
	const mc_26_3_prismarine_wall_properties *properties
);

b8 mc_26_3_prismarine_wall_get_properties(
	block_state_id state,
	mc_26_3_prismarine_wall_properties *properties
);

block_state_id mc_26_3_pumpkin_stem_get_state(
	const mc_26_3_pumpkin_stem_properties *properties
);

b8 mc_26_3_pumpkin_stem_get_properties(
	block_state_id state,
	mc_26_3_pumpkin_stem_properties *properties
);

block_state_id mc_26_3_purple_banner_get_state(
	const mc_26_3_purple_banner_properties *properties
);

b8 mc_26_3_purple_banner_get_properties(
	block_state_id state,
	mc_26_3_purple_banner_properties *properties
);

block_state_id mc_26_3_purple_bed_get_state(
	const mc_26_3_purple_bed_properties *properties
);

b8 mc_26_3_purple_bed_get_properties(
	block_state_id state,
	mc_26_3_purple_bed_properties *properties
);

block_state_id mc_26_3_purple_candle_get_state(
	const mc_26_3_purple_candle_properties *properties
);

b8 mc_26_3_purple_candle_get_properties(
	block_state_id state,
	mc_26_3_purple_candle_properties *properties
);

block_state_id mc_26_3_purple_candle_cake_get_state(
	const mc_26_3_purple_candle_cake_properties *properties
);

b8 mc_26_3_purple_candle_cake_get_properties(
	block_state_id state,
	mc_26_3_purple_candle_cake_properties *properties
);

block_state_id mc_26_3_purple_concrete_slab_get_state(
	const mc_26_3_purple_concrete_slab_properties *properties
);

b8 mc_26_3_purple_concrete_slab_get_properties(
	block_state_id state,
	mc_26_3_purple_concrete_slab_properties *properties
);

block_state_id mc_26_3_purple_concrete_stairs_get_state(
	const mc_26_3_purple_concrete_stairs_properties *properties
);

b8 mc_26_3_purple_concrete_stairs_get_properties(
	block_state_id state,
	mc_26_3_purple_concrete_stairs_properties *properties
);

block_state_id mc_26_3_purple_glazed_terracotta_get_state(
	const mc_26_3_purple_glazed_terracotta_properties *properties
);

b8 mc_26_3_purple_glazed_terracotta_get_properties(
	block_state_id state,
	mc_26_3_purple_glazed_terracotta_properties *properties
);

block_state_id mc_26_3_purple_shulker_box_get_state(
	const mc_26_3_purple_shulker_box_properties *properties
);

b8 mc_26_3_purple_shulker_box_get_properties(
	block_state_id state,
	mc_26_3_purple_shulker_box_properties *properties
);

block_state_id mc_26_3_purple_stained_glass_pane_get_state(
	const mc_26_3_purple_stained_glass_pane_properties *properties
);

b8 mc_26_3_purple_stained_glass_pane_get_properties(
	block_state_id state,
	mc_26_3_purple_stained_glass_pane_properties *properties
);

block_state_id mc_26_3_purple_wall_banner_get_state(
	const mc_26_3_purple_wall_banner_properties *properties
);

b8 mc_26_3_purple_wall_banner_get_properties(
	block_state_id state,
	mc_26_3_purple_wall_banner_properties *properties
);

block_state_id mc_26_3_purple_wool_slab_get_state(
	const mc_26_3_purple_wool_slab_properties *properties
);

b8 mc_26_3_purple_wool_slab_get_properties(
	block_state_id state,
	mc_26_3_purple_wool_slab_properties *properties
);

block_state_id mc_26_3_purple_wool_stairs_get_state(
	const mc_26_3_purple_wool_stairs_properties *properties
);

b8 mc_26_3_purple_wool_stairs_get_properties(
	block_state_id state,
	mc_26_3_purple_wool_stairs_properties *properties
);

block_state_id mc_26_3_purpur_pillar_get_state(
	const mc_26_3_purpur_pillar_properties *properties
);

b8 mc_26_3_purpur_pillar_get_properties(
	block_state_id state,
	mc_26_3_purpur_pillar_properties *properties
);

block_state_id mc_26_3_purpur_slab_get_state(
	const mc_26_3_purpur_slab_properties *properties
);

b8 mc_26_3_purpur_slab_get_properties(
	block_state_id state,
	mc_26_3_purpur_slab_properties *properties
);

block_state_id mc_26_3_purpur_stairs_get_state(
	const mc_26_3_purpur_stairs_properties *properties
);

b8 mc_26_3_purpur_stairs_get_properties(
	block_state_id state,
	mc_26_3_purpur_stairs_properties *properties
);

block_state_id mc_26_3_quartz_pillar_get_state(
	const mc_26_3_quartz_pillar_properties *properties
);

b8 mc_26_3_quartz_pillar_get_properties(
	block_state_id state,
	mc_26_3_quartz_pillar_properties *properties
);

block_state_id mc_26_3_quartz_slab_get_state(
	const mc_26_3_quartz_slab_properties *properties
);

b8 mc_26_3_quartz_slab_get_properties(
	block_state_id state,
	mc_26_3_quartz_slab_properties *properties
);

block_state_id mc_26_3_quartz_stairs_get_state(
	const mc_26_3_quartz_stairs_properties *properties
);

b8 mc_26_3_quartz_stairs_get_properties(
	block_state_id state,
	mc_26_3_quartz_stairs_properties *properties
);

block_state_id mc_26_3_rail_get_state(
	const mc_26_3_rail_properties *properties
);

b8 mc_26_3_rail_get_properties(
	block_state_id state,
	mc_26_3_rail_properties *properties
);

block_state_id mc_26_3_red_banner_get_state(
	const mc_26_3_red_banner_properties *properties
);

b8 mc_26_3_red_banner_get_properties(
	block_state_id state,
	mc_26_3_red_banner_properties *properties
);

block_state_id mc_26_3_red_bed_get_state(
	const mc_26_3_red_bed_properties *properties
);

b8 mc_26_3_red_bed_get_properties(
	block_state_id state,
	mc_26_3_red_bed_properties *properties
);

block_state_id mc_26_3_red_candle_get_state(
	const mc_26_3_red_candle_properties *properties
);

b8 mc_26_3_red_candle_get_properties(
	block_state_id state,
	mc_26_3_red_candle_properties *properties
);

block_state_id mc_26_3_red_candle_cake_get_state(
	const mc_26_3_red_candle_cake_properties *properties
);

b8 mc_26_3_red_candle_cake_get_properties(
	block_state_id state,
	mc_26_3_red_candle_cake_properties *properties
);

block_state_id mc_26_3_red_concrete_slab_get_state(
	const mc_26_3_red_concrete_slab_properties *properties
);

b8 mc_26_3_red_concrete_slab_get_properties(
	block_state_id state,
	mc_26_3_red_concrete_slab_properties *properties
);

block_state_id mc_26_3_red_concrete_stairs_get_state(
	const mc_26_3_red_concrete_stairs_properties *properties
);

b8 mc_26_3_red_concrete_stairs_get_properties(
	block_state_id state,
	mc_26_3_red_concrete_stairs_properties *properties
);

block_state_id mc_26_3_red_glazed_terracotta_get_state(
	const mc_26_3_red_glazed_terracotta_properties *properties
);

b8 mc_26_3_red_glazed_terracotta_get_properties(
	block_state_id state,
	mc_26_3_red_glazed_terracotta_properties *properties
);

block_state_id mc_26_3_red_mushroom_block_get_state(
	const mc_26_3_red_mushroom_block_properties *properties
);

b8 mc_26_3_red_mushroom_block_get_properties(
	block_state_id state,
	mc_26_3_red_mushroom_block_properties *properties
);

block_state_id mc_26_3_red_nether_brick_slab_get_state(
	const mc_26_3_red_nether_brick_slab_properties *properties
);

b8 mc_26_3_red_nether_brick_slab_get_properties(
	block_state_id state,
	mc_26_3_red_nether_brick_slab_properties *properties
);

block_state_id mc_26_3_red_nether_brick_stairs_get_state(
	const mc_26_3_red_nether_brick_stairs_properties *properties
);

b8 mc_26_3_red_nether_brick_stairs_get_properties(
	block_state_id state,
	mc_26_3_red_nether_brick_stairs_properties *properties
);

block_state_id mc_26_3_red_nether_brick_wall_get_state(
	const mc_26_3_red_nether_brick_wall_properties *properties
);

b8 mc_26_3_red_nether_brick_wall_get_properties(
	block_state_id state,
	mc_26_3_red_nether_brick_wall_properties *properties
);

block_state_id mc_26_3_red_poplar_leaves_get_state(
	const mc_26_3_red_poplar_leaves_properties *properties
);

b8 mc_26_3_red_poplar_leaves_get_properties(
	block_state_id state,
	mc_26_3_red_poplar_leaves_properties *properties
);

block_state_id mc_26_3_red_sandstone_slab_get_state(
	const mc_26_3_red_sandstone_slab_properties *properties
);

b8 mc_26_3_red_sandstone_slab_get_properties(
	block_state_id state,
	mc_26_3_red_sandstone_slab_properties *properties
);

block_state_id mc_26_3_red_sandstone_stairs_get_state(
	const mc_26_3_red_sandstone_stairs_properties *properties
);

b8 mc_26_3_red_sandstone_stairs_get_properties(
	block_state_id state,
	mc_26_3_red_sandstone_stairs_properties *properties
);

block_state_id mc_26_3_red_sandstone_wall_get_state(
	const mc_26_3_red_sandstone_wall_properties *properties
);

b8 mc_26_3_red_sandstone_wall_get_properties(
	block_state_id state,
	mc_26_3_red_sandstone_wall_properties *properties
);

block_state_id mc_26_3_red_shulker_box_get_state(
	const mc_26_3_red_shulker_box_properties *properties
);

b8 mc_26_3_red_shulker_box_get_properties(
	block_state_id state,
	mc_26_3_red_shulker_box_properties *properties
);

block_state_id mc_26_3_red_stained_glass_pane_get_state(
	const mc_26_3_red_stained_glass_pane_properties *properties
);

b8 mc_26_3_red_stained_glass_pane_get_properties(
	block_state_id state,
	mc_26_3_red_stained_glass_pane_properties *properties
);

block_state_id mc_26_3_red_wall_banner_get_state(
	const mc_26_3_red_wall_banner_properties *properties
);

b8 mc_26_3_red_wall_banner_get_properties(
	block_state_id state,
	mc_26_3_red_wall_banner_properties *properties
);

block_state_id mc_26_3_red_wool_slab_get_state(
	const mc_26_3_red_wool_slab_properties *properties
);

b8 mc_26_3_red_wool_slab_get_properties(
	block_state_id state,
	mc_26_3_red_wool_slab_properties *properties
);

block_state_id mc_26_3_red_wool_stairs_get_state(
	const mc_26_3_red_wool_stairs_properties *properties
);

b8 mc_26_3_red_wool_stairs_get_properties(
	block_state_id state,
	mc_26_3_red_wool_stairs_properties *properties
);

block_state_id mc_26_3_redstone_lamp_get_state(
	const mc_26_3_redstone_lamp_properties *properties
);

b8 mc_26_3_redstone_lamp_get_properties(
	block_state_id state,
	mc_26_3_redstone_lamp_properties *properties
);

block_state_id mc_26_3_redstone_ore_get_state(
	const mc_26_3_redstone_ore_properties *properties
);

b8 mc_26_3_redstone_ore_get_properties(
	block_state_id state,
	mc_26_3_redstone_ore_properties *properties
);

block_state_id mc_26_3_redstone_torch_get_state(
	const mc_26_3_redstone_torch_properties *properties
);

b8 mc_26_3_redstone_torch_get_properties(
	block_state_id state,
	mc_26_3_redstone_torch_properties *properties
);

block_state_id mc_26_3_redstone_wall_torch_get_state(
	const mc_26_3_redstone_wall_torch_properties *properties
);

b8 mc_26_3_redstone_wall_torch_get_properties(
	block_state_id state,
	mc_26_3_redstone_wall_torch_properties *properties
);

block_state_id mc_26_3_redstone_wire_get_state(
	const mc_26_3_redstone_wire_properties *properties
);

b8 mc_26_3_redstone_wire_get_properties(
	block_state_id state,
	mc_26_3_redstone_wire_properties *properties
);

block_state_id mc_26_3_repeater_get_state(
	const mc_26_3_repeater_properties *properties
);

b8 mc_26_3_repeater_get_properties(
	block_state_id state,
	mc_26_3_repeater_properties *properties
);

block_state_id mc_26_3_repeating_command_block_get_state(
	const mc_26_3_repeating_command_block_properties *properties
);

b8 mc_26_3_repeating_command_block_get_properties(
	block_state_id state,
	mc_26_3_repeating_command_block_properties *properties
);

block_state_id mc_26_3_resin_brick_slab_get_state(
	const mc_26_3_resin_brick_slab_properties *properties
);

b8 mc_26_3_resin_brick_slab_get_properties(
	block_state_id state,
	mc_26_3_resin_brick_slab_properties *properties
);

block_state_id mc_26_3_resin_brick_stairs_get_state(
	const mc_26_3_resin_brick_stairs_properties *properties
);

b8 mc_26_3_resin_brick_stairs_get_properties(
	block_state_id state,
	mc_26_3_resin_brick_stairs_properties *properties
);

block_state_id mc_26_3_resin_brick_wall_get_state(
	const mc_26_3_resin_brick_wall_properties *properties
);

b8 mc_26_3_resin_brick_wall_get_properties(
	block_state_id state,
	mc_26_3_resin_brick_wall_properties *properties
);

block_state_id mc_26_3_resin_clump_get_state(
	const mc_26_3_resin_clump_properties *properties
);

b8 mc_26_3_resin_clump_get_properties(
	block_state_id state,
	mc_26_3_resin_clump_properties *properties
);

block_state_id mc_26_3_respawn_anchor_get_state(
	const mc_26_3_respawn_anchor_properties *properties
);

b8 mc_26_3_respawn_anchor_get_properties(
	block_state_id state,
	mc_26_3_respawn_anchor_properties *properties
);

block_state_id mc_26_3_rose_bush_get_state(
	const mc_26_3_rose_bush_properties *properties
);

b8 mc_26_3_rose_bush_get_properties(
	block_state_id state,
	mc_26_3_rose_bush_properties *properties
);

block_state_id mc_26_3_sandstone_slab_get_state(
	const mc_26_3_sandstone_slab_properties *properties
);

b8 mc_26_3_sandstone_slab_get_properties(
	block_state_id state,
	mc_26_3_sandstone_slab_properties *properties
);

block_state_id mc_26_3_sandstone_stairs_get_state(
	const mc_26_3_sandstone_stairs_properties *properties
);

b8 mc_26_3_sandstone_stairs_get_properties(
	block_state_id state,
	mc_26_3_sandstone_stairs_properties *properties
);

block_state_id mc_26_3_sandstone_wall_get_state(
	const mc_26_3_sandstone_wall_properties *properties
);

b8 mc_26_3_sandstone_wall_get_properties(
	block_state_id state,
	mc_26_3_sandstone_wall_properties *properties
);

block_state_id mc_26_3_scaffolding_get_state(
	const mc_26_3_scaffolding_properties *properties
);

b8 mc_26_3_scaffolding_get_properties(
	block_state_id state,
	mc_26_3_scaffolding_properties *properties
);

block_state_id mc_26_3_sculk_catalyst_get_state(
	const mc_26_3_sculk_catalyst_properties *properties
);

b8 mc_26_3_sculk_catalyst_get_properties(
	block_state_id state,
	mc_26_3_sculk_catalyst_properties *properties
);

block_state_id mc_26_3_sculk_sensor_get_state(
	const mc_26_3_sculk_sensor_properties *properties
);

b8 mc_26_3_sculk_sensor_get_properties(
	block_state_id state,
	mc_26_3_sculk_sensor_properties *properties
);

block_state_id mc_26_3_sculk_shrieker_get_state(
	const mc_26_3_sculk_shrieker_properties *properties
);

b8 mc_26_3_sculk_shrieker_get_properties(
	block_state_id state,
	mc_26_3_sculk_shrieker_properties *properties
);

block_state_id mc_26_3_sculk_vein_get_state(
	const mc_26_3_sculk_vein_properties *properties
);

b8 mc_26_3_sculk_vein_get_properties(
	block_state_id state,
	mc_26_3_sculk_vein_properties *properties
);

block_state_id mc_26_3_sea_pickle_get_state(
	const mc_26_3_sea_pickle_properties *properties
);

b8 mc_26_3_sea_pickle_get_properties(
	block_state_id state,
	mc_26_3_sea_pickle_properties *properties
);

block_state_id mc_26_3_shelf_mushroom_get_state(
	const mc_26_3_shelf_mushroom_properties *properties
);

b8 mc_26_3_shelf_mushroom_get_properties(
	block_state_id state,
	mc_26_3_shelf_mushroom_properties *properties
);

block_state_id mc_26_3_shulker_box_get_state(
	const mc_26_3_shulker_box_properties *properties
);

b8 mc_26_3_shulker_box_get_properties(
	block_state_id state,
	mc_26_3_shulker_box_properties *properties
);

block_state_id mc_26_3_skeleton_skull_get_state(
	const mc_26_3_skeleton_skull_properties *properties
);

b8 mc_26_3_skeleton_skull_get_properties(
	block_state_id state,
	mc_26_3_skeleton_skull_properties *properties
);

block_state_id mc_26_3_skeleton_wall_skull_get_state(
	const mc_26_3_skeleton_wall_skull_properties *properties
);

b8 mc_26_3_skeleton_wall_skull_get_properties(
	block_state_id state,
	mc_26_3_skeleton_wall_skull_properties *properties
);

block_state_id mc_26_3_small_amethyst_bud_get_state(
	const mc_26_3_small_amethyst_bud_properties *properties
);

b8 mc_26_3_small_amethyst_bud_get_properties(
	block_state_id state,
	mc_26_3_small_amethyst_bud_properties *properties
);

block_state_id mc_26_3_small_dripleaf_get_state(
	const mc_26_3_small_dripleaf_properties *properties
);

b8 mc_26_3_small_dripleaf_get_properties(
	block_state_id state,
	mc_26_3_small_dripleaf_properties *properties
);

block_state_id mc_26_3_smoker_get_state(
	const mc_26_3_smoker_properties *properties
);

b8 mc_26_3_smoker_get_properties(
	block_state_id state,
	mc_26_3_smoker_properties *properties
);

block_state_id mc_26_3_smooth_quartz_slab_get_state(
	const mc_26_3_smooth_quartz_slab_properties *properties
);

b8 mc_26_3_smooth_quartz_slab_get_properties(
	block_state_id state,
	mc_26_3_smooth_quartz_slab_properties *properties
);

block_state_id mc_26_3_smooth_quartz_stairs_get_state(
	const mc_26_3_smooth_quartz_stairs_properties *properties
);

b8 mc_26_3_smooth_quartz_stairs_get_properties(
	block_state_id state,
	mc_26_3_smooth_quartz_stairs_properties *properties
);

block_state_id mc_26_3_smooth_red_sandstone_slab_get_state(
	const mc_26_3_smooth_red_sandstone_slab_properties *properties
);

b8 mc_26_3_smooth_red_sandstone_slab_get_properties(
	block_state_id state,
	mc_26_3_smooth_red_sandstone_slab_properties *properties
);

block_state_id mc_26_3_smooth_red_sandstone_stairs_get_state(
	const mc_26_3_smooth_red_sandstone_stairs_properties *properties
);

b8 mc_26_3_smooth_red_sandstone_stairs_get_properties(
	block_state_id state,
	mc_26_3_smooth_red_sandstone_stairs_properties *properties
);

block_state_id mc_26_3_smooth_sandstone_slab_get_state(
	const mc_26_3_smooth_sandstone_slab_properties *properties
);

b8 mc_26_3_smooth_sandstone_slab_get_properties(
	block_state_id state,
	mc_26_3_smooth_sandstone_slab_properties *properties
);

block_state_id mc_26_3_smooth_sandstone_stairs_get_state(
	const mc_26_3_smooth_sandstone_stairs_properties *properties
);

b8 mc_26_3_smooth_sandstone_stairs_get_properties(
	block_state_id state,
	mc_26_3_smooth_sandstone_stairs_properties *properties
);

block_state_id mc_26_3_smooth_stone_slab_get_state(
	const mc_26_3_smooth_stone_slab_properties *properties
);

b8 mc_26_3_smooth_stone_slab_get_properties(
	block_state_id state,
	mc_26_3_smooth_stone_slab_properties *properties
);

block_state_id mc_26_3_sniffer_egg_get_state(
	const mc_26_3_sniffer_egg_properties *properties
);

b8 mc_26_3_sniffer_egg_get_properties(
	block_state_id state,
	mc_26_3_sniffer_egg_properties *properties
);

block_state_id mc_26_3_snow_get_state(
	const mc_26_3_snow_properties *properties
);

b8 mc_26_3_snow_get_properties(
	block_state_id state,
	mc_26_3_snow_properties *properties
);

block_state_id mc_26_3_soul_campfire_get_state(
	const mc_26_3_soul_campfire_properties *properties
);

b8 mc_26_3_soul_campfire_get_properties(
	block_state_id state,
	mc_26_3_soul_campfire_properties *properties
);

block_state_id mc_26_3_soul_lantern_get_state(
	const mc_26_3_soul_lantern_properties *properties
);

b8 mc_26_3_soul_lantern_get_properties(
	block_state_id state,
	mc_26_3_soul_lantern_properties *properties
);

block_state_id mc_26_3_soul_wall_torch_get_state(
	const mc_26_3_soul_wall_torch_properties *properties
);

b8 mc_26_3_soul_wall_torch_get_properties(
	block_state_id state,
	mc_26_3_soul_wall_torch_properties *properties
);

block_state_id mc_26_3_spruce_button_get_state(
	const mc_26_3_spruce_button_properties *properties
);

b8 mc_26_3_spruce_button_get_properties(
	block_state_id state,
	mc_26_3_spruce_button_properties *properties
);

block_state_id mc_26_3_spruce_door_get_state(
	const mc_26_3_spruce_door_properties *properties
);

b8 mc_26_3_spruce_door_get_properties(
	block_state_id state,
	mc_26_3_spruce_door_properties *properties
);

block_state_id mc_26_3_spruce_fence_get_state(
	const mc_26_3_spruce_fence_properties *properties
);

b8 mc_26_3_spruce_fence_get_properties(
	block_state_id state,
	mc_26_3_spruce_fence_properties *properties
);

block_state_id mc_26_3_spruce_fence_gate_get_state(
	const mc_26_3_spruce_fence_gate_properties *properties
);

b8 mc_26_3_spruce_fence_gate_get_properties(
	block_state_id state,
	mc_26_3_spruce_fence_gate_properties *properties
);

block_state_id mc_26_3_spruce_hanging_sign_get_state(
	const mc_26_3_spruce_hanging_sign_properties *properties
);

b8 mc_26_3_spruce_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_spruce_hanging_sign_properties *properties
);

block_state_id mc_26_3_spruce_leaves_get_state(
	const mc_26_3_spruce_leaves_properties *properties
);

b8 mc_26_3_spruce_leaves_get_properties(
	block_state_id state,
	mc_26_3_spruce_leaves_properties *properties
);

block_state_id mc_26_3_spruce_log_get_state(
	const mc_26_3_spruce_log_properties *properties
);

b8 mc_26_3_spruce_log_get_properties(
	block_state_id state,
	mc_26_3_spruce_log_properties *properties
);

block_state_id mc_26_3_spruce_pressure_plate_get_state(
	const mc_26_3_spruce_pressure_plate_properties *properties
);

b8 mc_26_3_spruce_pressure_plate_get_properties(
	block_state_id state,
	mc_26_3_spruce_pressure_plate_properties *properties
);

block_state_id mc_26_3_spruce_sapling_get_state(
	const mc_26_3_spruce_sapling_properties *properties
);

b8 mc_26_3_spruce_sapling_get_properties(
	block_state_id state,
	mc_26_3_spruce_sapling_properties *properties
);

block_state_id mc_26_3_spruce_shelf_get_state(
	const mc_26_3_spruce_shelf_properties *properties
);

b8 mc_26_3_spruce_shelf_get_properties(
	block_state_id state,
	mc_26_3_spruce_shelf_properties *properties
);

block_state_id mc_26_3_spruce_sign_get_state(
	const mc_26_3_spruce_sign_properties *properties
);

b8 mc_26_3_spruce_sign_get_properties(
	block_state_id state,
	mc_26_3_spruce_sign_properties *properties
);

block_state_id mc_26_3_spruce_slab_get_state(
	const mc_26_3_spruce_slab_properties *properties
);

b8 mc_26_3_spruce_slab_get_properties(
	block_state_id state,
	mc_26_3_spruce_slab_properties *properties
);

block_state_id mc_26_3_spruce_stairs_get_state(
	const mc_26_3_spruce_stairs_properties *properties
);

b8 mc_26_3_spruce_stairs_get_properties(
	block_state_id state,
	mc_26_3_spruce_stairs_properties *properties
);

block_state_id mc_26_3_spruce_trapdoor_get_state(
	const mc_26_3_spruce_trapdoor_properties *properties
);

b8 mc_26_3_spruce_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_spruce_trapdoor_properties *properties
);

block_state_id mc_26_3_spruce_wall_hanging_sign_get_state(
	const mc_26_3_spruce_wall_hanging_sign_properties *properties
);

b8 mc_26_3_spruce_wall_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_spruce_wall_hanging_sign_properties *properties
);

block_state_id mc_26_3_spruce_wall_sign_get_state(
	const mc_26_3_spruce_wall_sign_properties *properties
);

b8 mc_26_3_spruce_wall_sign_get_properties(
	block_state_id state,
	mc_26_3_spruce_wall_sign_properties *properties
);

block_state_id mc_26_3_spruce_wood_get_state(
	const mc_26_3_spruce_wood_properties *properties
);

b8 mc_26_3_spruce_wood_get_properties(
	block_state_id state,
	mc_26_3_spruce_wood_properties *properties
);

block_state_id mc_26_3_sticky_piston_get_state(
	const mc_26_3_sticky_piston_properties *properties
);

b8 mc_26_3_sticky_piston_get_properties(
	block_state_id state,
	mc_26_3_sticky_piston_properties *properties
);

block_state_id mc_26_3_stone_brick_slab_get_state(
	const mc_26_3_stone_brick_slab_properties *properties
);

b8 mc_26_3_stone_brick_slab_get_properties(
	block_state_id state,
	mc_26_3_stone_brick_slab_properties *properties
);

block_state_id mc_26_3_stone_brick_stairs_get_state(
	const mc_26_3_stone_brick_stairs_properties *properties
);

b8 mc_26_3_stone_brick_stairs_get_properties(
	block_state_id state,
	mc_26_3_stone_brick_stairs_properties *properties
);

block_state_id mc_26_3_stone_brick_wall_get_state(
	const mc_26_3_stone_brick_wall_properties *properties
);

b8 mc_26_3_stone_brick_wall_get_properties(
	block_state_id state,
	mc_26_3_stone_brick_wall_properties *properties
);

block_state_id mc_26_3_stone_button_get_state(
	const mc_26_3_stone_button_properties *properties
);

b8 mc_26_3_stone_button_get_properties(
	block_state_id state,
	mc_26_3_stone_button_properties *properties
);

block_state_id mc_26_3_stone_pressure_plate_get_state(
	const mc_26_3_stone_pressure_plate_properties *properties
);

b8 mc_26_3_stone_pressure_plate_get_properties(
	block_state_id state,
	mc_26_3_stone_pressure_plate_properties *properties
);

block_state_id mc_26_3_stone_slab_get_state(
	const mc_26_3_stone_slab_properties *properties
);

b8 mc_26_3_stone_slab_get_properties(
	block_state_id state,
	mc_26_3_stone_slab_properties *properties
);

block_state_id mc_26_3_stone_stairs_get_state(
	const mc_26_3_stone_stairs_properties *properties
);

b8 mc_26_3_stone_stairs_get_properties(
	block_state_id state,
	mc_26_3_stone_stairs_properties *properties
);

block_state_id mc_26_3_stonecutter_get_state(
	const mc_26_3_stonecutter_properties *properties
);

b8 mc_26_3_stonecutter_get_properties(
	block_state_id state,
	mc_26_3_stonecutter_properties *properties
);

block_state_id mc_26_3_straw_bed_get_state(
	const mc_26_3_straw_bed_properties *properties
);

b8 mc_26_3_straw_bed_get_properties(
	block_state_id state,
	mc_26_3_straw_bed_properties *properties
);

block_state_id mc_26_3_stripped_acacia_log_get_state(
	const mc_26_3_stripped_acacia_log_properties *properties
);

b8 mc_26_3_stripped_acacia_log_get_properties(
	block_state_id state,
	mc_26_3_stripped_acacia_log_properties *properties
);

block_state_id mc_26_3_stripped_acacia_wood_get_state(
	const mc_26_3_stripped_acacia_wood_properties *properties
);

b8 mc_26_3_stripped_acacia_wood_get_properties(
	block_state_id state,
	mc_26_3_stripped_acacia_wood_properties *properties
);

block_state_id mc_26_3_stripped_bamboo_block_get_state(
	const mc_26_3_stripped_bamboo_block_properties *properties
);

b8 mc_26_3_stripped_bamboo_block_get_properties(
	block_state_id state,
	mc_26_3_stripped_bamboo_block_properties *properties
);

block_state_id mc_26_3_stripped_birch_log_get_state(
	const mc_26_3_stripped_birch_log_properties *properties
);

b8 mc_26_3_stripped_birch_log_get_properties(
	block_state_id state,
	mc_26_3_stripped_birch_log_properties *properties
);

block_state_id mc_26_3_stripped_birch_wood_get_state(
	const mc_26_3_stripped_birch_wood_properties *properties
);

b8 mc_26_3_stripped_birch_wood_get_properties(
	block_state_id state,
	mc_26_3_stripped_birch_wood_properties *properties
);

block_state_id mc_26_3_stripped_cherry_log_get_state(
	const mc_26_3_stripped_cherry_log_properties *properties
);

b8 mc_26_3_stripped_cherry_log_get_properties(
	block_state_id state,
	mc_26_3_stripped_cherry_log_properties *properties
);

block_state_id mc_26_3_stripped_cherry_wood_get_state(
	const mc_26_3_stripped_cherry_wood_properties *properties
);

b8 mc_26_3_stripped_cherry_wood_get_properties(
	block_state_id state,
	mc_26_3_stripped_cherry_wood_properties *properties
);

block_state_id mc_26_3_stripped_crimson_hyphae_get_state(
	const mc_26_3_stripped_crimson_hyphae_properties *properties
);

b8 mc_26_3_stripped_crimson_hyphae_get_properties(
	block_state_id state,
	mc_26_3_stripped_crimson_hyphae_properties *properties
);

block_state_id mc_26_3_stripped_crimson_stem_get_state(
	const mc_26_3_stripped_crimson_stem_properties *properties
);

b8 mc_26_3_stripped_crimson_stem_get_properties(
	block_state_id state,
	mc_26_3_stripped_crimson_stem_properties *properties
);

block_state_id mc_26_3_stripped_dark_oak_log_get_state(
	const mc_26_3_stripped_dark_oak_log_properties *properties
);

b8 mc_26_3_stripped_dark_oak_log_get_properties(
	block_state_id state,
	mc_26_3_stripped_dark_oak_log_properties *properties
);

block_state_id mc_26_3_stripped_dark_oak_wood_get_state(
	const mc_26_3_stripped_dark_oak_wood_properties *properties
);

b8 mc_26_3_stripped_dark_oak_wood_get_properties(
	block_state_id state,
	mc_26_3_stripped_dark_oak_wood_properties *properties
);

block_state_id mc_26_3_stripped_jungle_log_get_state(
	const mc_26_3_stripped_jungle_log_properties *properties
);

b8 mc_26_3_stripped_jungle_log_get_properties(
	block_state_id state,
	mc_26_3_stripped_jungle_log_properties *properties
);

block_state_id mc_26_3_stripped_jungle_wood_get_state(
	const mc_26_3_stripped_jungle_wood_properties *properties
);

b8 mc_26_3_stripped_jungle_wood_get_properties(
	block_state_id state,
	mc_26_3_stripped_jungle_wood_properties *properties
);

block_state_id mc_26_3_stripped_mangrove_log_get_state(
	const mc_26_3_stripped_mangrove_log_properties *properties
);

b8 mc_26_3_stripped_mangrove_log_get_properties(
	block_state_id state,
	mc_26_3_stripped_mangrove_log_properties *properties
);

block_state_id mc_26_3_stripped_mangrove_wood_get_state(
	const mc_26_3_stripped_mangrove_wood_properties *properties
);

b8 mc_26_3_stripped_mangrove_wood_get_properties(
	block_state_id state,
	mc_26_3_stripped_mangrove_wood_properties *properties
);

block_state_id mc_26_3_stripped_oak_log_get_state(
	const mc_26_3_stripped_oak_log_properties *properties
);

b8 mc_26_3_stripped_oak_log_get_properties(
	block_state_id state,
	mc_26_3_stripped_oak_log_properties *properties
);

block_state_id mc_26_3_stripped_oak_wood_get_state(
	const mc_26_3_stripped_oak_wood_properties *properties
);

b8 mc_26_3_stripped_oak_wood_get_properties(
	block_state_id state,
	mc_26_3_stripped_oak_wood_properties *properties
);

block_state_id mc_26_3_stripped_pale_oak_log_get_state(
	const mc_26_3_stripped_pale_oak_log_properties *properties
);

b8 mc_26_3_stripped_pale_oak_log_get_properties(
	block_state_id state,
	mc_26_3_stripped_pale_oak_log_properties *properties
);

block_state_id mc_26_3_stripped_pale_oak_wood_get_state(
	const mc_26_3_stripped_pale_oak_wood_properties *properties
);

b8 mc_26_3_stripped_pale_oak_wood_get_properties(
	block_state_id state,
	mc_26_3_stripped_pale_oak_wood_properties *properties
);

block_state_id mc_26_3_stripped_poplar_log_get_state(
	const mc_26_3_stripped_poplar_log_properties *properties
);

b8 mc_26_3_stripped_poplar_log_get_properties(
	block_state_id state,
	mc_26_3_stripped_poplar_log_properties *properties
);

block_state_id mc_26_3_stripped_poplar_wood_get_state(
	const mc_26_3_stripped_poplar_wood_properties *properties
);

b8 mc_26_3_stripped_poplar_wood_get_properties(
	block_state_id state,
	mc_26_3_stripped_poplar_wood_properties *properties
);

block_state_id mc_26_3_stripped_spruce_log_get_state(
	const mc_26_3_stripped_spruce_log_properties *properties
);

b8 mc_26_3_stripped_spruce_log_get_properties(
	block_state_id state,
	mc_26_3_stripped_spruce_log_properties *properties
);

block_state_id mc_26_3_stripped_spruce_wood_get_state(
	const mc_26_3_stripped_spruce_wood_properties *properties
);

b8 mc_26_3_stripped_spruce_wood_get_properties(
	block_state_id state,
	mc_26_3_stripped_spruce_wood_properties *properties
);

block_state_id mc_26_3_stripped_warped_hyphae_get_state(
	const mc_26_3_stripped_warped_hyphae_properties *properties
);

b8 mc_26_3_stripped_warped_hyphae_get_properties(
	block_state_id state,
	mc_26_3_stripped_warped_hyphae_properties *properties
);

block_state_id mc_26_3_stripped_warped_stem_get_state(
	const mc_26_3_stripped_warped_stem_properties *properties
);

b8 mc_26_3_stripped_warped_stem_get_properties(
	block_state_id state,
	mc_26_3_stripped_warped_stem_properties *properties
);

block_state_id mc_26_3_structure_block_get_state(
	const mc_26_3_structure_block_properties *properties
);

b8 mc_26_3_structure_block_get_properties(
	block_state_id state,
	mc_26_3_structure_block_properties *properties
);

block_state_id mc_26_3_sugar_cane_get_state(
	const mc_26_3_sugar_cane_properties *properties
);

b8 mc_26_3_sugar_cane_get_properties(
	block_state_id state,
	mc_26_3_sugar_cane_properties *properties
);

block_state_id mc_26_3_sulfur_brick_slab_get_state(
	const mc_26_3_sulfur_brick_slab_properties *properties
);

b8 mc_26_3_sulfur_brick_slab_get_properties(
	block_state_id state,
	mc_26_3_sulfur_brick_slab_properties *properties
);

block_state_id mc_26_3_sulfur_brick_stairs_get_state(
	const mc_26_3_sulfur_brick_stairs_properties *properties
);

b8 mc_26_3_sulfur_brick_stairs_get_properties(
	block_state_id state,
	mc_26_3_sulfur_brick_stairs_properties *properties
);

block_state_id mc_26_3_sulfur_brick_wall_get_state(
	const mc_26_3_sulfur_brick_wall_properties *properties
);

b8 mc_26_3_sulfur_brick_wall_get_properties(
	block_state_id state,
	mc_26_3_sulfur_brick_wall_properties *properties
);

block_state_id mc_26_3_sulfur_slab_get_state(
	const mc_26_3_sulfur_slab_properties *properties
);

b8 mc_26_3_sulfur_slab_get_properties(
	block_state_id state,
	mc_26_3_sulfur_slab_properties *properties
);

block_state_id mc_26_3_sulfur_spike_get_state(
	const mc_26_3_sulfur_spike_properties *properties
);

b8 mc_26_3_sulfur_spike_get_properties(
	block_state_id state,
	mc_26_3_sulfur_spike_properties *properties
);

block_state_id mc_26_3_sulfur_stairs_get_state(
	const mc_26_3_sulfur_stairs_properties *properties
);

b8 mc_26_3_sulfur_stairs_get_properties(
	block_state_id state,
	mc_26_3_sulfur_stairs_properties *properties
);

block_state_id mc_26_3_sulfur_wall_get_state(
	const mc_26_3_sulfur_wall_properties *properties
);

b8 mc_26_3_sulfur_wall_get_properties(
	block_state_id state,
	mc_26_3_sulfur_wall_properties *properties
);

block_state_id mc_26_3_sunflower_get_state(
	const mc_26_3_sunflower_properties *properties
);

b8 mc_26_3_sunflower_get_properties(
	block_state_id state,
	mc_26_3_sunflower_properties *properties
);

block_state_id mc_26_3_suspicious_gravel_get_state(
	const mc_26_3_suspicious_gravel_properties *properties
);

b8 mc_26_3_suspicious_gravel_get_properties(
	block_state_id state,
	mc_26_3_suspicious_gravel_properties *properties
);

block_state_id mc_26_3_suspicious_sand_get_state(
	const mc_26_3_suspicious_sand_properties *properties
);

b8 mc_26_3_suspicious_sand_get_properties(
	block_state_id state,
	mc_26_3_suspicious_sand_properties *properties
);

block_state_id mc_26_3_sweet_berry_bush_get_state(
	const mc_26_3_sweet_berry_bush_properties *properties
);

b8 mc_26_3_sweet_berry_bush_get_properties(
	block_state_id state,
	mc_26_3_sweet_berry_bush_properties *properties
);

block_state_id mc_26_3_tall_grass_get_state(
	const mc_26_3_tall_grass_properties *properties
);

b8 mc_26_3_tall_grass_get_properties(
	block_state_id state,
	mc_26_3_tall_grass_properties *properties
);

block_state_id mc_26_3_tall_seagrass_get_state(
	const mc_26_3_tall_seagrass_properties *properties
);

b8 mc_26_3_tall_seagrass_get_properties(
	block_state_id state,
	mc_26_3_tall_seagrass_properties *properties
);

block_state_id mc_26_3_target_get_state(
	const mc_26_3_target_properties *properties
);

b8 mc_26_3_target_get_properties(
	block_state_id state,
	mc_26_3_target_properties *properties
);

block_state_id mc_26_3_test_block_get_state(
	const mc_26_3_test_block_properties *properties
);

b8 mc_26_3_test_block_get_properties(
	block_state_id state,
	mc_26_3_test_block_properties *properties
);

block_state_id mc_26_3_tnt_get_state(
	const mc_26_3_tnt_properties *properties
);

b8 mc_26_3_tnt_get_properties(
	block_state_id state,
	mc_26_3_tnt_properties *properties
);

block_state_id mc_26_3_torchflower_crop_get_state(
	const mc_26_3_torchflower_crop_properties *properties
);

b8 mc_26_3_torchflower_crop_get_properties(
	block_state_id state,
	mc_26_3_torchflower_crop_properties *properties
);

block_state_id mc_26_3_trapped_chest_get_state(
	const mc_26_3_trapped_chest_properties *properties
);

b8 mc_26_3_trapped_chest_get_properties(
	block_state_id state,
	mc_26_3_trapped_chest_properties *properties
);

block_state_id mc_26_3_trial_spawner_get_state(
	const mc_26_3_trial_spawner_properties *properties
);

b8 mc_26_3_trial_spawner_get_properties(
	block_state_id state,
	mc_26_3_trial_spawner_properties *properties
);

block_state_id mc_26_3_tripwire_get_state(
	const mc_26_3_tripwire_properties *properties
);

b8 mc_26_3_tripwire_get_properties(
	block_state_id state,
	mc_26_3_tripwire_properties *properties
);

block_state_id mc_26_3_tripwire_hook_get_state(
	const mc_26_3_tripwire_hook_properties *properties
);

b8 mc_26_3_tripwire_hook_get_properties(
	block_state_id state,
	mc_26_3_tripwire_hook_properties *properties
);

block_state_id mc_26_3_tube_coral_get_state(
	const mc_26_3_tube_coral_properties *properties
);

b8 mc_26_3_tube_coral_get_properties(
	block_state_id state,
	mc_26_3_tube_coral_properties *properties
);

block_state_id mc_26_3_tube_coral_fan_get_state(
	const mc_26_3_tube_coral_fan_properties *properties
);

b8 mc_26_3_tube_coral_fan_get_properties(
	block_state_id state,
	mc_26_3_tube_coral_fan_properties *properties
);

block_state_id mc_26_3_tube_coral_wall_fan_get_state(
	const mc_26_3_tube_coral_wall_fan_properties *properties
);

b8 mc_26_3_tube_coral_wall_fan_get_properties(
	block_state_id state,
	mc_26_3_tube_coral_wall_fan_properties *properties
);

block_state_id mc_26_3_tuff_brick_slab_get_state(
	const mc_26_3_tuff_brick_slab_properties *properties
);

b8 mc_26_3_tuff_brick_slab_get_properties(
	block_state_id state,
	mc_26_3_tuff_brick_slab_properties *properties
);

block_state_id mc_26_3_tuff_brick_stairs_get_state(
	const mc_26_3_tuff_brick_stairs_properties *properties
);

b8 mc_26_3_tuff_brick_stairs_get_properties(
	block_state_id state,
	mc_26_3_tuff_brick_stairs_properties *properties
);

block_state_id mc_26_3_tuff_brick_wall_get_state(
	const mc_26_3_tuff_brick_wall_properties *properties
);

b8 mc_26_3_tuff_brick_wall_get_properties(
	block_state_id state,
	mc_26_3_tuff_brick_wall_properties *properties
);

block_state_id mc_26_3_tuff_slab_get_state(
	const mc_26_3_tuff_slab_properties *properties
);

b8 mc_26_3_tuff_slab_get_properties(
	block_state_id state,
	mc_26_3_tuff_slab_properties *properties
);

block_state_id mc_26_3_tuff_stairs_get_state(
	const mc_26_3_tuff_stairs_properties *properties
);

b8 mc_26_3_tuff_stairs_get_properties(
	block_state_id state,
	mc_26_3_tuff_stairs_properties *properties
);

block_state_id mc_26_3_tuff_wall_get_state(
	const mc_26_3_tuff_wall_properties *properties
);

b8 mc_26_3_tuff_wall_get_properties(
	block_state_id state,
	mc_26_3_tuff_wall_properties *properties
);

block_state_id mc_26_3_turtle_egg_get_state(
	const mc_26_3_turtle_egg_properties *properties
);

b8 mc_26_3_turtle_egg_get_properties(
	block_state_id state,
	mc_26_3_turtle_egg_properties *properties
);

block_state_id mc_26_3_twisting_vines_get_state(
	const mc_26_3_twisting_vines_properties *properties
);

b8 mc_26_3_twisting_vines_get_properties(
	block_state_id state,
	mc_26_3_twisting_vines_properties *properties
);

block_state_id mc_26_3_vault_get_state(
	const mc_26_3_vault_properties *properties
);

b8 mc_26_3_vault_get_properties(
	block_state_id state,
	mc_26_3_vault_properties *properties
);

block_state_id mc_26_3_verdant_froglight_get_state(
	const mc_26_3_verdant_froglight_properties *properties
);

b8 mc_26_3_verdant_froglight_get_properties(
	block_state_id state,
	mc_26_3_verdant_froglight_properties *properties
);

block_state_id mc_26_3_vine_get_state(
	const mc_26_3_vine_properties *properties
);

b8 mc_26_3_vine_get_properties(
	block_state_id state,
	mc_26_3_vine_properties *properties
);

block_state_id mc_26_3_wall_torch_get_state(
	const mc_26_3_wall_torch_properties *properties
);

b8 mc_26_3_wall_torch_get_properties(
	block_state_id state,
	mc_26_3_wall_torch_properties *properties
);

block_state_id mc_26_3_warped_button_get_state(
	const mc_26_3_warped_button_properties *properties
);

b8 mc_26_3_warped_button_get_properties(
	block_state_id state,
	mc_26_3_warped_button_properties *properties
);

block_state_id mc_26_3_warped_door_get_state(
	const mc_26_3_warped_door_properties *properties
);

b8 mc_26_3_warped_door_get_properties(
	block_state_id state,
	mc_26_3_warped_door_properties *properties
);

block_state_id mc_26_3_warped_fence_get_state(
	const mc_26_3_warped_fence_properties *properties
);

b8 mc_26_3_warped_fence_get_properties(
	block_state_id state,
	mc_26_3_warped_fence_properties *properties
);

block_state_id mc_26_3_warped_fence_gate_get_state(
	const mc_26_3_warped_fence_gate_properties *properties
);

b8 mc_26_3_warped_fence_gate_get_properties(
	block_state_id state,
	mc_26_3_warped_fence_gate_properties *properties
);

block_state_id mc_26_3_warped_hanging_sign_get_state(
	const mc_26_3_warped_hanging_sign_properties *properties
);

b8 mc_26_3_warped_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_warped_hanging_sign_properties *properties
);

block_state_id mc_26_3_warped_hyphae_get_state(
	const mc_26_3_warped_hyphae_properties *properties
);

b8 mc_26_3_warped_hyphae_get_properties(
	block_state_id state,
	mc_26_3_warped_hyphae_properties *properties
);

block_state_id mc_26_3_warped_pressure_plate_get_state(
	const mc_26_3_warped_pressure_plate_properties *properties
);

b8 mc_26_3_warped_pressure_plate_get_properties(
	block_state_id state,
	mc_26_3_warped_pressure_plate_properties *properties
);

block_state_id mc_26_3_warped_shelf_get_state(
	const mc_26_3_warped_shelf_properties *properties
);

b8 mc_26_3_warped_shelf_get_properties(
	block_state_id state,
	mc_26_3_warped_shelf_properties *properties
);

block_state_id mc_26_3_warped_sign_get_state(
	const mc_26_3_warped_sign_properties *properties
);

b8 mc_26_3_warped_sign_get_properties(
	block_state_id state,
	mc_26_3_warped_sign_properties *properties
);

block_state_id mc_26_3_warped_slab_get_state(
	const mc_26_3_warped_slab_properties *properties
);

b8 mc_26_3_warped_slab_get_properties(
	block_state_id state,
	mc_26_3_warped_slab_properties *properties
);

block_state_id mc_26_3_warped_stairs_get_state(
	const mc_26_3_warped_stairs_properties *properties
);

b8 mc_26_3_warped_stairs_get_properties(
	block_state_id state,
	mc_26_3_warped_stairs_properties *properties
);

block_state_id mc_26_3_warped_stem_get_state(
	const mc_26_3_warped_stem_properties *properties
);

b8 mc_26_3_warped_stem_get_properties(
	block_state_id state,
	mc_26_3_warped_stem_properties *properties
);

block_state_id mc_26_3_warped_trapdoor_get_state(
	const mc_26_3_warped_trapdoor_properties *properties
);

b8 mc_26_3_warped_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_warped_trapdoor_properties *properties
);

block_state_id mc_26_3_warped_wall_hanging_sign_get_state(
	const mc_26_3_warped_wall_hanging_sign_properties *properties
);

b8 mc_26_3_warped_wall_hanging_sign_get_properties(
	block_state_id state,
	mc_26_3_warped_wall_hanging_sign_properties *properties
);

block_state_id mc_26_3_warped_wall_sign_get_state(
	const mc_26_3_warped_wall_sign_properties *properties
);

b8 mc_26_3_warped_wall_sign_get_properties(
	block_state_id state,
	mc_26_3_warped_wall_sign_properties *properties
);

block_state_id mc_26_3_water_get_state(
	const mc_26_3_water_properties *properties
);

b8 mc_26_3_water_get_properties(
	block_state_id state,
	mc_26_3_water_properties *properties
);

block_state_id mc_26_3_water_cauldron_get_state(
	const mc_26_3_water_cauldron_properties *properties
);

b8 mc_26_3_water_cauldron_get_properties(
	block_state_id state,
	mc_26_3_water_cauldron_properties *properties
);

block_state_id mc_26_3_waxed_copper_bars_get_state(
	const mc_26_3_waxed_copper_bars_properties *properties
);

b8 mc_26_3_waxed_copper_bars_get_properties(
	block_state_id state,
	mc_26_3_waxed_copper_bars_properties *properties
);

block_state_id mc_26_3_waxed_copper_bulb_get_state(
	const mc_26_3_waxed_copper_bulb_properties *properties
);

b8 mc_26_3_waxed_copper_bulb_get_properties(
	block_state_id state,
	mc_26_3_waxed_copper_bulb_properties *properties
);

block_state_id mc_26_3_waxed_copper_chain_get_state(
	const mc_26_3_waxed_copper_chain_properties *properties
);

b8 mc_26_3_waxed_copper_chain_get_properties(
	block_state_id state,
	mc_26_3_waxed_copper_chain_properties *properties
);

block_state_id mc_26_3_waxed_copper_chest_get_state(
	const mc_26_3_waxed_copper_chest_properties *properties
);

b8 mc_26_3_waxed_copper_chest_get_properties(
	block_state_id state,
	mc_26_3_waxed_copper_chest_properties *properties
);

block_state_id mc_26_3_waxed_copper_door_get_state(
	const mc_26_3_waxed_copper_door_properties *properties
);

b8 mc_26_3_waxed_copper_door_get_properties(
	block_state_id state,
	mc_26_3_waxed_copper_door_properties *properties
);

block_state_id mc_26_3_waxed_copper_golem_statue_get_state(
	const mc_26_3_waxed_copper_golem_statue_properties *properties
);

b8 mc_26_3_waxed_copper_golem_statue_get_properties(
	block_state_id state,
	mc_26_3_waxed_copper_golem_statue_properties *properties
);

block_state_id mc_26_3_waxed_copper_grate_get_state(
	const mc_26_3_waxed_copper_grate_properties *properties
);

b8 mc_26_3_waxed_copper_grate_get_properties(
	block_state_id state,
	mc_26_3_waxed_copper_grate_properties *properties
);

block_state_id mc_26_3_waxed_copper_lantern_get_state(
	const mc_26_3_waxed_copper_lantern_properties *properties
);

b8 mc_26_3_waxed_copper_lantern_get_properties(
	block_state_id state,
	mc_26_3_waxed_copper_lantern_properties *properties
);

block_state_id mc_26_3_waxed_copper_trapdoor_get_state(
	const mc_26_3_waxed_copper_trapdoor_properties *properties
);

b8 mc_26_3_waxed_copper_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_waxed_copper_trapdoor_properties *properties
);

block_state_id mc_26_3_waxed_cut_copper_slab_get_state(
	const mc_26_3_waxed_cut_copper_slab_properties *properties
);

b8 mc_26_3_waxed_cut_copper_slab_get_properties(
	block_state_id state,
	mc_26_3_waxed_cut_copper_slab_properties *properties
);

block_state_id mc_26_3_waxed_cut_copper_stairs_get_state(
	const mc_26_3_waxed_cut_copper_stairs_properties *properties
);

b8 mc_26_3_waxed_cut_copper_stairs_get_properties(
	block_state_id state,
	mc_26_3_waxed_cut_copper_stairs_properties *properties
);

block_state_id mc_26_3_waxed_exposed_copper_bars_get_state(
	const mc_26_3_waxed_exposed_copper_bars_properties *properties
);

b8 mc_26_3_waxed_exposed_copper_bars_get_properties(
	block_state_id state,
	mc_26_3_waxed_exposed_copper_bars_properties *properties
);

block_state_id mc_26_3_waxed_exposed_copper_bulb_get_state(
	const mc_26_3_waxed_exposed_copper_bulb_properties *properties
);

b8 mc_26_3_waxed_exposed_copper_bulb_get_properties(
	block_state_id state,
	mc_26_3_waxed_exposed_copper_bulb_properties *properties
);

block_state_id mc_26_3_waxed_exposed_copper_chain_get_state(
	const mc_26_3_waxed_exposed_copper_chain_properties *properties
);

b8 mc_26_3_waxed_exposed_copper_chain_get_properties(
	block_state_id state,
	mc_26_3_waxed_exposed_copper_chain_properties *properties
);

block_state_id mc_26_3_waxed_exposed_copper_chest_get_state(
	const mc_26_3_waxed_exposed_copper_chest_properties *properties
);

b8 mc_26_3_waxed_exposed_copper_chest_get_properties(
	block_state_id state,
	mc_26_3_waxed_exposed_copper_chest_properties *properties
);

block_state_id mc_26_3_waxed_exposed_copper_door_get_state(
	const mc_26_3_waxed_exposed_copper_door_properties *properties
);

b8 mc_26_3_waxed_exposed_copper_door_get_properties(
	block_state_id state,
	mc_26_3_waxed_exposed_copper_door_properties *properties
);

block_state_id mc_26_3_waxed_exposed_copper_golem_statue_get_state(
	const mc_26_3_waxed_exposed_copper_golem_statue_properties *properties
);

b8 mc_26_3_waxed_exposed_copper_golem_statue_get_properties(
	block_state_id state,
	mc_26_3_waxed_exposed_copper_golem_statue_properties *properties
);

block_state_id mc_26_3_waxed_exposed_copper_grate_get_state(
	const mc_26_3_waxed_exposed_copper_grate_properties *properties
);

b8 mc_26_3_waxed_exposed_copper_grate_get_properties(
	block_state_id state,
	mc_26_3_waxed_exposed_copper_grate_properties *properties
);

block_state_id mc_26_3_waxed_exposed_copper_lantern_get_state(
	const mc_26_3_waxed_exposed_copper_lantern_properties *properties
);

b8 mc_26_3_waxed_exposed_copper_lantern_get_properties(
	block_state_id state,
	mc_26_3_waxed_exposed_copper_lantern_properties *properties
);

block_state_id mc_26_3_waxed_exposed_copper_trapdoor_get_state(
	const mc_26_3_waxed_exposed_copper_trapdoor_properties *properties
);

b8 mc_26_3_waxed_exposed_copper_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_waxed_exposed_copper_trapdoor_properties *properties
);

block_state_id mc_26_3_waxed_exposed_cut_copper_slab_get_state(
	const mc_26_3_waxed_exposed_cut_copper_slab_properties *properties
);

b8 mc_26_3_waxed_exposed_cut_copper_slab_get_properties(
	block_state_id state,
	mc_26_3_waxed_exposed_cut_copper_slab_properties *properties
);

block_state_id mc_26_3_waxed_exposed_cut_copper_stairs_get_state(
	const mc_26_3_waxed_exposed_cut_copper_stairs_properties *properties
);

b8 mc_26_3_waxed_exposed_cut_copper_stairs_get_properties(
	block_state_id state,
	mc_26_3_waxed_exposed_cut_copper_stairs_properties *properties
);

block_state_id mc_26_3_waxed_exposed_lightning_rod_get_state(
	const mc_26_3_waxed_exposed_lightning_rod_properties *properties
);

b8 mc_26_3_waxed_exposed_lightning_rod_get_properties(
	block_state_id state,
	mc_26_3_waxed_exposed_lightning_rod_properties *properties
);

block_state_id mc_26_3_waxed_lightning_rod_get_state(
	const mc_26_3_waxed_lightning_rod_properties *properties
);

b8 mc_26_3_waxed_lightning_rod_get_properties(
	block_state_id state,
	mc_26_3_waxed_lightning_rod_properties *properties
);

block_state_id mc_26_3_waxed_oxidized_copper_bars_get_state(
	const mc_26_3_waxed_oxidized_copper_bars_properties *properties
);

b8 mc_26_3_waxed_oxidized_copper_bars_get_properties(
	block_state_id state,
	mc_26_3_waxed_oxidized_copper_bars_properties *properties
);

block_state_id mc_26_3_waxed_oxidized_copper_bulb_get_state(
	const mc_26_3_waxed_oxidized_copper_bulb_properties *properties
);

b8 mc_26_3_waxed_oxidized_copper_bulb_get_properties(
	block_state_id state,
	mc_26_3_waxed_oxidized_copper_bulb_properties *properties
);

block_state_id mc_26_3_waxed_oxidized_copper_chain_get_state(
	const mc_26_3_waxed_oxidized_copper_chain_properties *properties
);

b8 mc_26_3_waxed_oxidized_copper_chain_get_properties(
	block_state_id state,
	mc_26_3_waxed_oxidized_copper_chain_properties *properties
);

block_state_id mc_26_3_waxed_oxidized_copper_chest_get_state(
	const mc_26_3_waxed_oxidized_copper_chest_properties *properties
);

b8 mc_26_3_waxed_oxidized_copper_chest_get_properties(
	block_state_id state,
	mc_26_3_waxed_oxidized_copper_chest_properties *properties
);

block_state_id mc_26_3_waxed_oxidized_copper_door_get_state(
	const mc_26_3_waxed_oxidized_copper_door_properties *properties
);

b8 mc_26_3_waxed_oxidized_copper_door_get_properties(
	block_state_id state,
	mc_26_3_waxed_oxidized_copper_door_properties *properties
);

block_state_id mc_26_3_waxed_oxidized_copper_golem_statue_get_state(
	const mc_26_3_waxed_oxidized_copper_golem_statue_properties *properties
);

b8 mc_26_3_waxed_oxidized_copper_golem_statue_get_properties(
	block_state_id state,
	mc_26_3_waxed_oxidized_copper_golem_statue_properties *properties
);

block_state_id mc_26_3_waxed_oxidized_copper_grate_get_state(
	const mc_26_3_waxed_oxidized_copper_grate_properties *properties
);

b8 mc_26_3_waxed_oxidized_copper_grate_get_properties(
	block_state_id state,
	mc_26_3_waxed_oxidized_copper_grate_properties *properties
);

block_state_id mc_26_3_waxed_oxidized_copper_lantern_get_state(
	const mc_26_3_waxed_oxidized_copper_lantern_properties *properties
);

b8 mc_26_3_waxed_oxidized_copper_lantern_get_properties(
	block_state_id state,
	mc_26_3_waxed_oxidized_copper_lantern_properties *properties
);

block_state_id mc_26_3_waxed_oxidized_copper_trapdoor_get_state(
	const mc_26_3_waxed_oxidized_copper_trapdoor_properties *properties
);

b8 mc_26_3_waxed_oxidized_copper_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_waxed_oxidized_copper_trapdoor_properties *properties
);

block_state_id mc_26_3_waxed_oxidized_cut_copper_slab_get_state(
	const mc_26_3_waxed_oxidized_cut_copper_slab_properties *properties
);

b8 mc_26_3_waxed_oxidized_cut_copper_slab_get_properties(
	block_state_id state,
	mc_26_3_waxed_oxidized_cut_copper_slab_properties *properties
);

block_state_id mc_26_3_waxed_oxidized_cut_copper_stairs_get_state(
	const mc_26_3_waxed_oxidized_cut_copper_stairs_properties *properties
);

b8 mc_26_3_waxed_oxidized_cut_copper_stairs_get_properties(
	block_state_id state,
	mc_26_3_waxed_oxidized_cut_copper_stairs_properties *properties
);

block_state_id mc_26_3_waxed_oxidized_lightning_rod_get_state(
	const mc_26_3_waxed_oxidized_lightning_rod_properties *properties
);

b8 mc_26_3_waxed_oxidized_lightning_rod_get_properties(
	block_state_id state,
	mc_26_3_waxed_oxidized_lightning_rod_properties *properties
);

block_state_id mc_26_3_waxed_weathered_copper_bars_get_state(
	const mc_26_3_waxed_weathered_copper_bars_properties *properties
);

b8 mc_26_3_waxed_weathered_copper_bars_get_properties(
	block_state_id state,
	mc_26_3_waxed_weathered_copper_bars_properties *properties
);

block_state_id mc_26_3_waxed_weathered_copper_bulb_get_state(
	const mc_26_3_waxed_weathered_copper_bulb_properties *properties
);

b8 mc_26_3_waxed_weathered_copper_bulb_get_properties(
	block_state_id state,
	mc_26_3_waxed_weathered_copper_bulb_properties *properties
);

block_state_id mc_26_3_waxed_weathered_copper_chain_get_state(
	const mc_26_3_waxed_weathered_copper_chain_properties *properties
);

b8 mc_26_3_waxed_weathered_copper_chain_get_properties(
	block_state_id state,
	mc_26_3_waxed_weathered_copper_chain_properties *properties
);

block_state_id mc_26_3_waxed_weathered_copper_chest_get_state(
	const mc_26_3_waxed_weathered_copper_chest_properties *properties
);

b8 mc_26_3_waxed_weathered_copper_chest_get_properties(
	block_state_id state,
	mc_26_3_waxed_weathered_copper_chest_properties *properties
);

block_state_id mc_26_3_waxed_weathered_copper_door_get_state(
	const mc_26_3_waxed_weathered_copper_door_properties *properties
);

b8 mc_26_3_waxed_weathered_copper_door_get_properties(
	block_state_id state,
	mc_26_3_waxed_weathered_copper_door_properties *properties
);

block_state_id mc_26_3_waxed_weathered_copper_golem_statue_get_state(
	const mc_26_3_waxed_weathered_copper_golem_statue_properties *properties
);

b8 mc_26_3_waxed_weathered_copper_golem_statue_get_properties(
	block_state_id state,
	mc_26_3_waxed_weathered_copper_golem_statue_properties *properties
);

block_state_id mc_26_3_waxed_weathered_copper_grate_get_state(
	const mc_26_3_waxed_weathered_copper_grate_properties *properties
);

b8 mc_26_3_waxed_weathered_copper_grate_get_properties(
	block_state_id state,
	mc_26_3_waxed_weathered_copper_grate_properties *properties
);

block_state_id mc_26_3_waxed_weathered_copper_lantern_get_state(
	const mc_26_3_waxed_weathered_copper_lantern_properties *properties
);

b8 mc_26_3_waxed_weathered_copper_lantern_get_properties(
	block_state_id state,
	mc_26_3_waxed_weathered_copper_lantern_properties *properties
);

block_state_id mc_26_3_waxed_weathered_copper_trapdoor_get_state(
	const mc_26_3_waxed_weathered_copper_trapdoor_properties *properties
);

b8 mc_26_3_waxed_weathered_copper_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_waxed_weathered_copper_trapdoor_properties *properties
);

block_state_id mc_26_3_waxed_weathered_cut_copper_slab_get_state(
	const mc_26_3_waxed_weathered_cut_copper_slab_properties *properties
);

b8 mc_26_3_waxed_weathered_cut_copper_slab_get_properties(
	block_state_id state,
	mc_26_3_waxed_weathered_cut_copper_slab_properties *properties
);

block_state_id mc_26_3_waxed_weathered_cut_copper_stairs_get_state(
	const mc_26_3_waxed_weathered_cut_copper_stairs_properties *properties
);

b8 mc_26_3_waxed_weathered_cut_copper_stairs_get_properties(
	block_state_id state,
	mc_26_3_waxed_weathered_cut_copper_stairs_properties *properties
);

block_state_id mc_26_3_waxed_weathered_lightning_rod_get_state(
	const mc_26_3_waxed_weathered_lightning_rod_properties *properties
);

b8 mc_26_3_waxed_weathered_lightning_rod_get_properties(
	block_state_id state,
	mc_26_3_waxed_weathered_lightning_rod_properties *properties
);

block_state_id mc_26_3_weathered_copper_bars_get_state(
	const mc_26_3_weathered_copper_bars_properties *properties
);

b8 mc_26_3_weathered_copper_bars_get_properties(
	block_state_id state,
	mc_26_3_weathered_copper_bars_properties *properties
);

block_state_id mc_26_3_weathered_copper_bulb_get_state(
	const mc_26_3_weathered_copper_bulb_properties *properties
);

b8 mc_26_3_weathered_copper_bulb_get_properties(
	block_state_id state,
	mc_26_3_weathered_copper_bulb_properties *properties
);

block_state_id mc_26_3_weathered_copper_chain_get_state(
	const mc_26_3_weathered_copper_chain_properties *properties
);

b8 mc_26_3_weathered_copper_chain_get_properties(
	block_state_id state,
	mc_26_3_weathered_copper_chain_properties *properties
);

block_state_id mc_26_3_weathered_copper_chest_get_state(
	const mc_26_3_weathered_copper_chest_properties *properties
);

b8 mc_26_3_weathered_copper_chest_get_properties(
	block_state_id state,
	mc_26_3_weathered_copper_chest_properties *properties
);

block_state_id mc_26_3_weathered_copper_door_get_state(
	const mc_26_3_weathered_copper_door_properties *properties
);

b8 mc_26_3_weathered_copper_door_get_properties(
	block_state_id state,
	mc_26_3_weathered_copper_door_properties *properties
);

block_state_id mc_26_3_weathered_copper_golem_statue_get_state(
	const mc_26_3_weathered_copper_golem_statue_properties *properties
);

b8 mc_26_3_weathered_copper_golem_statue_get_properties(
	block_state_id state,
	mc_26_3_weathered_copper_golem_statue_properties *properties
);

block_state_id mc_26_3_weathered_copper_grate_get_state(
	const mc_26_3_weathered_copper_grate_properties *properties
);

b8 mc_26_3_weathered_copper_grate_get_properties(
	block_state_id state,
	mc_26_3_weathered_copper_grate_properties *properties
);

block_state_id mc_26_3_weathered_copper_lantern_get_state(
	const mc_26_3_weathered_copper_lantern_properties *properties
);

b8 mc_26_3_weathered_copper_lantern_get_properties(
	block_state_id state,
	mc_26_3_weathered_copper_lantern_properties *properties
);

block_state_id mc_26_3_weathered_copper_trapdoor_get_state(
	const mc_26_3_weathered_copper_trapdoor_properties *properties
);

b8 mc_26_3_weathered_copper_trapdoor_get_properties(
	block_state_id state,
	mc_26_3_weathered_copper_trapdoor_properties *properties
);

block_state_id mc_26_3_weathered_cut_copper_slab_get_state(
	const mc_26_3_weathered_cut_copper_slab_properties *properties
);

b8 mc_26_3_weathered_cut_copper_slab_get_properties(
	block_state_id state,
	mc_26_3_weathered_cut_copper_slab_properties *properties
);

block_state_id mc_26_3_weathered_cut_copper_stairs_get_state(
	const mc_26_3_weathered_cut_copper_stairs_properties *properties
);

b8 mc_26_3_weathered_cut_copper_stairs_get_properties(
	block_state_id state,
	mc_26_3_weathered_cut_copper_stairs_properties *properties
);

block_state_id mc_26_3_weathered_lightning_rod_get_state(
	const mc_26_3_weathered_lightning_rod_properties *properties
);

b8 mc_26_3_weathered_lightning_rod_get_properties(
	block_state_id state,
	mc_26_3_weathered_lightning_rod_properties *properties
);

block_state_id mc_26_3_weeping_vines_get_state(
	const mc_26_3_weeping_vines_properties *properties
);

b8 mc_26_3_weeping_vines_get_properties(
	block_state_id state,
	mc_26_3_weeping_vines_properties *properties
);

block_state_id mc_26_3_wheat_get_state(
	const mc_26_3_wheat_properties *properties
);

b8 mc_26_3_wheat_get_properties(
	block_state_id state,
	mc_26_3_wheat_properties *properties
);

block_state_id mc_26_3_white_banner_get_state(
	const mc_26_3_white_banner_properties *properties
);

b8 mc_26_3_white_banner_get_properties(
	block_state_id state,
	mc_26_3_white_banner_properties *properties
);

block_state_id mc_26_3_white_bed_get_state(
	const mc_26_3_white_bed_properties *properties
);

b8 mc_26_3_white_bed_get_properties(
	block_state_id state,
	mc_26_3_white_bed_properties *properties
);

block_state_id mc_26_3_white_candle_get_state(
	const mc_26_3_white_candle_properties *properties
);

b8 mc_26_3_white_candle_get_properties(
	block_state_id state,
	mc_26_3_white_candle_properties *properties
);

block_state_id mc_26_3_white_candle_cake_get_state(
	const mc_26_3_white_candle_cake_properties *properties
);

b8 mc_26_3_white_candle_cake_get_properties(
	block_state_id state,
	mc_26_3_white_candle_cake_properties *properties
);

block_state_id mc_26_3_white_concrete_slab_get_state(
	const mc_26_3_white_concrete_slab_properties *properties
);

b8 mc_26_3_white_concrete_slab_get_properties(
	block_state_id state,
	mc_26_3_white_concrete_slab_properties *properties
);

block_state_id mc_26_3_white_concrete_stairs_get_state(
	const mc_26_3_white_concrete_stairs_properties *properties
);

b8 mc_26_3_white_concrete_stairs_get_properties(
	block_state_id state,
	mc_26_3_white_concrete_stairs_properties *properties
);

block_state_id mc_26_3_white_glazed_terracotta_get_state(
	const mc_26_3_white_glazed_terracotta_properties *properties
);

b8 mc_26_3_white_glazed_terracotta_get_properties(
	block_state_id state,
	mc_26_3_white_glazed_terracotta_properties *properties
);

block_state_id mc_26_3_white_shulker_box_get_state(
	const mc_26_3_white_shulker_box_properties *properties
);

b8 mc_26_3_white_shulker_box_get_properties(
	block_state_id state,
	mc_26_3_white_shulker_box_properties *properties
);

block_state_id mc_26_3_white_stained_glass_pane_get_state(
	const mc_26_3_white_stained_glass_pane_properties *properties
);

b8 mc_26_3_white_stained_glass_pane_get_properties(
	block_state_id state,
	mc_26_3_white_stained_glass_pane_properties *properties
);

block_state_id mc_26_3_white_wall_banner_get_state(
	const mc_26_3_white_wall_banner_properties *properties
);

b8 mc_26_3_white_wall_banner_get_properties(
	block_state_id state,
	mc_26_3_white_wall_banner_properties *properties
);

block_state_id mc_26_3_white_wool_slab_get_state(
	const mc_26_3_white_wool_slab_properties *properties
);

b8 mc_26_3_white_wool_slab_get_properties(
	block_state_id state,
	mc_26_3_white_wool_slab_properties *properties
);

block_state_id mc_26_3_white_wool_stairs_get_state(
	const mc_26_3_white_wool_stairs_properties *properties
);

b8 mc_26_3_white_wool_stairs_get_properties(
	block_state_id state,
	mc_26_3_white_wool_stairs_properties *properties
);

block_state_id mc_26_3_wildflowers_get_state(
	const mc_26_3_wildflowers_properties *properties
);

b8 mc_26_3_wildflowers_get_properties(
	block_state_id state,
	mc_26_3_wildflowers_properties *properties
);

block_state_id mc_26_3_wither_skeleton_skull_get_state(
	const mc_26_3_wither_skeleton_skull_properties *properties
);

b8 mc_26_3_wither_skeleton_skull_get_properties(
	block_state_id state,
	mc_26_3_wither_skeleton_skull_properties *properties
);

block_state_id mc_26_3_wither_skeleton_wall_skull_get_state(
	const mc_26_3_wither_skeleton_wall_skull_properties *properties
);

b8 mc_26_3_wither_skeleton_wall_skull_get_properties(
	block_state_id state,
	mc_26_3_wither_skeleton_wall_skull_properties *properties
);

block_state_id mc_26_3_yellow_banner_get_state(
	const mc_26_3_yellow_banner_properties *properties
);

b8 mc_26_3_yellow_banner_get_properties(
	block_state_id state,
	mc_26_3_yellow_banner_properties *properties
);

block_state_id mc_26_3_yellow_bed_get_state(
	const mc_26_3_yellow_bed_properties *properties
);

b8 mc_26_3_yellow_bed_get_properties(
	block_state_id state,
	mc_26_3_yellow_bed_properties *properties
);

block_state_id mc_26_3_yellow_candle_get_state(
	const mc_26_3_yellow_candle_properties *properties
);

b8 mc_26_3_yellow_candle_get_properties(
	block_state_id state,
	mc_26_3_yellow_candle_properties *properties
);

block_state_id mc_26_3_yellow_candle_cake_get_state(
	const mc_26_3_yellow_candle_cake_properties *properties
);

b8 mc_26_3_yellow_candle_cake_get_properties(
	block_state_id state,
	mc_26_3_yellow_candle_cake_properties *properties
);

block_state_id mc_26_3_yellow_concrete_slab_get_state(
	const mc_26_3_yellow_concrete_slab_properties *properties
);

b8 mc_26_3_yellow_concrete_slab_get_properties(
	block_state_id state,
	mc_26_3_yellow_concrete_slab_properties *properties
);

block_state_id mc_26_3_yellow_concrete_stairs_get_state(
	const mc_26_3_yellow_concrete_stairs_properties *properties
);

b8 mc_26_3_yellow_concrete_stairs_get_properties(
	block_state_id state,
	mc_26_3_yellow_concrete_stairs_properties *properties
);

block_state_id mc_26_3_yellow_glazed_terracotta_get_state(
	const mc_26_3_yellow_glazed_terracotta_properties *properties
);

b8 mc_26_3_yellow_glazed_terracotta_get_properties(
	block_state_id state,
	mc_26_3_yellow_glazed_terracotta_properties *properties
);

block_state_id mc_26_3_yellow_poplar_leaves_get_state(
	const mc_26_3_yellow_poplar_leaves_properties *properties
);

b8 mc_26_3_yellow_poplar_leaves_get_properties(
	block_state_id state,
	mc_26_3_yellow_poplar_leaves_properties *properties
);

block_state_id mc_26_3_yellow_shulker_box_get_state(
	const mc_26_3_yellow_shulker_box_properties *properties
);

b8 mc_26_3_yellow_shulker_box_get_properties(
	block_state_id state,
	mc_26_3_yellow_shulker_box_properties *properties
);

block_state_id mc_26_3_yellow_stained_glass_pane_get_state(
	const mc_26_3_yellow_stained_glass_pane_properties *properties
);

b8 mc_26_3_yellow_stained_glass_pane_get_properties(
	block_state_id state,
	mc_26_3_yellow_stained_glass_pane_properties *properties
);

block_state_id mc_26_3_yellow_wall_banner_get_state(
	const mc_26_3_yellow_wall_banner_properties *properties
);

b8 mc_26_3_yellow_wall_banner_get_properties(
	block_state_id state,
	mc_26_3_yellow_wall_banner_properties *properties
);

block_state_id mc_26_3_yellow_wool_slab_get_state(
	const mc_26_3_yellow_wool_slab_properties *properties
);

b8 mc_26_3_yellow_wool_slab_get_properties(
	block_state_id state,
	mc_26_3_yellow_wool_slab_properties *properties
);

block_state_id mc_26_3_yellow_wool_stairs_get_state(
	const mc_26_3_yellow_wool_stairs_properties *properties
);

b8 mc_26_3_yellow_wool_stairs_get_properties(
	block_state_id state,
	mc_26_3_yellow_wool_stairs_properties *properties
);

block_state_id mc_26_3_zombie_head_get_state(
	const mc_26_3_zombie_head_properties *properties
);

b8 mc_26_3_zombie_head_get_properties(
	block_state_id state,
	mc_26_3_zombie_head_properties *properties
);

block_state_id mc_26_3_zombie_wall_head_get_state(
	const mc_26_3_zombie_wall_head_properties *properties
);

b8 mc_26_3_zombie_wall_head_get_properties(
	block_state_id state,
	mc_26_3_zombie_wall_head_properties *properties
);

block_state_id mc_26_3_get_placement_state(
	block_state_id state, u8 facing, u8 axis
);

#endif
