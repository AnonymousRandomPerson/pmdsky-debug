#ifndef HEADERS_FUNCTIONS_ARM9_ITCM_H_
#define HEADERS_FUNCTIONS_ARM9_ITCM_H_

void CopyAndInterleave(uint16_t* dst, uint16_t* src, uint32_t len, uint8_t val);
void CopyAndInterleave0(uint16_t* dst, uint16_t* src, int len);
void Render3dSetTextureParams(struct render_3d_texture_params* params, int vram_offset);
void Render3dSetPaletteBase(struct render_3d_texture_params* params, uint32_t palette_base_addr);
void Render3dRectangle(struct render_3d_rectangle* rectangle);
void GeomSetPolygonAttributes(uint8_t polygon_id, uint8_t alpha);
void Render3dQuadrilateral(struct render_3d_quadrilateral* quadrilateral);
void Render3dTiling(struct render_3d_tiling* tiling);
void Render3dTextureInternal(struct render_3d_texture* texture);
void Render3dTexture(struct render_3d_texture* texture);
void Render3dTextureNoSetup(struct render_3d_texture* texture);
union render_3d_element* NewRender3dElement(void);
void EnqueueRender3dTexture(union render_3d_element* element);
void EnqueueRender3dTiling(union render_3d_element* element);
struct render_3d_rectangle* NewRender3dRectangle(void);
struct render_3d_quadrilateral* NewRender3dQuadrilateral(void);
struct render_3d_texture* NewRender3dTexture(void);
struct render_3d_tiling* NewRender3dTiling(void);
void Render3dProcessQueue(void);
void GetKeyN2MSwitch(int key, int sw);
enum monster_id GetKeyN2M(int key);
enum monster_id GetKeyN2MBaseForm(int key);
void GetKeyM2NSwitch(enum monster_id monster_id, int sw);
int GetKeyM2N(enum monster_id monster_id);
int GetKeyM2NBaseForm(enum monster_id monster_id);
void HardwareInterrupt(void);
void ReturnFromInterrupt(void);
void InitDmaTransfer_Standard(uint8_t channel, void* src, void* dst, uint16_t word_count);
bool ShouldMonsterRunAwayAndShowEffectOutlawCheck(struct entity* monster,
                                                  bool show_run_away_effect);
void AiMovement(struct entity* monster, bool show_run_away_effect);
void CalculateAiTargetPos(struct entity* monster);
void ChooseAiMove(struct entity* monster);
bool LightningRodStormDrainCheck(struct entity* attacker, struct entity* defender,
                                 struct move* move, bool storm_drain);

#endif
