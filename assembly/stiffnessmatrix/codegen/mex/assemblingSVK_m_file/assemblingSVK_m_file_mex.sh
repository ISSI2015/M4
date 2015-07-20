MATLAB="/home/ksimon/Software/Matlab/matlabR2013a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/ksimon/.matlab/R2013a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for assemblingSVK_m_file" > assemblingSVK_m_file_mex.mki
echo "CC=$CC" >> assemblingSVK_m_file_mex.mki
echo "CFLAGS=$CFLAGS" >> assemblingSVK_m_file_mex.mki
echo "CLIBS=$CLIBS" >> assemblingSVK_m_file_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> assemblingSVK_m_file_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> assemblingSVK_m_file_mex.mki
echo "CXX=$CXX" >> assemblingSVK_m_file_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> assemblingSVK_m_file_mex.mki
echo "CXXLIBS=$CXXLIBS" >> assemblingSVK_m_file_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> assemblingSVK_m_file_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> assemblingSVK_m_file_mex.mki
echo "LD=$LD" >> assemblingSVK_m_file_mex.mki
echo "LDFLAGS=$LDFLAGS" >> assemblingSVK_m_file_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> assemblingSVK_m_file_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> assemblingSVK_m_file_mex.mki
echo "Arch=$Arch" >> assemblingSVK_m_file_mex.mki
echo OMPFLAGS= >> assemblingSVK_m_file_mex.mki
echo OMPLINKFLAGS= >> assemblingSVK_m_file_mex.mki
echo "EMC_COMPILER=" >> assemblingSVK_m_file_mex.mki
echo "EMC_CONFIG=optim" >> assemblingSVK_m_file_mex.mki
"/home/ksimon/Software/Matlab/matlabR2013a/bin/glnxa64/gmake" -B -f assemblingSVK_m_file_mex.mk
