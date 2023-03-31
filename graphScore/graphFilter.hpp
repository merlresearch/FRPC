// Copyright (C) 2018, 2023 Mitsubishi Electric Research Laboratories (MERL)
//
// SPDX-License-Identifier: AGPL-3.0-or-later

#ifndef GRAPHFILTER_HPP
#define GRAPHFILTER_HPP

#include "pccProcessing.hpp"
#include "nanoflann/nanoflann.hpp"

using namespace nanoflann;
#include "nanoflann/KDTreeVectorOfVectorsAdaptor.h"

using namespace pcc_processing;

namespace graphFiltering {

  class commandPar
  {
  public:
    float radius;             //! radius to construct the graph
    int max_nn;               //! max_nn for radius search

    commandPar()
      {
        max_nn = 30;
        radius = 0.0;
      }
  };


  int computeScore( PccPointCloud &cloud, double* pScore );

}

#endif
