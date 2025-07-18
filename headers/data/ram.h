#ifndef HEADERS_DATA_RAM_H_
#define HEADERS_DATA_RAM_H_

extern uint8_t DEFAULT_MEMORY_ARENA_MEMORY[1991680];
extern struct mem_arena GROUND_MEMORY_ARENA_2;
extern struct mem_block GROUND_MEMORY_ARENA_2_BLOCKS[32];
extern uint8_t GROUND_MEMORY_ARENA_2_MEMORY[720100];
extern struct rgba* DUNGEON_COLORMAP_PTR;
extern struct dungeon DUNGEON_STRUCT;
extern struct move_data_table MOVE_DATA_TABLE;
extern struct mem_arena SOUND_MEMORY_ARENA;
extern struct mem_block SOUND_MEMORY_ARENA_BLOCKS[20];
extern uint8_t SOUND_MEMORY_ARENA_MEMORY[245252];
extern uint32_t FRAMES_SINCE_LAUNCH;
extern struct touchscreen_status TOUCHSCREEN_STATUS;
extern struct item BAG_ITEMS[50];
extern struct item* BAG_ITEMS_PTR;
extern struct item_id_16 STORAGE_ITEMS[1000];
extern uint16_t STORAGE_ITEM_QUANTITIES[1000];
extern struct bulk_item* KECLEON_SHOP_ITEMS_PTR;
extern struct bulk_item KECLEON_SHOP_ITEMS[8];
extern struct bulk_item UNUSED_KECLEON_SHOP_ITEMS[8];
extern struct bulk_item* KECLEON_WARES_ITEMS_PTR;
extern struct bulk_item KECLEON_WARES_ITEMS[4];
extern struct bulk_item UNUSED_KECLEON_WARES_ITEMS[4];
extern int32_t MONEY_CARRIED;
extern int32_t MONEY_STORED;
extern struct audio_command AUDIO_COMMANDS_BUFFER[16];
extern struct mem_arena* SOUND_MEMORY_ARENA_PTR;
extern struct window_list WINDOW_LIST;
extern uint16_t CURSOR_16_SPRITE_ID;
extern uint16_t CURSOR_SPRITE_ID;
extern struct animation_control* CURSOR_ANIMATION_CONTROL;
extern struct animation_control* CURSOR_16_ANIMATION_CONTROL;
extern uint16_t ALERT_SPRITE_ID;
extern struct animation_control* ALERT_ANIMATION_CONTROL;
extern struct move LAST_NEW_MOVE;
extern struct script_var_value_table SCRIPT_VARS_VALUES;
extern uint8_t BAG_LEVEL;
extern struct special_episode_type_8 DEBUG_SPECIAL_EPISODE_NUMBER;
extern struct file_stream KAOMADO_STREAM;
extern struct dungeon_id_8 PENDING_DUNGEON_ID;
extern uint8_t PENDING_STARTING_FLOOR;
extern uint32_t PLAY_TIME_SECONDS;
extern uint8_t PLAY_TIME_FRAME_COUNTER;
#if PMDSKY_VERSION == PMDSKY_JP
#define TEAM_NAME_LENGTH_ 5
#else
#define TEAM_NAME_LENGTH_ 10
#endif
extern char TEAM_NAME[TEAM_NAME_LENGTH_];
extern struct monster_id_16 LEVEL_UP_DATA_MONSTER_ID;
extern struct level_up_entry LEVEL_UP_DATA_DECOMPRESS_BUFFER[100];
extern struct team_member_table TEAM_MEMBER_TABLE;
extern uint16_t DISP_MODE;
extern uint16_t GXI_VRAM_LOCK_ID;
extern struct vram_banks_set ENABLED_VRAM_BANKS;
extern undefined4 SUB_BG_EXT_PLTT;
extern undefined4 CLR_IMG;
extern struct thread_info THREAD_INFO_STRUCT;
extern uint32_t FRAMES_SINCE_LAUNCH_TIMES_THREE;
extern struct mem_arena* GROUND_MEMORY_ARENA_1_PTR;
extern struct mem_arena* GROUND_MEMORY_ARENA_2_PTR;
extern bool LOCK_NOTIFY_ARRAY[20];
extern struct mem_arena GROUND_MEMORY_ARENA_1;
extern struct mem_block GROUND_MEMORY_ARENA_1_BLOCKS[52];
extern uint8_t GROUND_MEMORY_ARENA_1_MEMORY[408324];
extern struct sentry_duty SENTRY_DUTY_STRUCT;
extern bool TURNING_ON_THE_SPOT_FLAG;
extern struct loaded_attack_sprite_data* LOADED_ATTACK_SPRITE_DATA;
extern enum mobility_type MOBILITY_TYPE_TO_DUNGEON_MOBILITY_TYPE[8];
extern bool AI_THROWN_ITEM_DIRECTION_IS_USED[8];
extern uint32_t AI_THROWN_ITEM_PROBABILITIES[8];
extern uint32_t AI_THROWN_ITEM_DIRECTIONS[8];
extern bool AI_CAN_ATTACK_IN_DIRECTION[8];
extern struct direction_id_8 AI_POTENTIAL_ATTACK_TARGET_DIRECTIONS[8];
extern uint32_t AI_POTENTIAL_ATTACK_TARGET_WEIGHTS[8];
extern struct entity* AI_POTENTIAL_ATTACK_TARGETS[8];
extern bool ROLLOUT_ICE_BALL_MISSED;
extern bool MULTIHIT_FATIGUE_MOVE_USED;
extern bool TWINEEDLE_HIT_TRACKER;
extern bool RAPID_SPIN_BINDING_REMOVAL;
extern int ROLLOUT_ICE_BALL_SUCCESSIVE_HITS;
extern int MULTIHIT_MOVE_SUCCESSIVE_HITS;
extern int TRIPLE_KICK_SUCCESSIVE_HITS;
extern int METRONOME_NEXT_INDEX;
extern struct tile DEFAULT_TILE_COPY;
extern struct floor_generation_status FLOOR_GENERATION_STATUS;
extern struct stairs_menu* STAIRS_MENU_PTR;

#endif
