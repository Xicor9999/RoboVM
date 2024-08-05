#include <gazebo/gazebo.hh>

namespace gazebo
{
  class ThuanLD5Plugin : public WorldPlugin
  {
    public: ThuanLD5Plugin() : WorldPlugin()
	    {
	      printf("Welcome to ThuanLD5's World!\n");
	    }
    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
	    {
	    }
  };
  GZ_REGISTER_WORLD_PLUGIN(ThuanLD5Plugin)
}
