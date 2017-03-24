![Project Status: Active](https://img.shields.io/badge/project-active-green.svg)
  -----------------------------------------------------------------------------------------------------------------------------

			 ██████╗ ██████╗ ███████╗███╗   ██╗ █████╗ ██╗      ██████╗  ██████╗
			██╔═══██╗██╔══██╗██╔════╝████╗  ██║██╔══██╗██║     ██╔════╝ ██╔═══██╗
			██║   ██║██████╔╝█████╗  ██╔██╗ ██║███████║██║     ██║  ███╗██║   ██║
			██║   ██║██╔═══╝ ██╔══╝  ██║╚██╗██║██╔══██║██║     ██║   ██║██║   ██║
			╚██████╔╝██║     ███████╗██║ ╚████║██║  ██║███████╗╚██████╔╝╚██████╔╝
			 ╚═════╝ ╚═╝     ╚══════╝╚═╝  ╚═══╝╚═╝  ╚═╝╚══════╝ ╚═════╝  ╚═════╝

  -----------------------------------------------------------------------------------------------------------------------------



openAlgo is a public repository for various work product relavant to algorithms and the high frequency low latency electronic trading space with a bias toward market microstructure as well as exchange traded futures and options.

The repository is divided in to sections for a modest amount of organization across interests and software used.

## Sections ##
- [C++](https://github.com/mtompkins/openAlgo/tree/master/Cpp)
- [Hardware Hints](https://github.com/mtompkins/hardware-hints)
- [HFT Linux Kernel Utilities](https://github.com/mtompkins/linux-kernel-utilities)
- [Matlab](https://github.com/mtompkins/openAlgo/tree/master/Matlab)
- [MultiCharts](https://github.com/mtompkins/openAlgo/tree/master/MultiCharts)
- [TradeStation](https://github.com/mtompkins/openAlgo/tree/master/TradeStation)

## Setup ##
This repository uses submodules
```
git clone --recursive https://github.com/mtompkins/openAlgo.git
```

## Update ##
The submodules require an extra step
```
git pull
git submodule update --remote --merge
```

Revision: 5780.25390
