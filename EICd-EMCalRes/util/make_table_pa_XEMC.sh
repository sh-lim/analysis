#!/bin/sh

#regenerate table_pa_XEMC, which holds condor arguments for de2pa_XEMC

rm table_pa_XEMC

while read filename_rcli1 filename_de; do
	filename_pa="PA.root"
	filename_qa=$(printf '%s' $filename_de | sed 's/^DE/QA/' | sed 's/root$/pdf/')
	printf "%s %s %s\n" $filename_de $filename_pa $filename_qa
done < table_de_XEMC > table_pa_XEMC