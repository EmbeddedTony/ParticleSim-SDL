#pragma once



namespace steinsgate {

	struct Particle {
		double m_x;
		double m_y;

	public:
		Particle();
		virtual ~Particle();
	};

}