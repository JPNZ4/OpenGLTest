#pragma once

#include "test.h"

namespace test {

	class TestClearCoat : public Test
	{
		public:
			TestClearCoat();
			~TestClearCoat();

			void OnUpdate(float deltaTime) override;
			void OnRender() override;
			void OnImGuiRender() override;
	private:
		float m_ClearColor[4];
	};
}
