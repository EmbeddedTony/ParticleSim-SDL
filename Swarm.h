#pragma once


#include <iostream>
#include "Particle.h"
using namespace std;

namespace steinsgate {

	class Swarm {
	public:
		const static int NPARTICLES = 5000;

	private:
		Particle *m_pParticles;

	public:
		Swarm();
		virtual ~Swarm();

		const Particle* const getParticles() { return m_pParticles; };
	};

}
