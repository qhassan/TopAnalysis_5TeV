for dir in $(find /afs/cern.ch/user/q/qhassan/workQhassan/5TeV/CMSSW_8_0_8_patch1/src/TopLJets2015/ ! -name ".*" -type d ) 
do
    echo 'giving read persmision for directory:' $dir
    fs setacl $dir gkrintir read
done
