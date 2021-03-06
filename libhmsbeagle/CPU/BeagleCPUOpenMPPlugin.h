/**
 * libhmsbeagle plugin system
 * @author Aaron E. Darling
 * Based on code found in "Dynamic Plugins for C++" by Arthur J. Musgrove
 * and published in Dr. Dobbs Journal, July 1, 2004.
 */

#ifndef __BEAGLE_CPU_OPENMP_PLUGIN_H__
#define __BEAGLE_CPU_OPENMP_PLUGIN_H__

#ifdef HAVE_CONFIG_H
#include "libhmsbeagle/config.h"
#endif

#include "libhmsbeagle/platform.h"
#include "libhmsbeagle/plugin/Plugin.h"

namespace beagle {
namespace cpu {

/*
 * An OpenMP plugin based on the standard CPU plugin
 * This plugin uses all the same code as the CPU plugin, but should be built with
 * OpenMP enabled
 */
class BEAGLE_DLLEXPORT BeagleCPUOpenMPPlugin : public beagle::plugin::Plugin
{
public:
	BeagleCPUOpenMPPlugin();
private:
	BeagleCPUOpenMPPlugin( const BeagleCPUOpenMPPlugin& cp );	// disallow copy by defining this private
};

} // namespace cpu
} // namespace beagle

extern "C" {
	BEAGLE_DLLEXPORT void* plugin_init(void);
}

#endif	// __BEAGLE_CPU_OPENMP_PLUGIN_H__


