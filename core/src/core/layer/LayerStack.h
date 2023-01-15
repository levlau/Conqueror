#pragma once
#include "_Core.h"
#include "utility.h"

#include "Layer.h"

namespace core
{

	class CORE_API LayerStack
	{
		using stack = std::vector<Layer*>;
	private:
		std::vector<Layer*> layers;
		int insertLayerIndex = 0;

	public:
		LayerStack();
		~LayerStack();

		void addLayer(Layer* layer);
		void addOverlay(Layer* layer);
		void removeLayer(Layer* layer);
		void removeOverlay(Layer* layer);

		stack::iterator begin()						 { return layers.begin();  }
		stack::iterator end()						 { return layers.end();    }
		stack::reverse_iterator rbegin()			 { return layers.rbegin(); }
		stack::reverse_iterator rend()				 { return layers.rend();   }
		stack::const_iterator begin()		   const { return layers.begin();  }
		stack::const_iterator end()			   const { return layers.end();	   }
		stack::const_reverse_iterator rbegin() const { return layers.rbegin(); }
		stack::const_reverse_iterator rend()   const { return layers.rend();   }

		int GetPlace(Layer* layer) const;
		uint64_t GetSize() const { return layers.size(); }
		Layer* operator[](int index)
		{
			return layers[index];
		}
	};
	
}

