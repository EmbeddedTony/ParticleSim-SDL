#include "Swarm.h"
#include <iostream>



namespace steinsgate {

	Swarm::Swarm() {
		m_pParticles = new Particle[NPARTICLES];

	}

	Swarm::~Swarm() {
		delete[] m_pParticles;
	}



}