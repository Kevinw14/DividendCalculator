 add_executable(DividendCalculator 
	main.c
	)

 # Pull in our pico_stdlib which pulls in commonly used features
 target_link_libraries(DividendCalculator pico_stdlib)


 # create map/bin/hex file etc.
 pico_add_extra_outputs(DividendCalculator)


 # add url via pico_set_program_url
 example_auto_set_url(DividendCalculator)
