#pragma once
#include <engine.h>

class example_layer : public engine::layer
{
public:
	example_layer();
	~example_layer();

	void on_update(const engine::timestep& time_step) override;
	void on_render() override;
	void on_event(engine::event& event) override;

private:

	float m_position;
	float m_speed;

	
	

	engine::ref<engine::texture_2d>     m_skybox_texture{};
	engine::ref<engine::skybox>			m_skybox{};
	engine::ref<engine::game_object>	m_sphere;

	//engine::ref<engine::game_object>	m_sphere2;
	//engine::ref<engine::game_object>	m_sphere3;

	engine::orthographic_camera       m_2d_camera;
	engine::perspective_camera        m_3d_camera;
};
