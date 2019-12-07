/*
 * Density.cpp
 *
 *  Created on: Oct 30, 2013
 *      Author: Flavio
 */

#include "Density.h"
#include "../Utilities/Utils.h"

Density::Density() {

}

Density::~Density() {

}

std::string Density::get_output_string(llint curr_step) {
	int N = *_config_info->N;
	number V = _config_info->box->V();
	return Utils::sformat("%# 10.8g", N / V);
}

void Density::get_settings(input_file &my_inp, input_file &sim_inp) {

}
