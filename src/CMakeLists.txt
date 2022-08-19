set(HEADER_PATH ${libnova_SOURCE_DIR}/src/${LIBRARY_NAME})

set(LIBRARY_PUBLIC_HEADERS
	${HEADER_PATH}/julian_day.h
	${HEADER_PATH}/dynamical_time.h
	${HEADER_PATH}/sidereal_time.h
	${HEADER_PATH}/transform.h
	${HEADER_PATH}/nutation.h
	${HEADER_PATH}/libnova.h
	${HEADER_PATH}/aberration.h  
	${HEADER_PATH}/apparent_position.h
	${HEADER_PATH}/solar.h
	${HEADER_PATH}/precession.h 
	${HEADER_PATH}/proper_motion.h
	${HEADER_PATH}/mercury.h
	${HEADER_PATH}/venus.h 
	${HEADER_PATH}/earth.h 
	${HEADER_PATH}/mars.h  
	${HEADER_PATH}/jupiter.h
	${HEADER_PATH}/saturn.h 
	${HEADER_PATH}/uranus.h 
	${HEADER_PATH}/neptune.h 
	${HEADER_PATH}/pluto.h
	${HEADER_PATH}/vsop87.h
	${HEADER_PATH}/lunar.h 
	${HEADER_PATH}/elliptic_motion.h
	${HEADER_PATH}/asteroid.h
	${HEADER_PATH}/comet.h
	${HEADER_PATH}/parabolic_motion.h
	${HEADER_PATH}/refraction.h
	${HEADER_PATH}/rise_set.h
	${HEADER_PATH}/angular_separation.h
	${HEADER_PATH}/ln_types.h
	${HEADER_PATH}/utility.h
	${HEADER_PATH}/hyperbolic_motion.h
	${HEADER_PATH}/parallax.h
	${HEADER_PATH}/airmass.h
	${HEADER_PATH}/heliocentric_time.h
)

add_library(${LIBRARY_NAME} 
  ${LIBRARY_PUBLIC_HEADERS}
	julian_day.c
	constellation.c
	dynamical_time.c
	sidereal_time.c
	transform.c
	nutation.c
	aberration.c  
	apparent_position.c
	solar.c
	precession.c 
	proper_motion.c
	mercury.c
	venus.c 
	earth.c 
	mars.c  
	jupiter.c
	saturn.c 
	uranus.c 
	neptune.c 
	pluto.c
	vsop87.c
	lunar.c 
	elliptic_motion.c
	asteroid.c
	comet.c
	parabolic_motion.c
	utility.c
	refraction.c
	rise_set.c
	angular_separation.c
	hyperbolic_motion.c
	parallax.c
	airmass.c
	heliocentric_time.c
	elp/elp10.c  
	elp/elp12.c  
	elp/elp14.c  
	elp/elp16.c  
	elp/elp18.c  
	elp/elp2.c   
	elp/elp21.c  
	elp/elp23.c  
	elp/elp25.c  
	elp/elp27.c  
	elp/elp29.c  
	elp/elp30.c  
	elp/elp32.c  
	elp/elp34.c  
	elp/elp36.c  
	elp/elp5.c  
	elp/elp7.c  
	elp/elp9.c
	elp/elp1.c  
	elp/elp11.c  
	elp/elp13.c 
	elp/elp15.c  
	elp/elp17.c  
	elp/elp19.c  
	elp/elp20.c  
	elp/elp22.c  
	elp/elp24.c  
	elp/elp26.c  
	elp/elp28.c  
	elp/elp3.c   
	elp/elp31.c  
	elp/elp33.c  
	elp/elp35.c  
	elp/elp4.c   
	elp/elp6.c  
	elp/elp8.c
)

if(MSVC)
    if(BUILD_SHARED_LIBRARY)
        set_target_properties(${LIBRARY_NAME} PROPERTIES PREFIX "../../bin/" IMPORT_PREFIX "../")
    else(BUILD_SHARED_LIBRARY)
        set_target_properties(${LIBRARY_NAME} PROPERTIES PREFIX "../")
    endif(BUILD_SHARED_LIBRARY)
endif(MSVC)




# install stuff
set(INSTALL_INCDIR include)
set(INSTALL_BINDIR bin)
if(WIN32)
    set(INSTALL_LIBDIR bin)
    set(INSTALL_ARCHIVEDIR lib)
else(WIN32)
    set(INSTALL_LIBDIR lib${LIB_POSTFIX})
    set(INSTALL_ARCHIVEDIR lib${LIB_POSTFIX})
endif(WIN32)

install(
    TARGETS ${LIBRARY_NAME}
    RUNTIME DESTINATION ${INSTALL_BINDIR}
    LIBRARY DESTINATION ${INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${INSTALL_ARCHIVEDIR}
)

install(
    FILES       ${LIBRARY_PUBLIC_HEADERS}
    DESTINATION ${INSTALL_INCDIR}/${LIBRARY_NAME}
)
