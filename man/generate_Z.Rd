% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/generate_Z.R
\name{generate_Z}
\alias{generate_Z}
\title{Generate a row-wise stacked boolean partition matrix of JI rows and K columns}
\usage{
generate_Z(I, J, K, type = c("symmetric", "random"))
}
\arguments{
\item{I}{(integer) number of individuals}

\item{J}{(integer) number of trials}

\item{K}{(integer) number of levels for a categorical variables}

\item{type}{(character) method to generate the matrix: symmetric (default) or random}
}
\value{
a (JI x K) boolean matrix
}
\description{
Generate a row-wise stacked boolean partition matrix of JI rows and K columns
}
\details{
The function generates a (JI x K) boolean partition matrix for I individuals, J stimuli and K categories. Note that J and K must be chosen so that J%%K = 0 (J must be a multiple of K).
This is an internal function, generally not to be called by the user.
}
\examples{
Z <- generate_Z(I = 2,J = 12,K = 4,type="symmetric")
print(Z)

}
