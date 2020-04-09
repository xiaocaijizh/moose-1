//* This file is part of the MOOSE framework
//* https://www.mooseframework.org
//*
//* All rights reserved, see COPYRIGHT for full restrictions
//* https://github.com/idaholab/moose/blob/master/COPYRIGHT
//*
//* Licensed under LGPL 2.1, please see LICENSE for details
//* https://www.gnu.org/licenses/lgpl-2.1.html

#pragma once

#include "ComputeElasticityTensorBase.h"

/**
 * ComputeRotatedElasticityTensorBase is an intermediate base class that rotates an elasticity
 * tensor based on euler angles.
 */
class ComputeRotatedElasticityTensorBase : public ComputeElasticityTensorBase
{
public:
  static InputParameters validParams();

  ComputeRotatedElasticityTensorBase(const InputParameters & parameters);

protected:
  RealVectorValue _Euler_angles;
};
