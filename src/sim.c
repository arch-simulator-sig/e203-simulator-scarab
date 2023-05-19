#include "sim.h"
#include "globals/global_types.h"
#include "general.param.h"
#include "model_table.def"
#include "model.h"

Model * model;

uns      operating_mode = SIMULATION_MODE;

static void init_model(uns mode) {
    model = &model_table[SIM_MODEL];
    model->init_func(mode);
}

void full_sim() {


  init_model(operating_mode);
}