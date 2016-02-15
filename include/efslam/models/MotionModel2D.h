/*
 * Software License Agreement (BSD License)
 *
 *  Evidential FastSLAM - An evidential approach to SLAM
 *  Copyright (c) 2013-2016, Joachim Clemens, Thomas Reineking, Tobias Kluth
 *  All rights reserved.
 *
 *  This file is partially based on the GMapping MotionModel class
 *  Copyright (c) 2004-2007, Giorgio Grisetti, Cyrill Stachniss, Wolfram Burgard
 *  Originally licensed under the Creative Commons (Attribution-NonCommercial-ShareAlike).
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *
 *  * Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 *  * Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 *  * Neither the name of Evidential FastSLAM nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 *  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 *  DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 *  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 *  OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef EFS_MOTIONMODEL2D_H_
#define EFS_MOTIONMODEL2D_H_

#include "MotionModel.h"
#include "efslam/utils/PoseSE2.h"

namespace efs {

template<>
class MotionModel<PoseSE2> {
public:
					MotionModel();
	virtual 		~MotionModel();

	void			setParamsConfig();

	inline PoseSE2	draw( const PoseSE2 &pose, double linearMove, double angularMove ) const;
	inline PoseSE2	draw( const PoseSE2 &pose, const PoseSE2 &oldPose, const PoseSE2 &newPose ) const;

protected:
	double		m_transTransSigma,
				m_transRotSigma,
				m_rotRotSigma,
				m_rotTransSigma;
};

} /* namespace efs */

#include "MotionModel2D.hpp"

#endif /* EFS_MOTIONMODEL2D_H_ */
