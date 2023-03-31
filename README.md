<!--
Copyright (C) 2018, 2023 Mitsubishi Electric Research Laboratories (MERL)

SPDX-License-Identifier: AGPL-3.0-or-later
-->

# Fast Resampling on Point Clouds via Graphs

## Features

The software "FRPC" package is intended to demonstrate how to use a
graph based filter to conduct subsampling on an input point cloud.


## Installation

### Compile the mex function

Under `./graphScore` subfolder is the C++ source code that perform graph
filtering on an input point cloud.

The functions are wrapped up with a mex interface that could be called
from Matlab.

The package depends on:

* nanoflann     already included within the distribution. See `./graphScore/nanoflann`

* eigen3        not included within the distribution. See the following
                web link: https://eigen.tuxfamily.org/dox/GettingStarted.html

### Compilation command

Use `./compile.bash` under `./graphScore`. Note that you may need to update the pointer to eigen3.

## Usage

### Matlab script to run demonstration

Run `testSubsample.m` under the root directory. You should be able to
produce the subsampling results as shown in `./sample.png`.

The demonstration script would generate a series of subsampled version
from an input point cloud. The points from a sparser version always
appear in a denser version. The is implemented through
subsamplePointCloudGranual.m that calls the proposed graph filter.

Matlab Computer Vision Toolbox is needed to load the `.ply` file

### Graph filter selection

   The graph filter selection is fixed to be graph Laplacian. For other
   optional graph filters, you need to edit the function `buildGraphEigen()`,
   C++ code `graphFilter.cpp` under `./graphScore`.

### Example point cloud data

   Example point cloud data can be found under `./ply`

## Citation

If you use the software, please cite the following  ([TR2017-215](https://merl.com/publications/TR2017-215)):

```BibTeX
@article{Chen2017nov,
    author = {Chen, Siheng and Tian, Dong and Feng, Chen and Vetro, Anthony and Kovacevic, Jelena},
    title = {Fast Resampling of 3D Point Clouds via Graphs},
    journal = {IEEE Transactions on Signal Processing},
    year = 2017,
    volume = 66,
    number = 3,
    pages = {666--681},
    month = nov,
    doi = {10.1109/TSP.2017.2771730},
    url = {https://www.merl.com/publications/TR2017-215}
}
```

## Contact

Anthony Vetro <avetro@merl.com>

## Contributing

See [CONTRIBUTING.md](CONTRIBUTING.md) for our policy on contributions.

## License

Released under `AGPL-3.0-or-later` license, as found in the [LICENSE.md](LICENSE.md) file.

All files, except as noted below:

```
Copyright (C) 2018, 2023 Mitsubishi Electric Research Laboratories (MERL).

SPDX-License-Identifier: AGPL-3.0-or-later
```

`graphScore/nanoflann/KDTreeVectorOfVectorsAdaptor.h` (see [BSD-2-Clause.txt](BSD-2-Clause.txt)):

```
Copyright 2011-16 Jose Luis Blanco (joseluisblancoc@gmail.com). All rights reserved.

SPDX-License-Identifier: BSD-2-Clause
```

`graphScore/nanoflann/nanoflann.hpp` (see [BSD-2-Clause.txt](BSD-2-Clause.txt)):

```
Copyright 2008-2009  Marius Muja (mariusm@cs.ubc.ca). All rights reserved.
Copyright 2008-2009  David G. Lowe (lowe@cs.ubc.ca). All rights reserved.
Copyright 2011-2016  Jose Luis Blanco (joseluisblancoc@gmail.com). All rights reserved.

SPDX-License-Identifier: BSD-2-Clause
```
